/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (arr_1 [4])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] [i_0] [i_0] [i_1] [i_0] = (((((16777215 ? ((min(1, (arr_7 [i_0])))) : ((max(var_7, (arr_5 [i_0] [i_0]))))))) ? var_2 : (arr_9 [i_0] [i_1] [i_1] [i_0] [3])));
                                arr_17 [i_0] [i_0] [i_2] [i_2] [i_4 + 2] |= ((min(1, (arr_14 [i_1] [i_3] [i_3] [i_4] [18] [i_2]))));
                                var_22 = min(((((arr_11 [i_4 + 2] [13] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 1]) ? ((min((arr_4 [i_1] [i_1] [1]), 1))) : var_15))), (((arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [20] [i_4 - 1]) ? (arr_13 [14] [i_4 + 2] [i_4] [11] [i_4] [i_4 + 2]) : (arr_9 [i_4 - 1] [i_4] [2] [2] [i_4]))));
                                var_23 |= ((((((((var_8 ? var_8 : var_19))) ? 240 : ((var_4 ? (arr_2 [i_1] [i_0]) : var_4))))) ? (((((var_11 ? (arr_9 [4] [2] [i_2] [i_2] [i_2]) : 9223372036854775808))) ? (arr_10 [i_1] [i_4 + 1] [i_4 + 1] [6] [i_4 + 1] [i_2]) : 4252)) : var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, 11436790027998261175));
    #pragma endscop
}
