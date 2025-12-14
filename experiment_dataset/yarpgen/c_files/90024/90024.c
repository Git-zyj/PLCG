/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (9223372036854775807 && var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((!(arr_2 [10] [i_1] [i_1]))))));
                var_18 = (max(var_18, (arr_2 [i_0] [1] [2])));
                var_19 += ((((!(-1 && 1))) ? var_8 : (((arr_0 [i_0]) ? (-9223372036854775807 - 1) : (arr_4 [i_0] [i_0] [i_0])))));
                var_20 = (arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 ^= ((((arr_0 [i_0]) ? 4294967281 : (arr_3 [i_2]))) >= (arr_6 [i_2] [i_2]));
                                arr_15 [i_2] [i_3] [12] [1] [i_1] [i_2] |= ((((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_11 [i_0]) >= 4294967281))) : (((arr_8 [i_1] [i_2] [i_3] [i_2]) ? (arr_8 [i_0] [i_0] [i_0] [i_2]) : 1)));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((~((max((arr_4 [i_0] [i_1] [i_2]), (arr_13 [i_1] [1] [i_1] [1] [i_1] [i_1]))))))) ? ((((-1 ? (arr_10 [i_0] [1] [i_1] [12] [i_3] [i_4]) : (arr_8 [i_0] [i_0] [i_3] [i_1]))) & (((~(arr_4 [i_0] [i_0] [i_0])))))) : ((((arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0]) ? (arr_13 [i_0] [13] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [6] [6] [i_2] [i_3] [i_4]))))));
                                var_22 = (max(var_22, -18));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
