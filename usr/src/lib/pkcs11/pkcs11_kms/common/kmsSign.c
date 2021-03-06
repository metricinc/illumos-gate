/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 *
 * Copyright (c) 2003, 2010, Oracle and/or its affiliates. All rights reserved.
 */

#include <security/cryptoki.h>
#include "kmsGlobal.h"

/*ARGSUSED*/
CK_RV
C_SignInit(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey)
{
	if (!kms_initialized)
		return (CKR_CRYPTOKI_NOT_INITIALIZED);

	return (CKR_FUNCTION_NOT_SUPPORTED);
}

/*ARGSUSED*/
CK_RV
C_Sign(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData, CK_ULONG ulDataLen,
    CK_BYTE_PTR pSignature, CK_ULONG_PTR pulSignatureLen)
{
	if (!kms_initialized)
		return (CKR_CRYPTOKI_NOT_INITIALIZED);

	return (CKR_FUNCTION_NOT_SUPPORTED);
}


/*ARGSUSED*/
CK_RV
C_SignUpdate(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pPart,
    CK_ULONG ulPartLen)
{
	if (!kms_initialized)
		return (CKR_CRYPTOKI_NOT_INITIALIZED);
	return (CKR_FUNCTION_NOT_SUPPORTED);
}

/*ARGSUSED*/
CK_RV
C_SignFinal(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pSignature,
    CK_ULONG_PTR pulSignatureLen)
{
	if (!kms_initialized)
		return (CKR_CRYPTOKI_NOT_INITIALIZED);

	return (CKR_FUNCTION_NOT_SUPPORTED);
}

/*ARGSUSED*/
CK_RV
C_SignRecoverInit(CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey)
{
	if (!kms_initialized)
		return (CKR_CRYPTOKI_NOT_INITIALIZED);

	return (CKR_FUNCTION_NOT_SUPPORTED);

}

/*ARGSUSED*/
CK_RV
C_SignRecover(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pData,
    CK_ULONG ulDataLen, CK_BYTE_PTR pSignature, CK_ULONG_PTR pulSignatureLen)
{
	if (!kms_initialized)
		return (CKR_CRYPTOKI_NOT_INITIALIZED);

	return (CKR_FUNCTION_NOT_SUPPORTED);
}
