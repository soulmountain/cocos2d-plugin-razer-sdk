/*
* Copyright (C) 2012-2016 Razer, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

// this test is Android specific
#if ANDROID

#include "RazerSDK_CallbacksRequestReceipts.h"
#include "RazerSDK_CallbackSingleton.h"

#include <stdio.h>

void CallbacksRequestReceipts::OnSuccess(const std::vector<RazerSDK::Receipt>& receipts)
{
}

void CallbacksRequestReceipts::OnFailure(int errorCode, const std::string& errorMessage)
{
}

void CallbacksRequestReceipts::OnCancel()
{
}

#endif
