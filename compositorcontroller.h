/**
* If not stated otherwise in this file or this component's LICENSE
* file the following copyright and licenses apply:
*
* Copyright 2020 RDK Management
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
**/

#ifndef RDKSHELL_COMPOSITOR_CONTROLLER_H
#define RDKSHELL_COMPOSITOR_CONTROLLER_H

#include <string>
#include <vector>

namespace RdkShell
{
    class CompositorController
    {
        public:
            static bool moveToFront(const std::string& client);
            static bool moveToBack(const std::string& client);
            static bool moveBehind(const std::string& client, const std::string& target);
            static bool setFocus(const std::string& client);
            static bool kill(const std::string& client);
            static bool addKeyIntercept(const std::string& client, const uint32_t& keyCode, const uint32_t& flags);
            static bool removeKeyIntercept(const std::string& client, const uint32_t& keyCode, const uint32_t& flags);
            static bool getScreenResolution(uint32_t &width, uint32_t &height);
            static bool setScreenResolution(const uint32_t width, const uint32_t height);
            static bool getClients(std::vector<std::string>& clients);
            static bool getZOrder(std::vector<std::string>&clients);
            static bool getBounds(const std::string& client, uint32_t &x, uint32_t &y, uint32_t &width, uint32_t &height);
            static bool setBounds(const std::string& client, const uint32_t x, const uint32_t y, const uint32_t width, const uint32_t height);
            static bool getVisibility(const std::string& client, bool& visible);
            static bool setVisibility(const std::string& client, const bool visible);
            static bool getOpacity(const std::string& client, unsigned int& opacity);
            static bool setOpacity(const std::string& client, const unsigned int opacity);
            static void onKeyPress(uint32_t keycode, uint32_t flags);
            static void onKeyRelease(uint32_t keycode, uint32_t flags);
            static bool createDisplay(const std::string& client, const std::string& displayName);
            static bool draw();
    };
}

#endif //RDKSHELL_COMPOSITOR_CONTROLLER_H
