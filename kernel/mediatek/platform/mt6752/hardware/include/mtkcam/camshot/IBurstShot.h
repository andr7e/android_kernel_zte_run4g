/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 * 
 * MediaTek Inc. (C) 2010. All rights reserved.
 * 
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef _MTK_CAMERA_INC_CAMSHOT_IBURSTSHOT_H_
#define _MTK_CAMERA_INC_CAMPIPE_IBURSTSHOT_H_

#include <mtkcam/common.h>

#include <mtkcam/featureio/aaa_hal_common.h>

/*******************************************************************************
*
********************************************************************************/
namespace NSCamShot {

/******************************************************************************
 * 
 ******************************************************************************/

/**  
 * @class IBurstShot
 * @brief Interface of BurstShot
 */
class IBurstShot : public ICamShot
{
public:

public:     ////    Instantiation.
    /**
     * @brief create the IBurstShot instance  
     *
     * @details 
     * 
     * @note 
     * 
     * @param[in] eShotMode: the shot mode of the caller 
     * @param[in] pszCamShotName: the shot name of the caller           
     *
     * @return
     * - The IBurstShot instance 
     */ 
    static IBurstShot* createInstance(EShotMode const eShotMode, char const* const pszCamShotName);

    /**
     * @brief set capture 3A params
     *
     * @details
     *
     * @note
     *
     * @param[in] pCapParams: the capture params array for 3A
     * @param[in] length: the length of array pCapParams
     *
     * @reutn boolean
     * - true/false
     */
    virtual MBOOL   registerCap3AParam(NS3A::CaptureParam_T* pCapParams, MUINT32 const length);
    
    /**
     * @brief set IspProfile
     *
     * @details
     *
     * @note
     *
     * @param[in] profile: IspProfile
     *
     * @reutn boolean
     * - true/false
     */
    virtual MBOOL   setIspProfile(NS3A::EIspProfile_T const profile);
}; 

}; //namespace NSCamShot
#endif  //  _MTK_CAMERA_INC_CAMSHOT_IBURSTSHOT_H_
