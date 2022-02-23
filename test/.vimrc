let g:ale_c_clang_options =
            \   get(g:, 'ale_c_clang_options', 
            \ '-Wall -Wextra -I../include/ -I../src')
let g:ale_cpp_clang_options =
            \   get(g:, 'ale_cpp_clang_options',
            \ '-Wall -Wextra -I../include/ -I../src')
