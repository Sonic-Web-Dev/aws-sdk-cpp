﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class XavcGopBReference
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace XavcGopBReferenceMapper
{
AWS_MEDIACONVERT_API XavcGopBReference GetXavcGopBReferenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcGopBReference(XavcGopBReference value);
} // namespace XavcGopBReferenceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
