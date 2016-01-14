/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2010 - 2013 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel
 * Corporation or its licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 */

#ifndef __MACRO_SUPPORT_H_INCLUDED__
#define __MACRO_SUPPORT_H_INCLUDED__

#ifndef HRTCAT
#define _HRTCAT(m, n)     m##n
#define HRTCAT(m, n)      _HRTCAT(m, n)
#endif

#ifndef HRTSTR
#define _HRTSTR(x)   #x
#define HRTSTR(x)    _HRTSTR(x)
#endif

#endif /* __MACRO_SUPPORT_H_INCLUDED__ */
