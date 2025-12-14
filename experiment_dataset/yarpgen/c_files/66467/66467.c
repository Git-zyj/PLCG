/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((arr_9 [i_0] [i_1] [i_2]) ? ((min(var_2, ((var_10 ? (arr_8 [0] [0] [i_2]) : (arr_8 [i_2] [i_1] [7])))))) : (arr_9 [i_2] [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = 8743882861641681;
                                var_19 = (arr_2 [i_0]);
                                var_20 = (((((((arr_10 [i_4] [i_4 - 1] [i_4] [19] [0] [i_4]) < 32505856)))) ^ (((arr_2 [i_0]) / (max(8743882861641658, var_10))))));
                                var_21 = ((((+((5669533851406159509 ? (arr_8 [i_1] [i_1] [12]) : 8743882861641641)))) * 37));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_1] = ((((104 ? var_10 : (((arr_2 [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_13 [1] [i_0]))))) <= ((((((((arr_10 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0]) & (arr_1 [i_0] [12])))) <= (((arr_7 [i_0] [20] [i_2]) ? (arr_10 [0] [i_0] [i_2] [i_0] [i_0] [i_2]) : 18438000190847909958))))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((-((-((var_8 ? var_7 : var_15)))))))));
    #pragma endscop
}
