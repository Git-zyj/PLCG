/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = var_3;
    var_22 ^= ((((((28 ? var_18 : var_6)))) ? var_11 : ((~(!var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_23 = var_15;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2] = (~var_1);
                    var_24 ^= -var_10;
                    arr_7 [i_0] [i_2] = var_1;
                    var_25 ^= arr_1 [5] [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_26 = (max(var_26, 28));
                                var_27 = (((arr_8 [i_1] [i_1] [i_2 + 1]) == var_19));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_28 += var_8;
        arr_15 [i_5] = ((1 >> (32767 >= 54317)));
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_29 = (max(var_29, ((min(var_17, (arr_20 [i_6]))))));
                var_30 *= (var_14 > 28);
            }
        }
    }
    #pragma endscop
}
