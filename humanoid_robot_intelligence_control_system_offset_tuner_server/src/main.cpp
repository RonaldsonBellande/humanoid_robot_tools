/*******************************************************************************
 * Copyright 2017 ROBOTIS CO., LTD.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/

/* Author: Jay Song*/

#include <ros/ros.h>

#include "humanoid_robot_intelligence_control_system_offset_tuner_server/humanoid_robot_intelligence_control_system_offset_tuner_server.h"

using namespace humanoid_robot_intelligence_control_system_op;

int main(int argc, char **argv) {
  ros::init(argc, argv, "offset_tuner_server_node");

  OffsetTunerServer *server = OffsetTunerServer::getInstance();

  server->initialize();

  ros::spin();

  return 0;
}
