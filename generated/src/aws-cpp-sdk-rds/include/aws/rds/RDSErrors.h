﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws
{
namespace RDS
{
enum class RDSErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  AUTHORIZATION_ALREADY_EXISTS_FAULT= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  AUTHORIZATION_NOT_FOUND_FAULT,
  AUTHORIZATION_QUOTA_EXCEEDED_FAULT,
  BACKUP_POLICY_NOT_FOUND_FAULT,
  BLUE_GREEN_DEPLOYMENT_ALREADY_EXISTS_FAULT,
  BLUE_GREEN_DEPLOYMENT_NOT_FOUND_FAULT,
  CERTIFICATE_NOT_FOUND_FAULT,
  CREATE_CUSTOM_D_B_ENGINE_VERSION_FAULT,
  CUSTOM_AVAILABILITY_ZONE_NOT_FOUND_FAULT,
  CUSTOM_D_B_ENGINE_VERSION_ALREADY_EXISTS_FAULT,
  CUSTOM_D_B_ENGINE_VERSION_NOT_FOUND_FAULT,
  CUSTOM_D_B_ENGINE_VERSION_QUOTA_EXCEEDED_FAULT,
  DOMAIN_NOT_FOUND_FAULT,
  D_B_CLUSTER_ALREADY_EXISTS_FAULT,
  D_B_CLUSTER_AUTOMATED_BACKUP_NOT_FOUND_FAULT,
  D_B_CLUSTER_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT,
  D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT,
  D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT,
  D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT,
  D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT,
  D_B_CLUSTER_NOT_FOUND_FAULT,
  D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT,
  D_B_CLUSTER_QUOTA_EXCEEDED_FAULT,
  D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT,
  D_B_CLUSTER_ROLE_NOT_FOUND_FAULT,
  D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT,
  D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT,
  D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT,
  D_B_INSTANCE_ALREADY_EXISTS_FAULT,
  D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT,
  D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT,
  D_B_INSTANCE_NOT_FOUND_FAULT,
  D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT,
  D_B_INSTANCE_ROLE_NOT_FOUND_FAULT,
  D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT,
  D_B_LOG_FILE_NOT_FOUND_FAULT,
  D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT,
  D_B_PARAMETER_GROUP_NOT_FOUND_FAULT,
  D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT,
  D_B_PROXY_ALREADY_EXISTS_FAULT,
  D_B_PROXY_ENDPOINT_ALREADY_EXISTS_FAULT,
  D_B_PROXY_ENDPOINT_NOT_FOUND_FAULT,
  D_B_PROXY_ENDPOINT_QUOTA_EXCEEDED_FAULT,
  D_B_PROXY_NOT_FOUND_FAULT,
  D_B_PROXY_QUOTA_EXCEEDED_FAULT,
  D_B_PROXY_TARGET_ALREADY_REGISTERED_FAULT,
  D_B_PROXY_TARGET_GROUP_NOT_FOUND_FAULT,
  D_B_PROXY_TARGET_NOT_FOUND_FAULT,
  D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT,
  D_B_SECURITY_GROUP_NOT_FOUND_FAULT,
  D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT,
  D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT,
  D_B_SNAPSHOT_ALREADY_EXISTS_FAULT,
  D_B_SNAPSHOT_NOT_FOUND_FAULT,
  D_B_SNAPSHOT_TENANT_DATABASE_NOT_FOUND_FAULT,
  D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT,
  D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS,
  D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT,
  D_B_SUBNET_GROUP_NOT_FOUND_FAULT,
  D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT,
  D_B_SUBNET_QUOTA_EXCEEDED_FAULT,
  D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT,
  EC2_IMAGE_PROPERTIES_NOT_SUPPORTED_FAULT,
  EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT,
  EXPORT_TASK_ALREADY_EXISTS_FAULT,
  EXPORT_TASK_NOT_FOUND_FAULT,
  GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT,
  GLOBAL_CLUSTER_NOT_FOUND_FAULT,
  GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT,
  IAM_ROLE_MISSING_PERMISSIONS_FAULT,
  IAM_ROLE_NOT_FOUND_FAULT,
  INSTANCE_QUOTA_EXCEEDED_FAULT,
  INSUFFICIENT_AVAILABLE_I_PS_IN_SUBNET_FAULT,
  INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT,
  INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT,
  INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT,
  INTEGRATION_ALREADY_EXISTS_FAULT,
  INTEGRATION_CONFLICT_OPERATION_FAULT,
  INTEGRATION_NOT_FOUND_FAULT,
  INTEGRATION_QUOTA_EXCEEDED_FAULT,
  INVALID_BLUE_GREEN_DEPLOYMENT_STATE_FAULT,
  INVALID_CUSTOM_D_B_ENGINE_VERSION_STATE_FAULT,
  INVALID_D_B_CLUSTER_AUTOMATED_BACKUP_STATE_FAULT,
  INVALID_D_B_CLUSTER_CAPACITY_FAULT,
  INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT,
  INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT,
  INVALID_D_B_CLUSTER_STATE_FAULT,
  INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT,
  INVALID_D_B_INSTANCE_STATE_FAULT,
  INVALID_D_B_PARAMETER_GROUP_STATE_FAULT,
  INVALID_D_B_PROXY_ENDPOINT_STATE_FAULT,
  INVALID_D_B_PROXY_STATE_FAULT,
  INVALID_D_B_SECURITY_GROUP_STATE_FAULT,
  INVALID_D_B_SNAPSHOT_STATE_FAULT,
  INVALID_D_B_SUBNET_GROUP_FAULT,
  INVALID_D_B_SUBNET_GROUP_STATE_FAULT,
  INVALID_D_B_SUBNET_STATE_FAULT,
  INVALID_EVENT_SUBSCRIPTION_STATE_FAULT,
  INVALID_EXPORT_ONLY_FAULT,
  INVALID_EXPORT_SOURCE_STATE_FAULT,
  INVALID_EXPORT_TASK_STATE_FAULT,
  INVALID_GLOBAL_CLUSTER_STATE_FAULT,
  INVALID_INTEGRATION_STATE_FAULT,
  INVALID_OPTION_GROUP_STATE_FAULT,
  INVALID_RESTORE_FAULT,
  INVALID_S3_BUCKET_FAULT,
  INVALID_SUBNET,
  INVALID_V_P_C_NETWORK_STATE_FAULT,
  K_M_S_KEY_NOT_ACCESSIBLE_FAULT,
  NETWORK_TYPE_NOT_SUPPORTED,
  OPTION_GROUP_ALREADY_EXISTS_FAULT,
  OPTION_GROUP_NOT_FOUND_FAULT,
  OPTION_GROUP_QUOTA_EXCEEDED_FAULT,
  POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT,
  PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT,
  RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT,
  RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT,
  RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT,
  RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT,
  RESOURCE_NOT_FOUND_FAULT,
  SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT,
  SNAPSHOT_QUOTA_EXCEEDED_FAULT,
  SOURCE_CLUSTER_NOT_SUPPORTED_FAULT,
  SOURCE_DATABASE_NOT_SUPPORTED_FAULT,
  SOURCE_NOT_FOUND_FAULT,
  STORAGE_QUOTA_EXCEEDED_FAULT,
  STORAGE_TYPE_NOT_AVAILABLE_FAULT,
  STORAGE_TYPE_NOT_SUPPORTED_FAULT,
  SUBNET_ALREADY_IN_USE,
  SUBSCRIPTION_ALREADY_EXIST_FAULT,
  SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT,
  SUBSCRIPTION_NOT_FOUND_FAULT,
  S_N_S_INVALID_TOPIC_FAULT,
  S_N_S_NO_AUTHORIZATION_FAULT,
  S_N_S_TOPIC_ARN_NOT_FOUND_FAULT,
  TENANT_DATABASE_ALREADY_EXISTS_FAULT,
  TENANT_DATABASE_NOT_FOUND_FAULT,
  TENANT_DATABASE_QUOTA_EXCEEDED_FAULT
};

class AWS_RDS_API RDSError : public Aws::Client::AWSError<RDSErrors>
{
public:
  RDSError() {}
  RDSError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<RDSErrors>(rhs) {}
  RDSError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<RDSErrors>(rhs) {}
  RDSError(const Aws::Client::AWSError<RDSErrors>& rhs) : Aws::Client::AWSError<RDSErrors>(rhs) {}
  RDSError(Aws::Client::AWSError<RDSErrors>&& rhs) : Aws::Client::AWSError<RDSErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace RDSErrorMapper
{
  AWS_RDS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace RDS
} // namespace Aws
