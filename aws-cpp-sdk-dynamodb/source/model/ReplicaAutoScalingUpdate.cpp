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

#include <aws/dynamodb/model/ReplicaAutoScalingUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ReplicaAutoScalingUpdate::ReplicaAutoScalingUpdate() : 
    m_regionNameHasBeenSet(false),
    m_replicaGlobalSecondaryIndexUpdatesHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet(false)
{
}

ReplicaAutoScalingUpdate::ReplicaAutoScalingUpdate(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaGlobalSecondaryIndexUpdatesHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaAutoScalingUpdate& ReplicaAutoScalingUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaGlobalSecondaryIndexUpdates"))
  {
    Array<JsonView> replicaGlobalSecondaryIndexUpdatesJsonList = jsonValue.GetArray("ReplicaGlobalSecondaryIndexUpdates");
    for(unsigned replicaGlobalSecondaryIndexUpdatesIndex = 0; replicaGlobalSecondaryIndexUpdatesIndex < replicaGlobalSecondaryIndexUpdatesJsonList.GetLength(); ++replicaGlobalSecondaryIndexUpdatesIndex)
    {
      m_replicaGlobalSecondaryIndexUpdates.push_back(replicaGlobalSecondaryIndexUpdatesJsonList[replicaGlobalSecondaryIndexUpdatesIndex].AsObject());
    }
    m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityAutoScalingUpdate"))
  {
    m_replicaProvisionedReadCapacityAutoScalingUpdate = jsonValue.GetObject("ReplicaProvisionedReadCapacityAutoScalingUpdate");

    m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaAutoScalingUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_replicaGlobalSecondaryIndexUpdatesHasBeenSet)
  {
   Array<JsonValue> replicaGlobalSecondaryIndexUpdatesJsonList(m_replicaGlobalSecondaryIndexUpdates.size());
   for(unsigned replicaGlobalSecondaryIndexUpdatesIndex = 0; replicaGlobalSecondaryIndexUpdatesIndex < replicaGlobalSecondaryIndexUpdatesJsonList.GetLength(); ++replicaGlobalSecondaryIndexUpdatesIndex)
   {
     replicaGlobalSecondaryIndexUpdatesJsonList[replicaGlobalSecondaryIndexUpdatesIndex].AsObject(m_replicaGlobalSecondaryIndexUpdates[replicaGlobalSecondaryIndexUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReplicaGlobalSecondaryIndexUpdates", std::move(replicaGlobalSecondaryIndexUpdatesJsonList));

  }

  if(m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedReadCapacityAutoScalingUpdate", m_replicaProvisionedReadCapacityAutoScalingUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws