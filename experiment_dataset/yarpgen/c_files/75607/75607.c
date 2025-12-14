/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? (max(-var_9, (~var_9))) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 &= var_0;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = var_1;
                                var_15 = (min(((-((var_3 ? var_8 : (arr_3 [i_0]))))), ((((min((arr_7 [0] [i_3]), 1))) - ((var_6 ? var_1 : var_1))))));
                                var_16 = (((((max((arr_7 [i_3] [i_3]), var_1))) ? 27 : ((var_11 ? var_7 : (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1 - 1]))))));
                                var_17 += (((arr_5 [2] [2] [2]) >> (((((4221104197 << (73863098 - 73863071))) <= -var_6)))));
                                var_18 += ((var_5 - (min(4221104197, 832524705))));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_19 = (((max((arr_3 [i_0]), ((max(var_6, var_9)))))) > ((var_1 | (arr_2 [i_0] [i_1 + 2] [i_5 + 3]))));
                    var_20 = (((((var_2 ? var_11 : (arr_7 [i_1 + 1] [i_0])))) ? (var_7 | var_9) : ((((arr_7 [i_1 + 1] [i_0]) ? (arr_7 [i_1 + 2] [i_0]) : var_3)))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_21 = -var_4;
                    var_22 += ((!((max(var_3, (arr_10 [i_0] [10] [i_0]))))));
                }
                var_23 = -2133668254;
                var_24 = min((~var_0), var_7);
            }
        }
    }
    var_25 = ((var_0 != (min((!var_8), (var_11 - var_8)))));
    var_26 = (max(var_26, (((!((max(((var_2 ? var_11 : var_10)), var_10))))))));
    var_27 = var_10;
    #pragma endscop
}
