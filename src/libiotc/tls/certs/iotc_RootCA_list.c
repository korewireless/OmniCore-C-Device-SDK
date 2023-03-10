/* Copyright 2023 KORE Wireless
 *
 * This is part of the Omnicore Device SDK for Embedded C.
 * It is licensed under the BSD 3-Clause license; you may not use this file
 * except in compliance with the License.
 *
 * You may obtain a copy of the License at:
 *  https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright 2018-2020 Google LLC
 *
 * This is part of the Google Cloud IoT Device SDK for Embedded C.
 * It is licensed under the BSD 3-Clause license; you may not use this file
 * except in compliance with the License.
 *
 * You may obtain a copy of the License at:
 *  https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef __cplusplus
extern "C" {
#endif

#include "iotc_RootCA_list.h"

/* generated by create_buffer.py from a PEM file. Example:
 * ./create_buffer.py --file_name res/trusted_RootCA_certs/roots.pem
 *    --array_name iotc_RootCA_list --out_path src/libiotc/tls/certs --no-pretend
 *
 * The buffer is terminated with '\n' for consistency with POSIX filesystem reads
 */
unsigned char iotc_RootCA_list[ IOTC_ROOTCA_LIST_BYTE_LENGTH ] = {
    0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49,
    0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0d, 0x0a, 0x4d, 0x49, 0x49,
    0x44, 0x56, 0x6a, 0x43, 0x43, 0x41, 0x6a, 0x36, 0x67, 0x41, 0x77, 0x49, 0x42, 0x41, 0x67, 0x49,
    0x54, 0x5a, 0x53, 0x62, 0x45, 0x5a, 0x2f, 0x72, 0x45, 0x67, 0x36, 0x55, 0x34, 0x4f, 0x59, 0x67,
    0x77, 0x48, 0x38, 0x6f, 0x6b, 0x62, 0x50, 0x71, 0x31, 0x4f, 0x54, 0x41, 0x4e, 0x42, 0x67, 0x6b,
    0x71, 0x68, 0x6b, 0x69, 0x47, 0x39, 0x77, 0x30, 0x42, 0x41, 0x51, 0x73, 0x46, 0x0d, 0x0a, 0x41,
    0x44, 0x41, 0x79, 0x4d, 0x52, 0x55, 0x77, 0x45, 0x77, 0x59, 0x44, 0x56, 0x51, 0x51, 0x4b, 0x45,
    0x77, 0x78, 0x4c, 0x62, 0x33, 0x4a, 0x6c, 0x64, 0x32, 0x6c, 0x79, 0x5a, 0x57, 0x78, 0x6c, 0x63,
    0x33, 0x4d, 0x78, 0x47, 0x54, 0x41, 0x58, 0x42, 0x67, 0x4e, 0x56, 0x42, 0x41, 0x4d, 0x54, 0x45,
    0x47, 0x74, 0x76, 0x63, 0x6d, 0x56, 0x33, 0x61, 0x58, 0x4a, 0x6c, 0x62, 0x47, 0x56, 0x7a, 0x0d,
    0x0a, 0x63, 0x79, 0x35, 0x6a, 0x62, 0x32, 0x30, 0x77, 0x49, 0x42, 0x63, 0x4e, 0x4d, 0x6a, 0x49,
    0x78, 0x4d, 0x54, 0x45, 0x78, 0x4d, 0x44, 0x59, 0x30, 0x4f, 0x44, 0x41, 0x32, 0x57, 0x68, 0x67,
    0x50, 0x4d, 0x6a, 0x41, 0x31, 0x4d, 0x6a, 0x45, 0x78, 0x4d, 0x44, 0x4d, 0x77, 0x4e, 0x6a, 0x51,
    0x34, 0x4d, 0x44, 0x56, 0x61, 0x4d, 0x44, 0x49, 0x78, 0x46, 0x54, 0x41, 0x54, 0x42, 0x67, 0x4e,
    0x56, 0x0d, 0x0a, 0x42, 0x41, 0x6f, 0x54, 0x44, 0x45, 0x74, 0x76, 0x63, 0x6d, 0x56, 0x33, 0x61,
    0x58, 0x4a, 0x6c, 0x62, 0x47, 0x56, 0x7a, 0x63, 0x7a, 0x45, 0x5a, 0x4d, 0x42, 0x63, 0x47, 0x41,
    0x31, 0x55, 0x45, 0x41, 0x78, 0x4d, 0x51, 0x61, 0x32, 0x39, 0x79, 0x5a, 0x58, 0x64, 0x70, 0x63,
    0x6d, 0x56, 0x73, 0x5a, 0x58, 0x4e, 0x7a, 0x4c, 0x6d, 0x4e, 0x76, 0x62, 0x54, 0x43, 0x43, 0x41,
    0x53, 0x49, 0x77, 0x0d, 0x0a, 0x44, 0x51, 0x59, 0x4a, 0x4b, 0x6f, 0x5a, 0x49, 0x68, 0x76, 0x63,
    0x4e, 0x41, 0x51, 0x45, 0x42, 0x42, 0x51, 0x41, 0x44, 0x67, 0x67, 0x45, 0x50, 0x41, 0x44, 0x43,
    0x43, 0x41, 0x51, 0x6f, 0x43, 0x67, 0x67, 0x45, 0x42, 0x41, 0x49, 0x73, 0x32, 0x5a, 0x4e, 0x36,
    0x65, 0x64, 0x53, 0x30, 0x64, 0x2b, 0x55, 0x6b, 0x68, 0x51, 0x62, 0x53, 0x4a, 0x72, 0x67, 0x43,
    0x31, 0x5a, 0x77, 0x42, 0x69, 0x0d, 0x0a, 0x2b, 0x58, 0x72, 0x75, 0x6d, 0x75, 0x45, 0x43, 0x4f,
    0x76, 0x7a, 0x39, 0x47, 0x69, 0x77, 0x72, 0x32, 0x6e, 0x52, 0x62, 0x73, 0x5a, 0x6f, 0x66, 0x6a,
    0x47, 0x59, 0x41, 0x79, 0x2b, 0x50, 0x64, 0x4b, 0x66, 0x6b, 0x7a, 0x6c, 0x4a, 0x44, 0x36, 0x61,
    0x4f, 0x57, 0x4b, 0x74, 0x58, 0x39, 0x74, 0x78, 0x35, 0x4e, 0x57, 0x6c, 0x69, 0x68, 0x62, 0x53,
    0x6b, 0x47, 0x62, 0x63, 0x38, 0x6b, 0x6a, 0x0d, 0x0a, 0x59, 0x51, 0x6c, 0x4c, 0x77, 0x72, 0x6d,
    0x2f, 0x36, 0x2f, 0x67, 0x5a, 0x57, 0x48, 0x6a, 0x5a, 0x65, 0x4d, 0x59, 0x38, 0x72, 0x6a, 0x31,
    0x38, 0x2b, 0x69, 0x65, 0x49, 0x7a, 0x46, 0x42, 0x2f, 0x59, 0x33, 0x73, 0x4b, 0x33, 0x4c, 0x6d,
    0x6b, 0x72, 0x47, 0x6e, 0x6d, 0x70, 0x77, 0x31, 0x46, 0x51, 0x4a, 0x74, 0x54, 0x44, 0x6f, 0x4f,
    0x66, 0x30, 0x53, 0x36, 0x59, 0x66, 0x57, 0x49, 0x58, 0x0d, 0x0a, 0x67, 0x52, 0x76, 0x31, 0x71,
    0x4a, 0x72, 0x5a, 0x65, 0x76, 0x57, 0x37, 0x6e, 0x72, 0x7a, 0x6c, 0x7a, 0x7a, 0x65, 0x78, 0x33,
    0x64, 0x6d, 0x4a, 0x72, 0x6f, 0x6a, 0x39, 0x6a, 0x41, 0x63, 0x79, 0x78, 0x67, 0x6a, 0x2b, 0x56,
    0x4b, 0x37, 0x49, 0x72, 0x42, 0x66, 0x55, 0x4a, 0x54, 0x71, 0x34, 0x76, 0x51, 0x34, 0x77, 0x36,
    0x6c, 0x74, 0x50, 0x48, 0x4b, 0x68, 0x39, 0x5a, 0x78, 0x4e, 0x4c, 0x0d, 0x0a, 0x79, 0x49, 0x61,
    0x48, 0x62, 0x39, 0x34, 0x42, 0x55, 0x70, 0x50, 0x75, 0x67, 0x58, 0x65, 0x63, 0x77, 0x41, 0x79,
    0x5a, 0x75, 0x4b, 0x6a, 0x45, 0x46, 0x50, 0x48, 0x38, 0x7a, 0x36, 0x32, 0x62, 0x77, 0x6f, 0x39,
    0x75, 0x53, 0x6e, 0x4a, 0x77, 0x6f, 0x67, 0x73, 0x68, 0x46, 0x75, 0x65, 0x49, 0x41, 0x46, 0x39,
    0x4e, 0x77, 0x35, 0x37, 0x4a, 0x2b, 0x55, 0x67, 0x73, 0x43, 0x46, 0x72, 0x59, 0x0d, 0x0a, 0x71,
    0x4a, 0x48, 0x4c, 0x7a, 0x34, 0x44, 0x53, 0x59, 0x6c, 0x68, 0x5a, 0x68, 0x41, 0x61, 0x71, 0x6f,
    0x59, 0x44, 0x43, 0x44, 0x55, 0x49, 0x61, 0x7a, 0x35, 0x78, 0x51, 0x6b, 0x57, 0x30, 0x67, 0x67,
    0x79, 0x77, 0x71, 0x4f, 0x59, 0x72, 0x6b, 0x42, 0x37, 0x52, 0x4b, 0x2b, 0x72, 0x31, 0x57, 0x36,
    0x63, 0x38, 0x4d, 0x49, 0x67, 0x46, 0x34, 0x4a, 0x49, 0x38, 0x43, 0x41, 0x77, 0x45, 0x41, 0x0d,
    0x0a, 0x41, 0x61, 0x4e, 0x6a, 0x4d, 0x47, 0x45, 0x77, 0x44, 0x67, 0x59, 0x44, 0x56, 0x52, 0x30,
    0x50, 0x41, 0x51, 0x48, 0x2f, 0x42, 0x41, 0x51, 0x44, 0x41, 0x67, 0x45, 0x47, 0x4d, 0x41, 0x38,
    0x47, 0x41, 0x31, 0x55, 0x64, 0x45, 0x77, 0x45, 0x42, 0x2f, 0x77, 0x51, 0x46, 0x4d, 0x41, 0x4d,
    0x42, 0x41, 0x66, 0x38, 0x77, 0x48, 0x51, 0x59, 0x44, 0x56, 0x52, 0x30, 0x4f, 0x42, 0x42, 0x59,
    0x45, 0x0d, 0x0a, 0x46, 0x42, 0x6d, 0x32, 0x55, 0x6f, 0x76, 0x73, 0x34, 0x75, 0x71, 0x72, 0x56,
    0x47, 0x57, 0x37, 0x4f, 0x6b, 0x55, 0x6d, 0x6e, 0x50, 0x58, 0x76, 0x33, 0x42, 0x42, 0x46, 0x4d,
    0x42, 0x38, 0x47, 0x41, 0x31, 0x55, 0x64, 0x49, 0x77, 0x51, 0x59, 0x4d, 0x42, 0x61, 0x41, 0x46,
    0x42, 0x6d, 0x32, 0x55, 0x6f, 0x76, 0x73, 0x34, 0x75, 0x71, 0x72, 0x56, 0x47, 0x57, 0x37, 0x4f,
    0x6b, 0x55, 0x6d, 0x0d, 0x0a, 0x6e, 0x50, 0x58, 0x76, 0x33, 0x42, 0x42, 0x46, 0x4d, 0x41, 0x30,
    0x47, 0x43, 0x53, 0x71, 0x47, 0x53, 0x49, 0x62, 0x33, 0x44, 0x51, 0x45, 0x42, 0x43, 0x77, 0x55,
    0x41, 0x41, 0x34, 0x49, 0x42, 0x41, 0x51, 0x42, 0x46, 0x42, 0x65, 0x4b, 0x77, 0x47, 0x36, 0x6c,
    0x35, 0x32, 0x38, 0x54, 0x6a, 0x72, 0x47, 0x6a, 0x4e, 0x6c, 0x47, 0x75, 0x6d, 0x6b, 0x42, 0x6a,
    0x46, 0x61, 0x50, 0x4b, 0x30, 0x0d, 0x0a, 0x35, 0x47, 0x53, 0x35, 0x2f, 0x4d, 0x57, 0x42, 0x45,
    0x71, 0x4f, 0x7a, 0x58, 0x52, 0x7a, 0x41, 0x31, 0x7a, 0x73, 0x32, 0x58, 0x70, 0x45, 0x6c, 0x34,
    0x2f, 0x48, 0x48, 0x37, 0x4c, 0x64, 0x4f, 0x74, 0x4a, 0x76, 0x49, 0x32, 0x53, 0x2b, 0x6f, 0x53,
    0x6b, 0x62, 0x4f, 0x59, 0x4f, 0x56, 0x46, 0x33, 0x68, 0x4a, 0x6f, 0x68, 0x37, 0x48, 0x2f, 0x5a,
    0x2f, 0x6a, 0x4f, 0x73, 0x62, 0x44, 0x6b, 0x0d, 0x0a, 0x73, 0x2f, 0x4f, 0x58, 0x75, 0x2b, 0x42,
    0x44, 0x50, 0x6e, 0x4a, 0x4e, 0x36, 0x52, 0x67, 0x6d, 0x74, 0x63, 0x71, 0x44, 0x41, 0x5a, 0x61,
    0x2f, 0x4b, 0x74, 0x4b, 0x4c, 0x68, 0x63, 0x49, 0x47, 0x43, 0x77, 0x4b, 0x35, 0x53, 0x6c, 0x2f,
    0x43, 0x2b, 0x56, 0x78, 0x36, 0x62, 0x55, 0x6f, 0x67, 0x58, 0x54, 0x43, 0x61, 0x69, 0x38, 0x52,
    0x77, 0x6e, 0x47, 0x42, 0x39, 0x58, 0x77, 0x46, 0x31, 0x0d, 0x0a, 0x36, 0x45, 0x55, 0x5a, 0x63,
    0x79, 0x61, 0x61, 0x5a, 0x70, 0x63, 0x4a, 0x67, 0x30, 0x77, 0x45, 0x6a, 0x59, 0x55, 0x6d, 0x2f,
    0x74, 0x79, 0x76, 0x65, 0x68, 0x6e, 0x70, 0x52, 0x38, 0x55, 0x73, 0x6c, 0x39, 0x61, 0x44, 0x55,
    0x64, 0x70, 0x4b, 0x4d, 0x30, 0x4e, 0x67, 0x54, 0x67, 0x43, 0x64, 0x57, 0x61, 0x41, 0x51, 0x43,
    0x4e, 0x54, 0x34, 0x48, 0x70, 0x54, 0x76, 0x48, 0x65, 0x31, 0x76, 0x0d, 0x0a, 0x38, 0x52, 0x39,
    0x37, 0x63, 0x39, 0x4f, 0x70, 0x63, 0x54, 0x42, 0x63, 0x2f, 0x43, 0x73, 0x32, 0x58, 0x61, 0x64,
    0x42, 0x74, 0x4f, 0x59, 0x32, 0x6c, 0x77, 0x44, 0x48, 0x73, 0x6b, 0x4d, 0x69, 0x6a, 0x35, 0x30,
    0x2b, 0x6e, 0x2b, 0x78, 0x7a, 0x61, 0x73, 0x2b, 0x6a, 0x42, 0x50, 0x62, 0x72, 0x6e, 0x54, 0x62,
    0x59, 0x49, 0x6a, 0x63, 0x69, 0x78, 0x53, 0x45, 0x69, 0x53, 0x73, 0x78, 0x6d, 0x0d, 0x0a, 0x35,
    0x76, 0x56, 0x48, 0x72, 0x44, 0x57, 0x4f, 0x39, 0x6e, 0x61, 0x50, 0x67, 0x62, 0x4f, 0x37, 0x73,
    0x49, 0x75, 0x45, 0x78, 0x76, 0x68, 0x4a, 0x53, 0x42, 0x4d, 0x65, 0x42, 0x65, 0x51, 0x42, 0x51,
    0x34, 0x77, 0x55, 0x46, 0x6d, 0x61, 0x35, 0x45, 0x6e, 0x64, 0x63, 0x67, 0x34, 0x5a, 0x45, 0x38,
    0x43, 0x43, 0x71, 0x47, 0x6c, 0x73, 0x6e, 0x0d, 0x0a, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x45, 0x4e,
    0x44, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d,
    0x2d, 0x2d, 0x0d, 0x0a };

#ifdef __cplusplus
}
#endif
