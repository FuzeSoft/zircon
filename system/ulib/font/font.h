// Copyright 2016 The Fuchsia Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

static uint16_t FONT[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3ffc, 0x3ffc, 0xc003, 0xc003,
    0xcc33, 0xcc33, 0xc003, 0xc003, 0xc003, 0xc003, 0xcff3, 0xcff3,
    0xc3c3, 0xc3c3, 0xc003, 0xc003, 0xc003, 0xc003, 0x3ffc, 0x3ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3ffc, 0x3ffc, 0xffff, 0xffff,
    0xf3cf, 0xf3cf, 0xffff, 0xffff, 0xffff, 0xffff, 0xf00f, 0xf00f,
    0xfc3f, 0xfc3f, 0xffff, 0xffff, 0xffff, 0xffff, 0x3ffc, 0x3ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0f3c, 0x0f3c, 0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x3fff,
    0x3fff, 0x3fff, 0x0ffc, 0x0ffc, 0x03f0, 0x03f0, 0x00c0, 0x00c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00c0, 0x00c0, 0x03f0, 0x03f0, 0x0ffc, 0x0ffc, 0x3fff, 0x3fff,
    0x0ffc, 0x0ffc, 0x03f0, 0x03f0, 0x00c0, 0x00c0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0,
    0x0ff0, 0x0ff0, 0x0ff0, 0x0ff0, 0xfc3f, 0xfc3f, 0xfc3f, 0xfc3f,
    0xfc3f, 0xfc3f, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0,
    0x0ff0, 0x0ff0, 0x3ffc, 0x3ffc, 0xffff, 0xffff, 0xffff, 0xffff,
    0x3ffc, 0x3ffc, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0ff0, 0x0ff0, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xfc3f, 0xfc3f, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0xfc3f, 0xfc3f, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c, 0x300c, 0x300c,
    0x300c, 0x300c, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xf00f, 0xf00f, 0xc3c3, 0xc3c3, 0xcff3, 0xcff3,
    0xcff3, 0xcff3, 0xc3c3, 0xc3c3, 0xf00f, 0xf00f, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3fc0, 0x3fc0, 0x3f00, 0x3f00,
    0x33c0, 0x33c0, 0x30f0, 0x30f0, 0x03fc, 0x03fc, 0x0f0f, 0x0f0f,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x03fc, 0x03fc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0,
    0x03c0, 0x03c0, 0x3ffc, 0x3ffc, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0xfff0, 0xf0f0, 0xf0f0,
    0xfff0, 0xfff0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0,
    0x00f0, 0x00f0, 0x00fc, 0x00fc, 0x00ff, 0x00ff, 0x003f, 0x003f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0xfffc, 0xf03c, 0xf03c,
    0xfffc, 0xfffc, 0xf03c, 0xf03c, 0xf03c, 0xf03c, 0xf03c, 0xf03c,
    0xf03c, 0xf03c, 0xfc3c, 0xfc3c, 0xfc3f, 0xfc3f, 0x3c3f, 0x3c3f,
    0x000f, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0xf3cf, 0xf3cf, 0x0ff0, 0x0ff0, 0xfc3f, 0xfc3f,
    0x0ff0, 0x0ff0, 0xf3cf, 0xf3cf, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0003, 0x0003, 0x000f, 0x000f, 0x003f, 0x003f,
    0x00ff, 0x00ff, 0x03ff, 0x03ff, 0x3fff, 0x3fff, 0x03ff, 0x03ff,
    0x00ff, 0x00ff, 0x003f, 0x003f, 0x000f, 0x000f, 0x0003, 0x0003,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3000, 0x3000, 0x3c00, 0x3c00, 0x3f00, 0x3f00,
    0x3fc0, 0x3fc0, 0x3ff0, 0x3ff0, 0x3fff, 0x3fff, 0x3ff0, 0x3ff0,
    0x3fc0, 0x3fc0, 0x3f00, 0x3f00, 0x3c00, 0x3c00, 0x3000, 0x3000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x3ffc, 0x3ffc, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x3ffc, 0x3ffc, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x0000, 0x0000, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0xfffc, 0xf3cf, 0xf3cf,
    0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf, 0xf3fc, 0xf3fc, 0xf3c0, 0xf3c0,
    0xf3c0, 0xf3c0, 0xf3c0, 0xf3c0, 0xf3c0, 0xf3c0, 0xf3c0, 0xf3c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f, 0x003c, 0x003c,
    0x03f0, 0x03f0, 0x0f3c, 0x0f3c, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x0f3c, 0x0f3c, 0x03f0, 0x03f0, 0x0f00, 0x0f00, 0x3c0f, 0x3c0f,
    0x0ffc, 0x0ffc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x3fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x3ffc, 0x3ffc, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x3ffc, 0x3ffc, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0, 0x3ffc, 0x3ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x3ffc, 0x3ffc, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x3ffc, 0x3ffc, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x03c0, 0x03c0, 0x0f00, 0x0f00, 0x3fff, 0x3fff,
    0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f0, 0x00f0, 0x003c, 0x003c, 0x3fff, 0x3fff,
    0x003c, 0x003c, 0x00f0, 0x00f0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x000f, 0x000f, 0x000f, 0x000f,
    0x000f, 0x000f, 0x3fff, 0x3fff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0c30, 0x0c30, 0x3c3c, 0x3c3c, 0xffff, 0xffff,
    0x3c3c, 0x3c3c, 0x0c30, 0x0c30, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00c0, 0x00c0, 0x03f0, 0x03f0, 0x03f0, 0x03f0, 0x0ffc, 0x0ffc,
    0x0ffc, 0x0ffc, 0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x3fff, 0x3fff, 0x3fff, 0x3fff, 0x0ffc, 0x0ffc, 0x0ffc, 0x0ffc,
    0x03f0, 0x03f0, 0x03f0, 0x03f0, 0x00c0, 0x00c0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0ff0, 0x0ff0, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x0c30, 0x0c30, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f3c, 0x0f3c,
    0x0f3c, 0x0f3c, 0x3fff, 0x3fff, 0x0f3c, 0x0f3c, 0x0f3c, 0x0f3c,
    0x0f3c, 0x0f3c, 0x3fff, 0x3fff, 0x0f3c, 0x0f3c, 0x0f3c, 0x0f3c,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x300f, 0x300f, 0x000f, 0x000f, 0x0ffc, 0x0ffc, 0x3c00, 0x3c00,
    0x3c00, 0x3c00, 0x3c03, 0x3c03, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x300f, 0x300f, 0x3c0f, 0x3c0f, 0x0f00, 0x0f00, 0x03c0, 0x03c0,
    0x00f0, 0x00f0, 0x003c, 0x003c, 0x3c0f, 0x3c0f, 0x3c03, 0x3c03,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03f0, 0x03f0, 0x0f3c, 0x0f3c,
    0x0f3c, 0x0f3c, 0x03f0, 0x03f0, 0x3cfc, 0x3cfc, 0x0fcf, 0x0fcf,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x3cfc, 0x3cfc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0,
    0x003c, 0x003c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x0f00, 0x03c0, 0x03c0,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x03c0, 0x03c0, 0x0f00, 0x0f00,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f0, 0x00f0, 0x03c0, 0x03c0,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x00f0, 0x00f0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0xffff, 0xffff,
    0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x3ffc, 0x3ffc,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x00f0, 0x00f0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3fff, 0x3fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x3000, 0x3000, 0x3c00, 0x3c00, 0x0f00, 0x0f00, 0x03c0, 0x03c0,
    0x00f0, 0x00f0, 0x003c, 0x003c, 0x000f, 0x000f, 0x0003, 0x0003,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c,
    0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf,
    0xf00f, 0xf00f, 0xf00f, 0xf00f, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03f0, 0x03f0,
    0x03fc, 0x03fc, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x3ffc, 0x3ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c00, 0x3c00, 0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x00f0, 0x00f0,
    0x003c, 0x003c, 0x000f, 0x000f, 0x3c0f, 0x3c0f, 0x3fff, 0x3fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x0ff0, 0x0ff0, 0x3c00, 0x3c00,
    0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x0f00, 0x0fc0, 0x0fc0,
    0x0ff0, 0x0ff0, 0x0f3c, 0x0f3c, 0x0f0f, 0x0f0f, 0x3fff, 0x3fff,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x3fc0, 0x3fc0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3fff, 0x3fff, 0x000f, 0x000f,
    0x000f, 0x000f, 0x000f, 0x000f, 0x0fff, 0x0fff, 0x3c00, 0x3c00,
    0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03f0, 0x03f0, 0x003c, 0x003c,
    0x000f, 0x000f, 0x000f, 0x000f, 0x0fff, 0x0fff, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3fff, 0x3fff, 0x3c0f, 0x3c0f,
    0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x0f00, 0x0f00, 0x03c0, 0x03c0,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3ffc, 0x3ffc, 0x3c00, 0x3c00,
    0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x0f00, 0x0f00, 0x03fc, 0x03fc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x00f0, 0x00f0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3c00, 0x3c00,
    0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x00f0, 0x00f0, 0x003c, 0x003c,
    0x00f0, 0x00f0, 0x03c0, 0x03c0, 0x0f00, 0x0f00, 0x3c00, 0x3c00,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3ffc, 0x3ffc, 0x0000, 0x0000, 0x0000, 0x0000,
    0x3ffc, 0x3ffc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x003c, 0x003c,
    0x00f0, 0x00f0, 0x03c0, 0x03c0, 0x0f00, 0x0f00, 0x3c00, 0x3c00,
    0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x00f0, 0x00f0, 0x003c, 0x003c,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf,
    0x3fcf, 0x3fcf, 0x0fcf, 0x0fcf, 0x000f, 0x000f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00c0, 0x00c0, 0x03f0, 0x03f0,
    0x0f3c, 0x0f3c, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3fff, 0x3fff,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0fff, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ffc, 0x0ffc, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0fff, 0x0fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c,
    0x300f, 0x300f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f,
    0x000f, 0x000f, 0x300f, 0x300f, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03ff, 0x03ff, 0x0f3c, 0x0f3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0f3c, 0x0f3c, 0x03ff, 0x03ff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3fff, 0x3fff, 0x3c3c, 0x3c3c,
    0x303c, 0x303c, 0x033c, 0x033c, 0x03fc, 0x03fc, 0x033c, 0x033c,
    0x003c, 0x003c, 0x303c, 0x303c, 0x3c3c, 0x3c3c, 0x3fff, 0x3fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3fff, 0x3fff, 0x3c3c, 0x3c3c,
    0x303c, 0x303c, 0x033c, 0x033c, 0x03fc, 0x03fc, 0x033c, 0x033c,
    0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x00ff, 0x00ff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c,
    0x300f, 0x300f, 0x000f, 0x000f, 0x000f, 0x000f, 0x3fcf, 0x3fcf,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c3c, 0x3c3c, 0x33f0, 0x33f0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3fff, 0x3fff, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3fc0, 0x3fc0, 0x0f00, 0x0f00,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x03fc, 0x03fc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3c3f, 0x3c3f, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x0f3c, 0x0f3c, 0x03fc, 0x03fc, 0x03fc, 0x03fc,
    0x0f3c, 0x0f3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3f, 0x3c3f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00ff, 0x00ff, 0x003c, 0x003c,
    0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
    0x003c, 0x003c, 0x303c, 0x303c, 0x3c3c, 0x3c3c, 0x3fff, 0x3fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xf00f, 0xf00f, 0xfc3f, 0xfc3f,
    0xffff, 0xffff, 0xffff, 0xffff, 0xf3cf, 0xf3cf, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3c0f, 0x3c0f, 0x3c3f, 0x3c3f,
    0x3cff, 0x3cff, 0x3fff, 0x3fff, 0x3fcf, 0x3fcf, 0x3f0f, 0x3f0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0fff, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ffc, 0x0ffc, 0x003c, 0x003c,
    0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x00ff, 0x00ff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3ccf, 0x3ccf, 0x3fcf, 0x3fcf, 0x0ffc, 0x0ffc,
    0x0f00, 0x0f00, 0x3f00, 0x3f00, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0fff, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ffc, 0x0ffc, 0x0f3c, 0x0f3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3f, 0x3c3f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x003c, 0x003c, 0x03f0, 0x03f0, 0x0f00, 0x0f00,
    0x3c00, 0x3c00, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xf3cf, 0xf3cf,
    0xc3c3, 0xc3c3, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf3cf, 0xf3cf,
    0xf3cf, 0xf3cf, 0xffff, 0xffff, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xf00f, 0xf00f,
    0x3c03, 0x3c03, 0x0f00, 0x0f00, 0x03c0, 0x03c0, 0x00f0, 0x00f0,
    0x003c, 0x003c, 0xc00f, 0xc00f, 0xf00f, 0xf00f, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x00f0, 0x00f0,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0003, 0x0003,
    0x000f, 0x000f, 0x003f, 0x003f, 0x00fc, 0x00fc, 0x03f0, 0x03f0,
    0x0fc0, 0x0fc0, 0x3f00, 0x3f00, 0x3c00, 0x3c00, 0x3000, 0x3000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0ff0, 0x0ff0, 0x0f00, 0x0f00,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00c0, 0x00c0, 0x03f0, 0x03f0, 0x0f3c, 0x0f3c, 0x3c0f, 0x3c0f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x03c0, 0x03c0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x03fc, 0x03fc, 0x0f00, 0x0f00, 0x0ffc, 0x0ffc,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x3cfc, 0x3cfc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x003f, 0x003f, 0x003c, 0x003c,
    0x003c, 0x003c, 0x03fc, 0x03fc, 0x0f3c, 0x0f3c, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f, 0x000f, 0x000f,
    0x000f, 0x000f, 0x000f, 0x000f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0fc0, 0x0fc0, 0x0f00, 0x0f00,
    0x0f00, 0x0f00, 0x0ff0, 0x0ff0, 0x0f3c, 0x0f3c, 0x0f0f, 0x0f0f,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x3cfc, 0x3cfc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f, 0x3fff, 0x3fff,
    0x000f, 0x000f, 0x000f, 0x000f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03f0, 0x03f0, 0x0f3c, 0x0f3c,
    0x0c3c, 0x0c3c, 0x003c, 0x003c, 0x00ff, 0x00ff, 0x003c, 0x003c,
    0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x00ff, 0x00ff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3cfc, 0x3cfc, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0ffc, 0x0ffc,
    0x0f00, 0x0f00, 0x0f0f, 0x0f0f, 0x03fc, 0x03fc, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x003f, 0x003f, 0x003c, 0x003c,
    0x003c, 0x003c, 0x0f3c, 0x0f3c, 0x3cfc, 0x3cfc, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3f, 0x3c3f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x03f0, 0x03f0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3c00, 0x3c00, 0x3c00, 0x3c00,
    0x0000, 0x0000, 0x3f00, 0x3f00, 0x3c00, 0x3c00, 0x3c00, 0x3c00,
    0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x3c00, 0x3c00,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x003f, 0x003f, 0x003c, 0x003c,
    0x003c, 0x003c, 0x3c3c, 0x3c3c, 0x0f3c, 0x0f3c, 0x03fc, 0x03fc,
    0x03fc, 0x03fc, 0x0f3c, 0x0f3c, 0x3c3c, 0x3c3c, 0x3c3f, 0x3c3f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03f0, 0x03f0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0ff0, 0x0ff0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3c3f, 0x3c3f, 0xffff, 0xffff, 0xf3cf, 0xf3cf,
    0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0fcf, 0x0fcf, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0fcf, 0x0fcf, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c,
    0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x3c3c, 0x0ffc, 0x0ffc,
    0x003c, 0x003c, 0x003c, 0x003c, 0x00ff, 0x00ff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3cfc, 0x3cfc, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0ffc, 0x0ffc,
    0x0f00, 0x0f00, 0x0f00, 0x0f00, 0x3fc0, 0x3fc0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0fcf, 0x0fcf, 0x3cfc, 0x3cfc, 0x3c3c, 0x3c3c,
    0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x00ff, 0x00ff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0ffc, 0x0ffc, 0x3c0f, 0x3c0f, 0x003c, 0x003c,
    0x03f0, 0x03f0, 0x0f00, 0x0f00, 0x3c0f, 0x3c0f, 0x0ffc, 0x0ffc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00c0, 0x00c0, 0x00f0, 0x00f0,
    0x00f0, 0x00f0, 0x0fff, 0x0fff, 0x00f0, 0x00f0, 0x00f0, 0x00f0,
    0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x3cf0, 0x3cf0, 0x0fc0, 0x0fc0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f,
    0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x3cfc, 0x3cfc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0xf00f, 0xf00f, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f, 0xf00f,
    0xf3cf, 0xf3cf, 0xf3cf, 0xf3cf, 0xffff, 0xffff, 0x3c3c, 0x3c3c,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xf00f, 0xf00f, 0x3c3c, 0x3c3c, 0x0ff0, 0x0ff0,
    0x03c0, 0x03c0, 0x0ff0, 0x0ff0, 0x3c3c, 0x3c3c, 0xf00f, 0xf00f,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3ffc, 0x3ffc,
    0x3c00, 0x3c00, 0x0f00, 0x0f00, 0x03ff, 0x03ff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3fff, 0x3fff, 0x0f0f, 0x0f0f, 0x03c0, 0x03c0,
    0x00f0, 0x00f0, 0x003c, 0x003c, 0x3c0f, 0x3c0f, 0x3fff, 0x3fff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3f00, 0x3f00, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x00fc, 0x00fc, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x3f00, 0x3f00,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x0000, 0x0000, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00fc, 0x00fc, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x3f00, 0x3f00, 0x03c0, 0x03c0,
    0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x03c0, 0x00fc, 0x00fc,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3cfc, 0x3cfc, 0x0fcf, 0x0fcf,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00c0, 0x00c0, 0x03f0, 0x03f0, 0x0f3c, 0x0f3c, 0x3c0f, 0x3c0f,
    0x3c0f, 0x3c0f, 0x3c0f, 0x3c0f, 0x3fff, 0x3fff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
