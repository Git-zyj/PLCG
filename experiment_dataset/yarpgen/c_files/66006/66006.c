/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(var_8, var_7))) ? var_13 : (1143654162478255829 <= var_12)))) ? (((((var_4 ? var_9 : var_0)) > 9))) : ((((max(0, var_7))) ? ((var_7 ? var_0 : var_2)) : var_2)));
    var_16 = ((((2122498262 % 1) + var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = var_13;
                                var_18 ^= (max(((((((arr_0 [i_0]) ? 869689970 : var_8))) ? ((max(var_1, (arr_7 [i_0] [i_0] [i_0])))) : (arr_12 [i_4] [i_4] [i_3 - 2] [2] [i_3 + 1] [i_1 - 2] [i_1]))), ((((arr_12 [0] [i_0] [i_1 - 1] [6] [i_3] [i_1 - 1] [i_4]) ? (arr_4 [i_0] [i_1] [i_1]) : var_4)))));
                                var_19 = (max(var_19, (((-48 == 1) < 1))));
                                var_20 = ((max(((min((arr_9 [i_0] [i_0] [i_2] [i_4]), var_5))), var_14)));
                            }
                        }
                    }
                }
                var_21 *= (((min(var_12, (arr_8 [i_1] [i_1] [i_0])))) ? (((((3200641557496092360 & (arr_11 [4] [4] [i_1] [i_1] [i_1])))) ? ((((arr_11 [i_0] [i_0] [i_0] [6] [i_1]) || (arr_5 [i_0] [i_0] [i_1])))) : (arr_7 [i_1] [i_1] [i_1 + 4]))) : (((arr_10 [i_0] [i_0] [i_1]) ? (arr_10 [i_0] [i_1 + 2] [i_1]) : (arr_10 [i_0] [i_0] [i_1]))));
            }
        }
    }
    #pragma endscop
}
