/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_20 -= ((-var_9 ? (((var_14 && (((0 ? 83 : var_16)))))) : ((max((162 && var_9), (0 == var_16))))));
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = (max((((~173) / var_2)), var_0));
                            var_21 += ((~(((var_5 || (((arr_8 [i_4] [i_0] [i_4] [1] [i_0] [i_1]) && var_14)))))));
                            var_22 = (min(var_22, ((max((((~var_17) ? ((var_10 ? 0 : var_19)) : 1)), ((var_9 ? (((max(167, 508)))) : (max(var_2, 1905540511)))))))));
                            var_23 = (arr_2 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_24 &= (var_18 % var_10);
                            arr_16 [i_1] = 1;
                            arr_17 [i_0] [i_0] [i_2] [i_3 + 2] [i_1] = ((-((44 ? var_7 : var_12))));
                            var_25 = 172;
                        }
                        var_26 = (max(var_26, -509));
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = 255;
    }
    var_27 = (~1);
    var_28 = (max(var_28, (((0 ? var_6 : 1)))));
    #pragma endscop
}
