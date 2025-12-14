/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = ((((var_5 ? var_7 : var_2)) | var_2));
            var_10 ^= var_5;
            var_11 = (min(var_11, 1129446653));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_12 += ((1546746348260258120 / -8066639117818038005) % var_4);
            var_13 = var_5;
            arr_9 [i_2] = -8066639117818038000;
            var_14 = 24586;
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_0] = ((var_9 ? var_9 : var_6));
            var_15 = -7029035498943666414;
            arr_14 [i_3] [i_3] = ((((8066639117818038010 ? 45 : 24586)) / var_4));
            var_16 = (var_0 <= var_1);
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_17 = (((var_6 ? var_4 : var_4)) - var_0);
                            arr_24 [i_4] [i_4] [7] [i_4] [i_4] = (var_2 % var_4);
                        }
                        var_18 = ((var_0 ? var_8 : 1));

                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            var_19 = (~var_4);
                            var_20 = 4095;
                            arr_29 [1] [i_4 - 3] [i_4] [i_4] [9] [i_4] = (~1);
                        }
                    }
                }
            }
        }
        var_21 = ((var_5 ? var_1 : var_4));
        var_22 = (var_1 < var_4);
        var_23 = (min(var_23, (((-8066639117818038000 ? -1546746348260258121 : var_8)))));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_24 ^= ((-var_3 ? ((-8066639117818038005 ? var_3 : -24598)) : 1719804338));
        var_25 = ((var_2 ^ (max(var_9, var_0))));
        var_26 = (((((var_4 ? var_0 : var_8))) ? (!var_7) : (min(var_1, 32229))));
        arr_32 [7] = (((var_4 + 2147483647) >> (((min((max(-1546746348260258121, 24581)), var_8)) - 98))));
    }
    var_27 = ((-8066639117818038009 ? 25374 : 552188640));
    var_28 -= (var_3 && var_1);
    #pragma endscop
}
