//
// SPDX-FileCopyrightText: 2026 The LineageOS Project
// SPDX-License-Identifier: Apache-2.0
//

package vendor.mediatek.hardware.mtkpower;

@VintfStability
interface IMtkPowerCallback {
    oneway void mtkPowerHint(in int hint, in int data);
    oneway void notifyAppState(
            in String packageName, in String activityName, in int pid, in int state, in int uid);
    oneway void notifyScnUpdate(in int scn, in int data);
}
