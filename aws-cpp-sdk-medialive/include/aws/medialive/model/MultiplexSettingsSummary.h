﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Contains summary configuration for a Multiplex event.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexSettingsSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MultiplexSettingsSummary
  {
  public:
    MultiplexSettingsSummary();
    MultiplexSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    MultiplexSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Transport stream bit rate.
     */
    inline int GetTransportStreamBitrate() const{ return m_transportStreamBitrate; }

    /**
     * Transport stream bit rate.
     */
    inline bool TransportStreamBitrateHasBeenSet() const { return m_transportStreamBitrateHasBeenSet; }

    /**
     * Transport stream bit rate.
     */
    inline void SetTransportStreamBitrate(int value) { m_transportStreamBitrateHasBeenSet = true; m_transportStreamBitrate = value; }

    /**
     * Transport stream bit rate.
     */
    inline MultiplexSettingsSummary& WithTransportStreamBitrate(int value) { SetTransportStreamBitrate(value); return *this;}

  private:

    int m_transportStreamBitrate;
    bool m_transportStreamBitrateHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws