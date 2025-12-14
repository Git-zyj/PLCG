/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = (((var_2 - var_15) ^ var_15));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_3 + 2] = (((var_5 ? 3569416990 : var_16)));
                        arr_11 [i_1] [i_0] [i_2] [i_3] &= (((~var_0) ? (((((31 ? 13485725237846233360 : -18)) != (((min(var_15, 5))))))) : var_4));

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_17 = (max(var_17, (((!(var_15 >= 5))))));
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_1] = ((var_16 + ((var_9 ? ((var_3 ? 76 : var_13)) : (var_16 != var_1)))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_1] = var_2;
                        var_18 = max((max(var_5, -10164416645037409082)), (max(var_15, 10164416645037409082)));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_6] [i_1] = (min(((min(var_11, var_4))), (max(0, var_1))));
                            arr_25 [i_1] = ((~(min(0, -17))));
                            arr_26 [i_1] [i_5] [i_5] [i_5] = (250 || 13485725237846233360);
                        }
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_29 [i_0 + 2] [i_1] [i_2 - 1] [i_1] = (max(13485725237846233357, var_5));
                        arr_30 [i_0] [i_1] [i_1] [i_7] = -6;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_19 = ((22 ? 73 : -5));
                            arr_35 [i_1] [i_1] [i_2] [i_8] [i_1] [i_2] = (!var_7);
                            arr_36 [i_0] [i_0] [i_1] [i_0] = ((10164416645037409079 ? var_13 : var_8));
                            var_20 = ((var_0 ? -6 : ((var_16 ? 17 : var_16))));
                        }
                        var_21 -= max((max(var_13, (((-9223372036854775807 - 1) / 246)))), var_6);
                    }
                    arr_37 [i_1] = (~73);
                }
            }
        }
        arr_38 [i_0] = ((!(~var_9)));
    }
    var_22 = (max(((min(var_5, var_5))), (min((min(4830956576444359556, var_8)), ((min(var_11, 1635407585)))))));
    var_23 = (!var_8);
    var_24 = var_0;
    #pragma endscop
}
