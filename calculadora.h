/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct digitos_op {
	float a;
	float b;
};
typedef struct digitos_op digitos_op;

#define CALC_PROG 0x31111111
#define CALC_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  float * suma_1(digitos_op *, CLIENT *);
extern  float * suma_1_svc(digitos_op *, struct svc_req *);
#define RESTA 2
extern  float * resta_1(digitos_op *, CLIENT *);
extern  float * resta_1_svc(digitos_op *, struct svc_req *);
#define MULTIPLICACION 3
extern  float * multiplicacion_1(digitos_op *, CLIENT *);
extern  float * multiplicacion_1_svc(digitos_op *, struct svc_req *);
#define DIVISION 4
extern  float * division_1(digitos_op *, CLIENT *);
extern  float * division_1_svc(digitos_op *, struct svc_req *);
extern int calc_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  float * suma_1();
extern  float * suma_1_svc();
#define RESTA 2
extern  float * resta_1();
extern  float * resta_1_svc();
#define MULTIPLICACION 3
extern  float * multiplicacion_1();
extern  float * multiplicacion_1_svc();
#define DIVISION 4
extern  float * division_1();
extern  float * division_1_svc();
extern int calc_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_digitos_op (XDR *, digitos_op*);

#else /* K&R C */
extern bool_t xdr_digitos_op ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
