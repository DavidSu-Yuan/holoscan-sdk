/*
 * Copyright (c) 2022, NVIDIA CORPORATION.
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
 */
#include "gxf/std/extension_factory_helper.hpp"

#include "aja_source.hpp"

GXF_EXT_FACTORY_BEGIN()
GXF_EXT_FACTORY_SET_INFO(0x1e53e49e24024aab, 0xb9b08b08768f3817, "AJA", "AJA Extension", "NVIDIA",
                         "1.0.0", "LICENSE");
GXF_EXT_FACTORY_ADD(0x3ef12fe13d704e2d, 0x848f4d8dedba9d24, nvidia::holoscan::AJASource,
                    nvidia::gxf::Codelet, "AJA Source Codelet");
GXF_EXT_FACTORY_END()
