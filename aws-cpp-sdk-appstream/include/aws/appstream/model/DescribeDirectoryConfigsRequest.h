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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API DescribeDirectoryConfigsRequest : public AppStreamRequest
  {
  public:
    DescribeDirectoryConfigsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A specific list of directory names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryNames() const{ return m_directoryNames; }

    /**
     * <p>A specific list of directory names.</p>
     */
    inline void SetDirectoryNames(const Aws::Vector<Aws::String>& value) { m_directoryNamesHasBeenSet = true; m_directoryNames = value; }

    /**
     * <p>A specific list of directory names.</p>
     */
    inline void SetDirectoryNames(Aws::Vector<Aws::String>&& value) { m_directoryNamesHasBeenSet = true; m_directoryNames = std::move(value); }

    /**
     * <p>A specific list of directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithDirectoryNames(const Aws::Vector<Aws::String>& value) { SetDirectoryNames(value); return *this;}

    /**
     * <p>A specific list of directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithDirectoryNames(Aws::Vector<Aws::String>&& value) { SetDirectoryNames(std::move(value)); return *this;}

    /**
     * <p>A specific list of directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& AddDirectoryNames(const Aws::String& value) { m_directoryNamesHasBeenSet = true; m_directoryNames.push_back(value); return *this; }

    /**
     * <p>A specific list of directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& AddDirectoryNames(Aws::String&& value) { m_directoryNamesHasBeenSet = true; m_directoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A specific list of directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& AddDirectoryNames(const char* value) { m_directoryNamesHasBeenSet = true; m_directoryNames.push_back(value); return *this; }

    /**
     * <p>The size of each page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The size of each page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The size of each page of results.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The DescribeDirectoryConfigsResult.NextToken from a previous call to
     * DescribeDirectoryConfigs. If this is the first call, pass null.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_directoryNames;
    bool m_directoryNamesHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
