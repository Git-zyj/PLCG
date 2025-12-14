/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((22379 / (var_3 * 4)))) | (((-5 <= var_19) ? ((4 ? var_6 : var_13)) : -29)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [6] = (((~var_0) ? ((-22390 + (var_14 * 0))) : ((((((2 ? -22373 : 0))) ? 17 : ((0 ? var_5 : var_1)))))));
        arr_4 [i_0] = ((((var_4 ? 28234 : -26353)) | ((28226 ? (~31) : 106))));
        arr_5 [i_0] = (min(((17 ? var_13 : var_15)), var_13));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_2] = var_9;
            arr_12 [i_1] [i_2] = var_12;
        }
        arr_13 [i_1] [i_1] = (((((((var_4 ? var_6 : var_11)) & (~3991)))) ? ((((var_18 ^ var_19) ? (~195) : ((3 ? 23 : 99))))) : var_9));
        arr_14 [0] = ((var_7 * ((((min(22379, var_18))) ? ((var_16 ? 65525 : var_12)) : ((-25 ? 0 : var_4))))));
    }
    var_21 = ((((max(var_1, 78))) ? 24 : -5));
    var_22 = ((118 ? 0 : 1));
    #pragma endscop
}
