/*

pxCore Copyright 2005-2018 John Robinson

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/

#ifndef __RT_VALUE_WRITER_H__
#define __RT_VALUE_WRITER_H__

#include <memory>
#include <rtValue.h>
#include <rtError.h>
#include <rapidjson/document.h>

class rtRemoteEnvironment;


class rtRemoteValueWriter
{
public:
  static rtError write(rtRemoteEnvironment* env,
    rtValue const& from, rapidjson::Value& to, rapidjson::Document& parent);
};

#endif