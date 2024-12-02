/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "libperfctl_vendor"

#include <log/log.h>

uint64_t earaNotifyCVJobBegin(uint64_t jobId, uint64_t jobPriority, uint64_t *result)
{
    ALOGD("[%s]: jobId: %llu, jobPriority: %llu, result: %p", __func__, jobId, jobPriority, result);
    return 0;
}

uint64_t earaNotifyCVJobEnd(uint64_t job_id, uint64_t timestamp, uint32_t *status)
{
    ALOGD("[%s]: job_id: %llu, timestamp: %llu, status: %p", __func__, job_id, timestamp, status);
    return 0;
}

void earaGetUsage(uint param1, uint *usage, uint *status)
{
    ALOGD("[%s]: param1: %u, usage: %p, status: %p", __func__, param1, usage, status);
    return;
}

void earaNotifyJobBegin(uint jobId, uint64_t jobData, long *param_3, long *param_4)
{
    ALOGD("[%s]: jobId: %u, jobData: %llu, param_3: %p, param_4: %p", __func__, jobId, jobData, param_3, param_4);
    return;
}

uint64_t earaNotifyJobEnd(uint32_t jobId, uint64_t timestamp, uint32_t *status,
                          uint32_t flags, int64_t *inputData, int64_t *outputData,
                          uint64_t context, int64_t *result)
{
    ALOGD("[%s]: jobId: %u, timestamp: %llu, status: %p, flags: %u, inputData: %p, outputData: %p, context: %llu, result: %p",
          __func__, jobId, timestamp, status, flags, inputData, outputData, context, result);
    return 0;
}

void fbcNotifyTouch(int touchEvent)
{
    ALOGD("[%s]: touchEvent: %d", __func__, touchEvent);
    return;
}

void xgfGetCamApkPid(uint pid, uint apkId, uint flag)
{
    ALOGD("[%s]: pid: %u, apkId: %u, flag: %u", __func__, pid, apkId, flag);
    return;
}

void xgfGetCamServerPid(void)
{
    ALOGD("[%s]: Get camera server PID", __func__);
    return;
}

void xgfGetFPS(int *currentFPS, int *averageFPS)
{
    ALOGD("[%s]: currentFPS: %p, averageFPS: %p", __func__, currentFPS, averageFPS);
    return;
}

void xgfGetFstbActive(uint64_t status)
{
    ALOGD("[%s]: status: %llu", __func__, status);
    return;
}

void xgfWaitFstbActive(void)
{
    ALOGD("%s called", __func__);
    return;
}

uint xgfGetCmd(uint64_t *param)
{
    ALOGD("[%s]: param: %p", __func__, param);
    return 0;
}
