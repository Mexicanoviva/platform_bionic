/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

static const char ns_a_public1_string[] = "libnstest_ns_a_public1.so";

extern "C" const char* get_ns_a_public1_string() {
  return ns_a_public1_string;
}


extern "C" const char *get_ns_a_public1_internal_string();

extern "C" const char *delegate_get_ns_a_public1_internal_string() {
  return get_ns_a_public1_internal_string();
}


extern "C" const char *get_ns_b_public3_string();

extern "C" const char *delegate_get_ns_b_public3_string() {
  return get_ns_b_public3_string();
}
