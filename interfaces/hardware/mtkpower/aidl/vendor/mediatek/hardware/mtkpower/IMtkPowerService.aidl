//
// SPDX-FileCopyrightText: 2026 The LineageOS Project
// SPDX-License-Identifier: Apache-2.0
//

package vendor.mediatek.hardware.mtkpower;

import vendor.mediatek.hardware.mtkpower.IMtkPowerCallback;

@VintfStability
interface IMtkPowerService {
    int perfCusLockHint(in int hint, in int duration, in int pid);
    int perfLockAcquire(
            in int hdl, in int duration, in int[] boostList, in int pid, in int reserved);
    oneway void perfLockRelease(in int hdl, in int reserved);
    int perfLockReleaseSync(in int hdl, in int reserved);
    oneway void mtkCusPowerHint(in int hint, in int data);
    oneway void mtkPowerHint(in int hint, in int data);
    int querySysInfo(in int cmd, in int param);
    int setMtkPowerCallback(in IMtkPowerCallback callback);
    int setMtkScnUpdateCallback(in int scn, in IMtkPowerCallback callback);
    int setSysInfo(in int cmd, in String data);
    oneway void setSysInfoAsync(in int cmd, in String data);
}
