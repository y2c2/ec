#include "ec_map.h"
#include "ec_string.h"

static int string_ctor(ec_string** detta_key, ec_string** key)
{
    *detta_key = *key;
    return 0;
}

static void string_dtor(ec_string** detta_key) { ec_delete(*detta_key); }

static int string_cmp(ec_string** a, ec_string** b)
{
    return ec_string_cmp(*a, *b);
}

ect_map_define_undeclared(map_string_string_t, ec_string*, string_ctor,
                          string_dtor, ec_string*, string_ctor, string_dtor,
                          string_cmp);
