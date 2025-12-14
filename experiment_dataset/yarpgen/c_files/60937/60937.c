/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_20 = var_11;
                    var_21 = (((((~((var_3 ? (arr_1 [i_0] [i_2]) : var_2))))) ? var_1 : (var_2 >> var_17)));
                }
                var_22 = (((max((arr_1 [i_1 - 1] [i_1]), (var_11 != var_0))) >= ((((~var_15) ? (arr_6 [i_0] [i_1 + 2] [6] [i_1]) : (arr_5 [i_0 - 3] [i_1 + 2] [i_1]))))));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_23 = (max((((arr_12 [i_0 + 1] [i_3] [i_1 + 1]) | (arr_7 [i_0 - 3]))), var_17));
                                arr_16 [i_0] [9] [i_0] [i_0] [i_0] [i_0] [i_3] = var_15;
                                var_24 *= (min((arr_1 [i_0] [i_1 + 2]), (((arr_14 [i_0 - 1] [i_0] [i_1 - 1]) + (arr_14 [i_0 - 2] [i_0] [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_13));
    var_26 ^= (((((-1452681476 ? 0 : -1452681460))) / (((var_18 ? var_0 : var_6)))));
    #pragma endscop
}
