/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_10 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = ((~(((((var_3 ? var_9 : (arr_6 [i_0] [i_1] [i_0] [i_0])))) ? 2266503451208023413 : var_5))));
                                var_12 = (max((arr_12 [i_0 - 1] [i_1]), (((57077265901931863 * -3602927141062213783) / (var_6 / var_6)))));
                                var_13 = arr_6 [i_0 - 2] [i_1] [i_1] [i_0];
                                var_14 = (((arr_1 [i_4]) / ((max((arr_3 [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_0]))))));
                            }
                        }
                    }
                }
                var_15 = -5306766581156856896;
                var_16 = ((((0 ? 1 : -1133322101))) - ((var_3 ? (max(var_0, (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0]))) : ((((arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1]) ? 0 : var_2))))));
                arr_13 [i_0] [i_1] [i_0] = var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_17 = ((-(min(((800666010724048891 ? var_0 : var_9)), -var_1))));
                            var_18 = (arr_11 [i_5] [i_6] [i_5] [i_8] [i_8] [i_6] [i_6]);
                            var_19 = var_8;
                            var_20 = ((!(((-(min(var_0, var_6)))))));
                            arr_28 [i_6] [i_7] [i_6] [i_6] = var_6;
                        }
                    }
                }
                var_21 = ((((max(8707813197097880144, (arr_23 [i_5] [i_5]))) | ((-7124717463654227843 ? -1385408847044819013 : 951528936)))) + ((var_4 * (var_5 * var_0))));
            }
        }
    }
    #pragma endscop
}
