/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "quadrado.h"

bool_t
xdr_numbers (XDR *xdrs, numbers *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->a))
		 return FALSE;
	return TRUE;
}
