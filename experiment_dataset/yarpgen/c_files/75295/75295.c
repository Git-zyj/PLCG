/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_15 += var_10;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_16 -= ((~(~var_10)));
                var_17 ^= var_3;
                var_18 = (max(var_18, var_1));
            }
            var_19 = var_4;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 = var_5;
            var_21 = -var_7;
            var_22 = (min(var_22, var_8));
            var_23 ^= var_9;
        }
        arr_12 [i_0] = (~var_2);
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
    {
        arr_16 [4] [i_4] = var_6;
        var_24 = (min(var_24, -var_14));
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (!var_4);
        var_25 = (max(var_25, var_1));
        var_26 = var_4;
        var_27 = (!var_7);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_28 = var_5;
        var_29 = var_14;
        arr_22 [i_6] = var_8;
    }
    var_30 = var_11;
    #pragma endscop
}
