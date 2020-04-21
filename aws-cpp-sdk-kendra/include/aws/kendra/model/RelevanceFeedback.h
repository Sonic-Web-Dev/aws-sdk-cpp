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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/RelevanceType.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides feedback on how relevant a document is to a search. Your application
   * uses the <a>SubmitFeedback</a> operation to provide relevance
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/RelevanceFeedback">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API RelevanceFeedback
  {
  public:
    RelevanceFeedback();
    RelevanceFeedback(Aws::Utils::Json::JsonView jsonValue);
    RelevanceFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline RelevanceFeedback& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline RelevanceFeedback& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the search result that the user provided relevance
     * feedback for.</p>
     */
    inline RelevanceFeedback& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline const RelevanceType& GetRelevanceValue() const{ return m_relevanceValue; }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline bool RelevanceValueHasBeenSet() const { return m_relevanceValueHasBeenSet; }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline void SetRelevanceValue(const RelevanceType& value) { m_relevanceValueHasBeenSet = true; m_relevanceValue = value; }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline void SetRelevanceValue(RelevanceType&& value) { m_relevanceValueHasBeenSet = true; m_relevanceValue = std::move(value); }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline RelevanceFeedback& WithRelevanceValue(const RelevanceType& value) { SetRelevanceValue(value); return *this;}

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline RelevanceFeedback& WithRelevanceValue(RelevanceType&& value) { SetRelevanceValue(std::move(value)); return *this;}

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet;

    RelevanceType m_relevanceValue;
    bool m_relevanceValueHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws