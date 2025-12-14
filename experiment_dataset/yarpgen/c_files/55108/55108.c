/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((((1 ^ 7) ^ 1))) ? var_8 : (var_4 != var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0] = 255;
        var_14 += ((~(!var_10)));
        arr_5 [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((+(((~12774866856464125213) ? (!1) : 1))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_12 [5] [i_1] [i_2] = (min((((var_12 && var_7) < (min((arr_2 [i_1]), var_8)))), (!0)));
            arr_13 [i_1] = max(((min(766603959, 12587347247599927181))), 1);
            arr_14 [i_1] [i_1] [i_2] = (12774866856464125207 == 12774866856464125213);
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_15 -= (arr_0 [i_4]);
            var_16 = var_7;
        }
        var_17 = (arr_10 [i_3] [i_3]);
    }
    #pragma endscop
}
