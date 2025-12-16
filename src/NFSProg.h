#ifndef _NFSPROG_H_
#define _NFSPROG_H_

#include "NFS3Prog.h"
#include "RPCProg.h"

class CNFSProg : public CRPCProg {
 public:
  CNFSProg();
  ~CNFSProg();
  void SetUserID(unsigned int nUID, unsigned int nGID);
  int Process(IInputStream* pInStream,
              IOutputStream* pOutStream,
              ProcessParam* pParam);
  void SetLogOn(bool bLogOn);

 private:
  unsigned int m_nUID, m_nGID;
  CNFS3Prog* m_pNFS3Prog;
};

#endif
