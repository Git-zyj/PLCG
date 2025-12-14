/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = ((~(~var_1)));
        var_16 = ((((((arr_1 [i_0]) < var_10))) << (((arr_1 [i_0]) + 4604902455816017834))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (((1501300292 - var_4) ? (((((arr_4 [i_1]) < (arr_4 [i_1]))))) : (arr_3 [i_1])));
        var_18 = (((1501300276 / var_12) <= (((((((arr_3 [3]) + var_10)) != (~var_8)))))));
        var_19 = (i_1 % 2 == zero) ? ((((min((arr_2 [i_1]), (arr_2 [i_1]))) << ((((~(arr_2 [i_1]))) - 322965405))))) : ((((min((arr_2 [i_1]), (arr_2 [i_1]))) << ((((((~(arr_2 [i_1]))) - 322965405)) - 3914408591)))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = var_0;
        arr_8 [i_2] [i_2] = ((((((arr_6 [i_2]) ? (arr_6 [i_2]) : var_13))) ? 1501300292 : ((+(((arr_5 [i_2]) ? var_13 : var_9))))));
    }
    #pragma endscop
}
