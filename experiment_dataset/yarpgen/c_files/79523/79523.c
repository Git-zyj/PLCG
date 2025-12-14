/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = ((((var_5 ? var_14 : 824633720832))));
    var_19 = ((((-1 + ((var_11 ? 1 : 51320)))) + 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((1 ? 1 : var_10)));
        arr_3 [i_0] = (((((arr_1 [i_0]) ? var_3 : (arr_0 [i_0])))) ? (((-1850068479210704153 + 9223372036854775807) >> (arr_1 [i_0]))) : (arr_1 [i_0]));
        arr_4 [i_0] = ((-1 ? 1 : 17179860992));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_6 [i_1] [i_1]) << (((((min((arr_6 [i_1] [i_1]), 1))) <= ((var_0 ? 2 : 0)))))));
        var_20 = ((!(((((min(1, 11))) | ((min(29359, 1))))))));
        arr_8 [i_1] = (arr_6 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = (var_11 == ((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))));
    }
    #pragma endscop
}
