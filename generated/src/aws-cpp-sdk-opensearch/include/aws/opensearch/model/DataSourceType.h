﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/S3GlueDataCatalog.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about the data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DataSourceType">AWS
   * API Reference</a></p>
   */
  class DataSourceType
  {
  public:
    AWS_OPENSEARCHSERVICE_API DataSourceType();
    AWS_OPENSEARCHSERVICE_API DataSourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DataSourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data source for the AWS S3 Glue Data Catalog.</p>
     */
    inline const S3GlueDataCatalog& GetS3GlueDataCatalog() const{ return m_s3GlueDataCatalog; }

    /**
     * <p>The data source for the AWS S3 Glue Data Catalog.</p>
     */
    inline bool S3GlueDataCatalogHasBeenSet() const { return m_s3GlueDataCatalogHasBeenSet; }

    /**
     * <p>The data source for the AWS S3 Glue Data Catalog.</p>
     */
    inline void SetS3GlueDataCatalog(const S3GlueDataCatalog& value) { m_s3GlueDataCatalogHasBeenSet = true; m_s3GlueDataCatalog = value; }

    /**
     * <p>The data source for the AWS S3 Glue Data Catalog.</p>
     */
    inline void SetS3GlueDataCatalog(S3GlueDataCatalog&& value) { m_s3GlueDataCatalogHasBeenSet = true; m_s3GlueDataCatalog = std::move(value); }

    /**
     * <p>The data source for the AWS S3 Glue Data Catalog.</p>
     */
    inline DataSourceType& WithS3GlueDataCatalog(const S3GlueDataCatalog& value) { SetS3GlueDataCatalog(value); return *this;}

    /**
     * <p>The data source for the AWS S3 Glue Data Catalog.</p>
     */
    inline DataSourceType& WithS3GlueDataCatalog(S3GlueDataCatalog&& value) { SetS3GlueDataCatalog(std::move(value)); return *this;}

  private:

    S3GlueDataCatalog m_s3GlueDataCatalog;
    bool m_s3GlueDataCatalogHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
