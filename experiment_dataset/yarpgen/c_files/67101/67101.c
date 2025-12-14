/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (max(var_5, (~var_19)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_22 = ((+(((((arr_3 [i_2] [i_4]) ? var_6 : (arr_7 [i_0] [i_3] [i_1])))))));
                                var_23 = var_7;
                            }
                            var_24 += ((((((var_15 << (((arr_5 [1]) + 3465)))) <= var_2)) ? ((49214 ? var_6 : ((min((arr_11 [i_1] [8] [1]), var_11))))) : ((max(18, 50624)))));
                        }
                    }
                }
                var_25 = (((max((arr_5 [i_0 - 1]), (((arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]) ? var_7 : var_16)))) / (arr_10 [i_1] [i_1])));
                arr_17 [i_1] [i_1] = ((~(arr_5 [i_0 + 2])));
                var_26 = ((55486 ? (((((var_3 ? var_4 : var_10))) ? (~55508) : var_8)) : ((max(var_17, var_7)))));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 6;i_5 += 1)
                {
                    var_27 = (((arr_15 [i_5 + 4] [i_5 + 4] [i_5 + 4]) || (arr_18 [i_1] [i_5 + 4] [i_5 + 4])));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_28 = (max(var_28, var_16));
                        arr_25 [i_0] [i_1] [i_5] = (((((var_13 ? var_0 : var_2))) ? (arr_11 [i_0] [1] [i_5 + 4]) : var_10));
                    }
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_29 = var_3;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_30 = var_2;
                                arr_34 [i_1] = ((var_13 ? ((var_1 ? ((max(var_0, (arr_14 [i_1] [i_0] [7] [i_7] [i_8] [i_9])))) : (arr_8 [i_0] [i_1] [i_0 + 1]))) : (max(var_19, ((var_16 ? var_10 : var_13))))));
                                var_31 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
