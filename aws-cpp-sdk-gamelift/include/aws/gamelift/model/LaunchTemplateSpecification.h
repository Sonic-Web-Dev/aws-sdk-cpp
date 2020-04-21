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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace GameLift
{
namespace Model
{

  /**
   * <p> <b>This data type is part of Amazon GameLift FleetIQ with game server
   * groups, which is in preview release and is subject to change.</b> </p> <p>An EC2
   * launch template that contains configuration settings and game server code to be
   * deployed to all instances in a game server group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API LaunchTemplateSpecification
  {
  public:
    LaunchTemplateSpecification();
    LaunchTemplateSpecification(Aws::Utils::Json::JsonView jsonValue);
    LaunchTemplateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an existing EC2 launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>A readable identifier for an existing EC2 launch template. </p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the EC2 launch template to use. If no version is specified,
     * the default version will be used. EC2 allows you to specify a default version
     * for a launch template, if none is set, the default is the first version
     * created.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws