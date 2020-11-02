project('boosttest', 'cpp',
        default_options: ['default_library=static',
        'cpp_std=c++17'])

boost_container_dep = dependency('boost-container')

executable('boosttest', 'boosttest.cpp',
           dependencies: [boost_container_dep])
