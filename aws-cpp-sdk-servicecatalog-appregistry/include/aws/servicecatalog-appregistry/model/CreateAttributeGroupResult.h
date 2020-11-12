﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppRegistry
{
namespace Model
{
  class AWS_APPREGISTRY_API CreateAttributeGroupResult
  {
  public:
    CreateAttributeGroupResult();
    CreateAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline const AttributeGroup& GetAttributeGroup() const{ return m_attributeGroup; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(const AttributeGroup& value) { m_attributeGroup = value; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(AttributeGroup&& value) { m_attributeGroup = std::move(value); }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline CreateAttributeGroupResult& WithAttributeGroup(const AttributeGroup& value) { SetAttributeGroup(value); return *this;}

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline CreateAttributeGroupResult& WithAttributeGroup(AttributeGroup&& value) { SetAttributeGroup(std::move(value)); return *this;}

  private:

    AttributeGroup m_attributeGroup;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
