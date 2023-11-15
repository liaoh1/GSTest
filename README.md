# About the project 
The project is designed to build a project  simulating a Gray-Scott reaction-diffusion system and output the results to VTK files for visualization, plus, the project has three test funtions which are:
1. Check that the type of the model parameters (F, k) matches that of the element type of the u and v vectors.<br>
2. Check that the variables u and v are the same size.<br>
3. Check that the simulation produces the mathematically correct answer when u = 0 and v = 0.<br>

# The conditions that need to be satisfied
## GoogleTest
we already have GoogleTest in our repository, but in case there is something wrong and the clients don't have. The reason why we compile this googletest is because we wanna use the header file of the googletest and some library, after building this, the lib and include files would show up.
GoogleTest, here is the steps:
1. git clone https://github.com/google/googletest.git -b v1.14.0<br>
2. cd googletest <br>
3. cd build <br>
4. cmake -Dgtest_build_tests=on -DCMAKE_INSTALL_PREFIX=. ..
5. make; install make

# The structure of the project
GSTest<br>
├── CMakeLists.txt<br>
├── README.md<br>
├── googletest
│   ├── BUILD.bazel
│   ├── CMakeLists.txt
│   ├── CONTRIBUTING.md
│   ├── CONTRIBUTORS
│   ├── LICENSE
│   ├── README.md
│   ├── WORKSPACE
│   ├── ci
│   │   ├── linux-presubmit.sh
│   │   ├── macos-presubmit.sh
│   │   └── windows-presubmit.bat
│   ├── docs
│   │   ├── _config.yml
│   │   ├── _data
│   │   │   └── navigation.yml
│   │   ├── _layouts
│   │   │   └── default.html
│   │   ├── _sass
│   │   │   └── main.scss
│   │   ├── advanced.md
│   │   ├── assets
│   │   │   └── css
│   │   │       └── style.scss
│   │   ├── community_created_documentation.md
│   │   ├── faq.md
│   │   ├── gmock_cheat_sheet.md
│   │   ├── gmock_cook_book.md
│   │   ├── gmock_faq.md
│   │   ├── gmock_for_dummies.md
│   │   ├── index.md
│   │   ├── pkgconfig.md
│   │   ├── platforms.md
│   │   ├── primer.md
│   │   ├── quickstart-bazel.md
│   │   ├── quickstart-cmake.md
│   │   ├── reference
│   │   │   ├── actions.md
│   │   │   ├── assertions.md
│   │   │   ├── matchers.md
│   │   │   ├── mocking.md
│   │   │   └── testing.md
│   │   └── samples.md
│   ├── googlemock
│   │   ├── CMakeLists.txt
│   │   ├── README.md
│   │   ├── cmake
│   │   │   ├── gmock.pc.in
│   │   │   └── gmock_main.pc.in
│   │   ├── docs
│   │   │   └── README.md
│   │   ├── include
│   │   │   └── gmock
│   │   │       ├── gmock-actions.h
│   │   │       ├── gmock-cardinalities.h
│   │   │       ├── gmock-function-mocker.h
│   │   │       ├── gmock-matchers.h
│   │   │       ├── gmock-more-actions.h
│   │   │       ├── gmock-more-matchers.h
│   │   │       ├── gmock-nice-strict.h
│   │   │       ├── gmock-spec-builders.h
│   │   │       ├── gmock.h
│   │   │       └── internal
│   │   │           ├── custom
│   │   │           │   ├── README.md
│   │   │           │   ├── gmock-generated-actions.h
│   │   │           │   ├── gmock-matchers.h
│   │   │           │   └── gmock-port.h
│   │   │           ├── gmock-internal-utils.h
│   │   │           ├── gmock-port.h
│   │   │           └── gmock-pp.h
│   │   ├── src
│   │   │   ├── gmock-all.cc
│   │   │   ├── gmock-cardinalities.cc
│   │   │   ├── gmock-internal-utils.cc
│   │   │   ├── gmock-matchers.cc
│   │   │   ├── gmock-spec-builders.cc
│   │   │   ├── gmock.cc
│   │   │   └── gmock_main.cc
│   │   └── test
│   │       ├── BUILD.bazel
│   │       ├── gmock-actions_test.cc
│   │       ├── gmock-cardinalities_test.cc
│   │       ├── gmock-function-mocker_test.cc
│   │       ├── gmock-internal-utils_test.cc
│   │       ├── gmock-matchers-arithmetic_test.cc
│   │       ├── gmock-matchers-comparisons_test.cc
│   │       ├── gmock-matchers-containers_test.cc
│   │       ├── gmock-matchers-misc_test.cc
│   │       ├── gmock-matchers_test.h
│   │       ├── gmock-more-actions_test.cc
│   │       ├── gmock-nice-strict_test.cc
│   │       ├── gmock-port_test.cc
│   │       ├── gmock-pp-string_test.cc
│   │       ├── gmock-pp_test.cc
│   │       ├── gmock-spec-builders_test.cc
│   │       ├── gmock_all_test.cc
│   │       ├── gmock_ex_test.cc
│   │       ├── gmock_leak_test.py
│   │       ├── gmock_leak_test_.cc
│   │       ├── gmock_link2_test.cc
│   │       ├── gmock_link_test.cc
│   │       ├── gmock_link_test.h
│   │       ├── gmock_output_test.py
│   │       ├── gmock_output_test_.cc
│   │       ├── gmock_output_test_golden.txt
│   │       ├── gmock_stress_test.cc
│   │       ├── gmock_test.cc
│   │       └── gmock_test_utils.py
│   ├── googletest
│   │   ├── CMakeLists.txt
│   │   ├── README.md
│   │   ├── cmake
│   │   │   ├── Config.cmake.in
│   │   │   ├── gtest.pc.in
│   │   │   ├── gtest_main.pc.in
│   │   │   ├── internal_utils.cmake
│   │   │   └── libgtest.la.in
│   │   ├── docs
│   │   │   └── README.md
│   │   ├── googletest
│   │   │   ├── generated
│   │   │   │   ├── GTestConfig.cmake
│   │   │   │   ├── GTestConfigVersion.cmake
│   │   │   │   ├── gmock.pc
│   │   │   │   ├── gmock_main.pc
│   │   │   │   ├── gtest.pc
│   │   │   │   └── gtest_main.pc
│   │   │   ├── googletest-break-on-failure-unittest_
│   │   │   ├── googletest-catch-exceptions-ex-test_
│   │   │   ├── googletest-catch-exceptions-no-ex-test_
│   │   │   ├── googletest-color-test_
│   │   │   ├── googletest-death-test-test
│   │   │   ├── googletest-env-var-test_
│   │   │   ├── googletest-filepath-test
│   │   │   ├── googletest-filter-unittest_
│   │   │   ├── googletest-list-tests-unittest_
│   │   │   ├── googletest-listener-test
│   │   │   ├── googletest-message-test
│   │   │   ├── googletest-options-test
│   │   │   ├── googletest-output-test_
│   │   │   ├── googletest-param-test-test
│   │   │   ├── googletest-port-test
│   │   │   ├── googletest-printers-test
│   │   │   ├── googletest-shuffle-test_
│   │   │   ├── googletest-test-part-test
│   │   │   ├── googletest-throw-on-failure-test_
│   │   │   ├── googletest-uninitialized-test_
│   │   │   ├── gtest-death-test_ex_catch_test
│   │   │   ├── gtest-death-test_ex_nocatch_test
│   │   │   ├── gtest-typed-test_test
│   │   │   ├── gtest-unittest-api_test
│   │   │   ├── gtest_dll_test_
│   │   │   ├── gtest_environment_test
│   │   │   ├── gtest_help_test_
│   │   │   ├── gtest_list_output_unittest_
│   │   │   ├── gtest_main_unittest
│   │   │   ├── gtest_no_rtti_unittest
│   │   │   ├── gtest_no_test_unittest
│   │   │   ├── gtest_pred_impl_unittest
│   │   │   ├── gtest_premature_exit_test
│   │   │   ├── gtest_prod_test
│   │   │   ├── gtest_repeat_test
│   │   │   ├── gtest_skip_in_environment_setup_test
│   │   │   ├── gtest_skip_test
│   │   │   ├── gtest_sole_header_test
│   │   │   ├── gtest_stress_test
│   │   │   ├── gtest_throw_on_failure_ex_test
│   │   │   ├── gtest_unittest
│   │   │   ├── gtest_xml_outfile1_test_
│   │   │   ├── gtest_xml_outfile2_test_
│   │   │   └── gtest_xml_output_unittest_
│   │   ├── include
│   │   │   └── gtest
│   │   │       ├── gtest-assertion-result.h
│   │   │       ├── gtest-death-test.h
│   │   │       ├── gtest-matchers.h
│   │   │       ├── gtest-message.h
│   │   │       ├── gtest-param-test.h
│   │   │       ├── gtest-printers.h
│   │   │       ├── gtest-spi.h
│   │   │       ├── gtest-test-part.h
│   │   │       ├── gtest-typed-test.h
│   │   │       ├── gtest.h
│   │   │       ├── gtest_pred_impl.h
│   │   │       ├── gtest_prod.h
│   │   │       └── internal
│   │   │           ├── custom
│   │   │           │   ├── README.md
│   │   │           │   ├── gtest-port.h
│   │   │           │   ├── gtest-printers.h
│   │   │           │   └── gtest.h
│   │   │           ├── gtest-death-test-internal.h
│   │   │           ├── gtest-filepath.h
│   │   │           ├── gtest-internal.h
│   │   │           ├── gtest-param-util.h
│   │   │           ├── gtest-port-arch.h
│   │   │           ├── gtest-port.h
│   │   │           ├── gtest-string.h
│   │   │           └── gtest-type-util.h
│   │   ├── samples
│   │   │   ├── prime_tables.h
│   │   │   ├── sample1.cc
│   │   │   ├── sample1.h
│   │   │   ├── sample10_unittest.cc
│   │   │   ├── sample1_unittest.cc
│   │   │   ├── sample2.cc
│   │   │   ├── sample2.h
│   │   │   ├── sample2_unittest.cc
│   │   │   ├── sample3-inl.h
│   │   │   ├── sample3_unittest.cc
│   │   │   ├── sample4.cc
│   │   │   ├── sample4.h
│   │   │   ├── sample4_unittest.cc
│   │   │   ├── sample5_unittest.cc
│   │   │   ├── sample6_unittest.cc
│   │   │   ├── sample7_unittest.cc
│   │   │   ├── sample8_unittest.cc
│   │   │   └── sample9_unittest.cc
│   │   ├── src
│   │   │   ├── gtest-all.cc
│   │   │   ├── gtest-assertion-result.cc
│   │   │   ├── gtest-death-test.cc
│   │   │   ├── gtest-filepath.cc
│   │   │   ├── gtest-internal-inl.h
│   │   │   ├── gtest-matchers.cc
│   │   │   ├── gtest-port.cc
│   │   │   ├── gtest-printers.cc
│   │   │   ├── gtest-test-part.cc
│   │   │   ├── gtest-typed-test.cc
│   │   │   ├── gtest.cc
│   │   │   └── gtest_main.cc
│   │   └── test
│   │       ├── BUILD.bazel
│   │       ├── googletest-break-on-failure-unittest.py
│   │       ├── googletest-break-on-failure-unittest_.cc
│   │       ├── googletest-catch-exceptions-test.py
│   │       ├── googletest-catch-exceptions-test_.cc
│   │       ├── googletest-color-test.py
│   │       ├── googletest-color-test_.cc
│   │       ├── googletest-death-test-test.cc
│   │       ├── googletest-death-test_ex_test.cc
│   │       ├── googletest-env-var-test.py
│   │       ├── googletest-env-var-test_.cc
│   │       ├── googletest-failfast-unittest.py
│   │       ├── googletest-failfast-unittest_.cc
│   │       ├── googletest-filepath-test.cc
│   │       ├── googletest-filter-unittest.py
│   │       ├── googletest-filter-unittest_.cc
│   │       ├── googletest-global-environment-unittest.py
│   │       ├── googletest-global-environment-unittest_.cc
│   │       ├── googletest-json-outfiles-test.py
│   │       ├── googletest-json-output-unittest.py
│   │       ├── googletest-list-tests-unittest.py
│   │       ├── googletest-list-tests-unittest_.cc
│   │       ├── googletest-listener-test.cc
│   │       ├── googletest-message-test.cc
│   │       ├── googletest-options-test.cc
│   │       ├── googletest-output-test-golden-lin.txt
│   │       ├── googletest-output-test.py
│   │       ├── googletest-output-test_.cc
│   │       ├── googletest-param-test-invalid-name1-test.py
│   │       ├── googletest-param-test-invalid-name1-test_.cc
│   │       ├── googletest-param-test-invalid-name2-test.py
│   │       ├── googletest-param-test-invalid-name2-test_.cc
│   │       ├── googletest-param-test-test.cc
│   │       ├── googletest-param-test-test.h
│   │       ├── googletest-param-test2-test.cc
│   │       ├── googletest-port-test.cc
│   │       ├── googletest-printers-test.cc
│   │       ├── googletest-setuptestsuite-test.py
│   │       ├── googletest-setuptestsuite-test_.cc
│   │       ├── googletest-shuffle-test.py
│   │       ├── googletest-shuffle-test_.cc
│   │       ├── googletest-test-part-test.cc
│   │       ├── googletest-throw-on-failure-test.py
│   │       ├── googletest-throw-on-failure-test_.cc
│   │       ├── googletest-uninitialized-test.py
│   │       ├── googletest-uninitialized-test_.cc
│   │       ├── gtest-typed-test2_test.cc
│   │       ├── gtest-typed-test_test.cc
│   │       ├── gtest-typed-test_test.h
│   │       ├── gtest-unittest-api_test.cc
│   │       ├── gtest_all_test.cc
│   │       ├── gtest_assert_by_exception_test.cc
│   │       ├── gtest_dirs_test.cc
│   │       ├── gtest_environment_test.cc
│   │       ├── gtest_help_test.py
│   │       ├── gtest_help_test_.cc
│   │       ├── gtest_json_test_utils.py
│   │       ├── gtest_list_output_unittest.py
│   │       ├── gtest_list_output_unittest_.cc
│   │       ├── gtest_main_unittest.cc
│   │       ├── gtest_no_test_unittest.cc
│   │       ├── gtest_pred_impl_unittest.cc
│   │       ├── gtest_premature_exit_test.cc
│   │       ├── gtest_prod_test.cc
│   │       ├── gtest_repeat_test.cc
│   │       ├── gtest_skip_check_output_test.py
│   │       ├── gtest_skip_environment_check_output_test.py
│   │       ├── gtest_skip_in_environment_setup_test.cc
│   │       ├── gtest_skip_test.cc
│   │       ├── gtest_sole_header_test.cc
│   │       ├── gtest_stress_test.cc
│   │       ├── gtest_test_macro_stack_footprint_test.cc
│   │       ├── gtest_test_utils.py
│   │       ├── gtest_testbridge_test.py
│   │       ├── gtest_testbridge_test_.cc
│   │       ├── gtest_throw_on_failure_ex_test.cc
│   │       ├── gtest_unittest.cc
│   │       ├── gtest_xml_outfile1_test_.cc
│   │       ├── gtest_xml_outfile2_test_.cc
│   │       ├── gtest_xml_outfiles_test.py
│   │       ├── gtest_xml_output_unittest.py
│   │       ├── gtest_xml_output_unittest_.cc
│   │       ├── gtest_xml_test_utils.py
│   │       ├── production.cc
│   │       └── production.h
│   ├── googletest_deps.bzl
│   ├── gs
│   ├── include
│   │   ├── gmock
│   │   │   ├── gmock-actions.h
│   │   │   ├── gmock-cardinalities.h
│   │   │   ├── gmock-function-mocker.h
│   │   │   ├── gmock-matchers.h
│   │   │   ├── gmock-more-actions.h
│   │   │   ├── gmock-more-matchers.h
│   │   │   ├── gmock-nice-strict.h
│   │   │   ├── gmock-spec-builders.h
│   │   │   ├── gmock.h
│   │   │   └── internal
│   │   │       ├── custom
│   │   │       │   ├── README.md
│   │   │       │   ├── gmock-generated-actions.h
│   │   │       │   ├── gmock-matchers.h
│   │   │       │   └── gmock-port.h
│   │   │       ├── gmock-internal-utils.h
│   │   │       ├── gmock-port.h
│   │   │       └── gmock-pp.h
│   │   └── gtest
│   │       ├── gtest-assertion-result.h
│   │       ├── gtest-death-test.h
│   │       ├── gtest-matchers.h
│   │       ├── gtest-message.h
│   │       ├── gtest-param-test.h
│   │       ├── gtest-printers.h
│   │       ├── gtest-spi.h
│   │       ├── gtest-test-part.h
│   │       ├── gtest-typed-test.h
│   │       ├── gtest.h
│   │       ├── gtest_pred_impl.h
│   │       ├── gtest_prod.h
│   │       └── internal
│   │           ├── custom
│   │           │   ├── README.md
│   │           │   ├── gtest-port.h
│   │           │   ├── gtest-printers.h
│   │           │   └── gtest.h
│   │           ├── gtest-death-test-internal.h
│   │           ├── gtest-filepath.h
│   │           ├── gtest-internal.h
│   │           ├── gtest-param-util.h
│   │           ├── gtest-port-arch.h
│   │           ├── gtest-port.h
│   │           ├── gtest-string.h
│   │           └── gtest-type-util.h
│   ├── install_manifest.txt
│   ├── mybuild
│   │   ├── CMakeCache.txt
│   │   ├── googletest
│   │   │   ├── generated
│   │   │   │   ├── GTestConfig.cmake
│   │   │   │   ├── GTestConfigVersion.cmake
│   │   │   │   ├── gmock.pc
│   │   │   │   ├── gmock_main.pc
│   │   │   │   ├── gtest.pc
│   │   │   │   └── gtest_main.pc
│   │   │   ├── googletest-break-on-failure-unittest_
│   │   │   ├── googletest-catch-exceptions-ex-test_
│   │   │   ├── googletest-catch-exceptions-no-ex-test_
│   │   │   ├── googletest-color-test_
│   │   │   ├── googletest-death-test-test
│   │   │   ├── googletest-env-var-test_
│   │   │   ├── googletest-filepath-test
│   │   │   ├── googletest-filter-unittest_
│   │   │   ├── googletest-list-tests-unittest_
│   │   │   ├── googletest-listener-test
│   │   │   ├── googletest-message-test
│   │   │   ├── googletest-options-test
│   │   │   ├── googletest-output-test_
│   │   │   ├── googletest-param-test-test
│   │   │   ├── googletest-port-test
│   │   │   ├── googletest-printers-test
│   │   │   ├── googletest-shuffle-test_
│   │   │   ├── googletest-test-part-test
│   │   │   ├── googletest-throw-on-failure-test_
│   │   │   ├── googletest-uninitialized-test_
│   │   │   ├── gtest-death-test_ex_catch_test
│   │   │   ├── gtest-death-test_ex_nocatch_test
│   │   │   ├── gtest-typed-test_test
│   │   │   ├── gtest-unittest-api_test
│   │   │   ├── gtest_dll_test_
│   │   │   ├── gtest_environment_test
│   │   │   ├── gtest_help_test_
│   │   │   ├── gtest_list_output_unittest_
│   │   │   ├── gtest_main_unittest
│   │   │   ├── gtest_no_rtti_unittest
│   │   │   ├── gtest_no_test_unittest
│   │   │   ├── gtest_pred_impl_unittest
│   │   │   ├── gtest_premature_exit_test
│   │   │   ├── gtest_prod_test
│   │   │   ├── gtest_repeat_test
│   │   │   ├── gtest_skip_in_environment_setup_test
│   │   │   ├── gtest_skip_test
│   │   │   ├── gtest_sole_header_test
│   │   │   ├── gtest_stress_test
│   │   │   ├── gtest_throw_on_failure_ex_test
│   │   │   ├── gtest_unittest
│   │   │   ├── gtest_xml_outfile1_test_
│   │   │   ├── gtest_xml_outfile2_test_
│   │   │   └── gtest_xml_output_unittest_
│   │   ├── include
│   │   │   ├── gmock
│   │   │   │   ├── gmock-actions.h
│   │   │   │   ├── gmock-cardinalities.h
│   │   │   │   ├── gmock-function-mocker.h
│   │   │   │   ├── gmock-matchers.h
│   │   │   │   ├── gmock-more-actions.h
│   │   │   │   ├── gmock-more-matchers.h
│   │   │   │   ├── gmock-nice-strict.h
│   │   │   │   ├── gmock-spec-builders.h
│   │   │   │   ├── gmock.h
│   │   │   │   └── internal
│   │   │   │       ├── custom
│   │   │   │       │   ├── README.md
│   │   │   │       │   ├── gmock-generated-actions.h
│   │   │   │       │   ├── gmock-matchers.h
│   │   │   │       │   └── gmock-port.h
│   │   │   │       ├── gmock-internal-utils.h
│   │   │   │       ├── gmock-port.h
│   │   │   │       └── gmock-pp.h
│   │   │   └── gtest
│   │   │       ├── gtest-assertion-result.h
│   │   │       ├── gtest-death-test.h
│   │   │       ├── gtest-matchers.h
│   │   │       ├── gtest-message.h
│   │   │       ├── gtest-param-test.h
│   │   │       ├── gtest-printers.h
│   │   │       ├── gtest-spi.h
│   │   │       ├── gtest-test-part.h
│   │   │       ├── gtest-typed-test.h
│   │   │       ├── gtest.h
│   │   │       ├── gtest_pred_impl.h
│   │   │       ├── gtest_prod.h
│   │   │       └── internal
│   │   │           ├── custom
│   │   │           │   ├── README.md
│   │   │           │   ├── gtest-port.h
│   │   │           │   ├── gtest-printers.h
│   │   │           │   └── gtest.h
│   │   │           ├── gtest-death-test-internal.h
│   │   │           ├── gtest-filepath.h
│   │   │           ├── gtest-internal.h
│   │   │           ├── gtest-param-util.h
│   │   │           ├── gtest-port-arch.h
│   │   │           ├── gtest-port.h
│   │   │           ├── gtest-string.h
│   │   │           └── gtest-type-util.h
│   │   ├── install_manifest.txt
│   │   └── lib
│   │       ├── cmake
│   │       │   └── GTest
│   │       │       ├── GTestConfig.cmake
│   │       │       ├── GTestConfigVersion.cmake
│   │       │       ├── GTestTargets-noconfig.cmake
│   │       │       └── GTestTargets.cmake
│   │       ├── libgmock.a
│   │       ├── libgmock_main.a
│   │       ├── libgtest.a
│   │       ├── libgtest_dll.dylib
│   │       ├── libgtest_main.a
│   │       ├── libgtest_main_no_exception.a
│   │       ├── libgtest_main_no_rtti.a
│   │       ├── libgtest_no_exception.a
│   │       └── pkgconfig
│   │           ├── gmock.pc
│   │           ├── gmock_main.pc
│   │           ├── gtest.pc
│   │           └── gtest_main.pc
│   └── test
├── gs.cpp
├── gs.h
├── main.cpp
└── test.cpp

52 directories, 446 files
The reason why we wanna split original gs.cpp files to gs.cpp, main.cpp, gs.h is firstly we wanna our code more readable and maintainable, so according to the basic rule of building project, we split them up. Plus, we wanna use the simulateStep function in gs.cpp to complete the final test, and we don't to get many VTK files after each run. To simplify the process, we made this decision.

## CMake
To run this project, you should have CMake in your local computer; in case you don't have one, here is 
the line that could help you:<br>
https://cgold.readthedocs.io/en/latest/first-step/installation.html

# How To Run
## You should have 5 files or directory at first:<br>
1. CMakeLists.txt
2. README.md
3. googletest
4. gs.cpp
5. main.cpp
6. test.cpp

## Go to build directory
1. mkdir build(if there is no one)
2. cd build
3. cmake ..
4. make
5. ./test

## Clean up
git clean -d -f -x(do it in build directory;this will remove all the files cmake produced)<br>
or rm -rf build (do it in GSTest directory)
## The expected result
You should see this if everything goes correctlt:
[==========] Running 3 tests from 3 test suites.<br>
[----------] Global test environment set-up.<br>
[----------] 1 test from TypeMatch<br>
[ RUN      ] TypeMatch.CheckTypeMatch<br>
[       OK ] TypeMatch.CheckTypeMatch (0 ms)<br>
[----------] 1 test from TypeMatch (0 ms total)<br>

[----------] 1 test from GridSizeTest<br>
[ RUN      ] GridSizeTest.SameSize<br> 
[       OK ] GridSizeTest.SameSize (0 ms)<br>
[----------] 1 test from GridSizeTest (0 ms total)<br>

[----------] 1 test from SimulationTest<br>
[ RUN      ] SimulationTest.HandlesZeroInput<br>
[       OK ] SimulationTest.HandlesZeroInput (18 ms)<br>
[----------] 1 test from SimulationTest (18 ms total)<br>

[----------] Global test environment tear-down<br>
[==========] 3 tests from 3 test suites ran. (18 ms total)<br>
[  PASSED  ] 3 tests.<br>

# Participations:
1. Amber | Yi-Hua Chang @Amberisfree
2. Ziteng Xu @fnhp54
3. Yucheng Niu @cattle12
4. Jiangyue Liu @moonbro1999
5. Haichen Liao @liaoh1

# How to contact:
Here is the email that you can contact: liaohaichen9@gamil.com 
