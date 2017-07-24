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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/FleetAttribute.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API UpdateFleetRequest : public AppStreamRequest
  {
  public:
    UpdateFleetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline UpdateFleetRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline UpdateFleetRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The image name from which a fleet is created.</p>
     */
    inline UpdateFleetRequest& WithImageName(const char* value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline UpdateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline UpdateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline UpdateFleetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline UpdateFleetRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline UpdateFleetRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of compute resources for the fleet. Fleet instances are
     * launched from this instance type. Available instance types are:</p> <ul> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * </ul>
     */
    inline UpdateFleetRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline const ComputeCapacity& GetComputeCapacity() const{ return m_computeCapacity; }

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline void SetComputeCapacity(const ComputeCapacity& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = value; }

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline void SetComputeCapacity(ComputeCapacity&& value) { m_computeCapacityHasBeenSet = true; m_computeCapacity = std::move(value); }

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline UpdateFleetRequest& WithComputeCapacity(const ComputeCapacity& value) { SetComputeCapacity(value); return *this;}

    /**
     * <p>The parameters for the capacity allocated to the fleet. </p>
     */
    inline UpdateFleetRequest& WithComputeCapacity(ComputeCapacity&& value) { SetComputeCapacity(std::move(value)); return *this;}

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline UpdateFleetRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration for the fleet.</p>
     */
    inline UpdateFleetRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

    /**
     * <p>The maximum time for which a streaming session can run. The input can be any
     * numeric value in seconds between 600 and 57600.</p>
     */
    inline int GetMaxUserDurationInSeconds() const{ return m_maxUserDurationInSeconds; }

    /**
     * <p>The maximum time for which a streaming session can run. The input can be any
     * numeric value in seconds between 600 and 57600.</p>
     */
    inline void SetMaxUserDurationInSeconds(int value) { m_maxUserDurationInSecondsHasBeenSet = true; m_maxUserDurationInSeconds = value; }

    /**
     * <p>The maximum time for which a streaming session can run. The input can be any
     * numeric value in seconds between 600 and 57600.</p>
     */
    inline UpdateFleetRequest& WithMaxUserDurationInSeconds(int value) { SetMaxUserDurationInSeconds(value); return *this;}

    /**
     * <p>The time after disconnection when a session is considered to have ended. If a
     * user who got disconnected reconnects within this timeout interval, the user is
     * connected back to their previous session. The input can be any numeric value in
     * seconds between 60 and 57600.</p>
     */
    inline int GetDisconnectTimeoutInSeconds() const{ return m_disconnectTimeoutInSeconds; }

    /**
     * <p>The time after disconnection when a session is considered to have ended. If a
     * user who got disconnected reconnects within this timeout interval, the user is
     * connected back to their previous session. The input can be any numeric value in
     * seconds between 60 and 57600.</p>
     */
    inline void SetDisconnectTimeoutInSeconds(int value) { m_disconnectTimeoutInSecondsHasBeenSet = true; m_disconnectTimeoutInSeconds = value; }

    /**
     * <p>The time after disconnection when a session is considered to have ended. If a
     * user who got disconnected reconnects within this timeout interval, the user is
     * connected back to their previous session. The input can be any numeric value in
     * seconds between 60 and 57600.</p>
     */
    inline UpdateFleetRequest& WithDisconnectTimeoutInSeconds(int value) { SetDisconnectTimeoutInSeconds(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name displayed to end users on the AppStream 2.0 portal.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Enables or disables default internet access for the fleet.</p>
     */
    inline UpdateFleetRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}

    /**
     * <p>The <i>DirectoryName</i> and <i>OrganizationalUnitDistinguishedName</i>
     * values, which are used to join domains for the AppStream 2.0 streaming
     * instances.</p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    /**
     * <p>The <i>DirectoryName</i> and <i>OrganizationalUnitDistinguishedName</i>
     * values, which are used to join domains for the AppStream 2.0 streaming
     * instances.</p>
     */
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    /**
     * <p>The <i>DirectoryName</i> and <i>OrganizationalUnitDistinguishedName</i>
     * values, which are used to join domains for the AppStream 2.0 streaming
     * instances.</p>
     */
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    /**
     * <p>The <i>DirectoryName</i> and <i>OrganizationalUnitDistinguishedName</i>
     * values, which are used to join domains for the AppStream 2.0 streaming
     * instances.</p>
     */
    inline UpdateFleetRequest& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    /**
     * <p>The <i>DirectoryName</i> and <i>OrganizationalUnitDistinguishedName</i>
     * values, which are used to join domains for the AppStream 2.0 streaming
     * instances.</p>
     */
    inline UpdateFleetRequest& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline const Aws::Vector<FleetAttribute>& GetAttributesToDelete() const{ return m_attributesToDelete; }

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline void SetAttributesToDelete(const Aws::Vector<FleetAttribute>& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = value; }

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline void SetAttributesToDelete(Aws::Vector<FleetAttribute>&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::move(value); }

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline UpdateFleetRequest& WithAttributesToDelete(const Aws::Vector<FleetAttribute>& value) { SetAttributesToDelete(value); return *this;}

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline UpdateFleetRequest& WithAttributesToDelete(Aws::Vector<FleetAttribute>&& value) { SetAttributesToDelete(std::move(value)); return *this;}

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline UpdateFleetRequest& AddAttributesToDelete(const FleetAttribute& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }

    /**
     * <p>Fleet attributes to be deleted.</p>
     */
    inline UpdateFleetRequest& AddAttributesToDelete(FleetAttribute&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
    ComputeCapacity m_computeCapacity;
    bool m_computeCapacityHasBeenSet;
    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;
    int m_maxUserDurationInSeconds;
    bool m_maxUserDurationInSecondsHasBeenSet;
    int m_disconnectTimeoutInSeconds;
    bool m_disconnectTimeoutInSecondsHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet;
    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet;
    Aws::Vector<FleetAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
