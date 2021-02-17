/**
* If not stated otherwise in this file or this component's LICENSE
* file the following copyright and licenses apply:
*
* Copyright 2021 RDK Management
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

#pragma once

#include <GLES2/gl2.h>

namespace RdkShell
{
    class FrameBuffer
    {
    public:
        FrameBuffer(int width, int height);
        ~FrameBuffer();

        int width() const { return mWidth; }
        int height() const { return mHeight; }

        GLuint texture() const { return mTextureId; }

        bool bind();
        bool unbind();

    private:
        int mWidth;
        int mHeight;

        GLuint mTextureId;
        GLuint mFboId;
    };
}