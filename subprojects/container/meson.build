project('boost-container', 'cpp', 'c')

boost_config_dep = dependency('boost-config')
boost_move_dep = dependency('boost-move')
boost_assert_dep = dependency('boost-assert')
boost_static_assert_dep = dependency('boost-static-assert')
boost_intrusive_dep = dependency('boost-intrusive')
boost_core_dep = dependency('boost-core')

boost_container_dep = declare_dependency(include_directories: 'include',
  dependencies: [boost_move_dep,
                 boost_assert_dep,
                 boost_static_assert_dep,
                 boost_intrusive_dep,
                 boost_core_dep,
                 boost_config_dep])
