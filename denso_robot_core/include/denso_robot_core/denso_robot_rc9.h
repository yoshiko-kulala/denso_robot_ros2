/**
 * Software License Agreement (MIT License)
 *
 * @copyright Copyright (c) 2015 DENSO WAVE INCORPORATED
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef DENSO_ROBOT_RC9_H
#define DENSO_ROBOT_RC9_H

#include "denso_robot_core/denso_robot.h"

namespace denso_robot_core {
class DensoRobotRC9 : public DensoRobot
{
public:
  DensoRobotRC9(
    rclcpp::Node::SharedPtr& node, DensoBase * parent,
    Service_Vec& service, Handle_Vec& handle, const std::string& name, const int * mode);

  ~DensoRobotRC9();
};

typedef std::shared_ptr<DensoRobotRC9> DensoRobotRC9_Ptr;

}  // namespace denso_robot_core

#endif  // DENSO_ROBOT_RC9_H
