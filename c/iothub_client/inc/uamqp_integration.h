// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef UAMQP_INTEGRATION_H
#define UAMQP_INTEGRATION_H

#include "iothub_message.h"
#include "azure_uamqp_c/message.h"

#ifndef RESULT_OK
#define RESULT_OK 0
#define RESULT_FAILURE 1
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	extern int IoTHubMessage_CreateFromUamqpMessage(MESSAGE_HANDLE uamqp_message, IOTHUB_MESSAGE_HANDLE* iothubclient_message);
	extern int message_create_from_iothub_message(IOTHUB_MESSAGE_HANDLE iothub_message, MESSAGE_HANDLE* uamqp_message);

#ifdef __cplusplus
}
#endif

#endif /*UAMQP_INTEGRATION_H*/
