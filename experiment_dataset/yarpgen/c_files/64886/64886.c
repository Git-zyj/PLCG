/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((!20210) >= var_4))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 += (((3533536196 + 2) ? ((-(((arr_0 [i_0]) ? var_10 : (arr_0 [i_0]))))) : ((((var_1 & var_5) < (((arr_0 [i_0]) ? var_9 : var_1)))))));
        var_15 = 241;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (~-9223372036854775805);
        var_17 = (var_3 ^ 67);
    }
    var_18 = ((1 >= ((max(var_10, var_11)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 ^= (((((~4) + 2147483647)) >> ((((2 ? (arr_6 [i_6 + 1]) : (arr_6 [i_4]))) + 1189485918))));
                                var_20 = ((-(arr_7 [i_4])));
                            }
                        }
                    }
                }
                var_21 = 12;
            }
        }
    }
    #pragma endscop
}
