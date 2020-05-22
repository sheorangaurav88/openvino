// Copyright (C) 2018-2019 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "behavior_test_plugin_exec_graph_info.hpp"
#include "template_test_data.hpp"

INSTANTIATE_TEST_CASE_P(
        BehaviorTest,
        BehaviorPluginTestExecGraphInfo,
        ValuesIn(supportedValues),
        getTestCaseName);