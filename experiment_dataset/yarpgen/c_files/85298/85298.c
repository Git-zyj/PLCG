/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (max(var_17, (((41 - ((41 << (1905589875 - 1905589874))))))));
        arr_4 [i_0] = 0;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = ((38375 ? 2389377421 : -42));
            var_18 = 56834;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = (max(var_19, ((((arr_5 [i_0]) ? 46 : 95)))));
            arr_12 [i_2] = (arr_1 [i_0]);
        }
        var_20 *= (((arr_5 [i_0]) + -var_16));
        arr_13 [i_0] = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_21 += 8191;
        var_22 = (max(var_22, ((((arr_11 [18] [i_3] [18]) ? var_7 : var_13)))));
    }
    var_23 = (min(var_23, var_14));
    #pragma endscop
}
