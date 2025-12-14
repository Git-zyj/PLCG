/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((~12281), (((((var_6 ? var_0 : var_5))) ? ((53278 ? var_5 : 12265)) : (~var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((var_11 / var_9) ? (53254 / 53255) : (var_7 * var_4))) & ((var_7 ? (min((arr_5 [i_0] [i_0]), (arr_3 [i_1] [5] [i_0]))) : var_0))));
                var_14 = (max(((((12 ? (arr_2 [i_0]) : 12)) & ((((arr_4 [i_1] [i_1] [i_0]) || 18446744073709551615))))), (min(((243 % (arr_4 [i_0] [i_1] [i_1]))), (((arr_1 [4]) / 1))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = ((-(((!(((12284 ? 12281 : (arr_6 [i_2] [i_3 - 4] [i_2] [i_1])))))))));
                                var_16 = ((~(max(((((arr_6 [i_1] [i_1] [i_1] [i_1]) + var_10))), ((~(arr_11 [i_0] [i_0] [i_2 + 1] [i_3] [5])))))));
                                var_17 = (i_4 % 2 == 0) ? (((-(max((((arr_13 [i_4] [i_4] [i_2] [i_1] [i_4] [i_0 - 2]) >> (((arr_14 [i_0] [i_4] [i_2] [i_3] [i_4]) - 1914000854)))), ((~(arr_5 [i_0] [i_1])))))))) : (((-(max((((arr_13 [i_4] [i_4] [i_2] [i_1] [i_4] [i_0 - 2]) >> (((((arr_14 [i_0] [i_4] [i_2] [i_3] [i_4]) - 1914000854)) - 3493231678)))), ((~(arr_5 [i_0] [i_1]))))))));
                                var_18 = (min((((var_7 < var_9) ? (((arr_12 [i_4] [i_3 - 3] [i_2] [i_1] [i_0]) ? var_1 : 253)) : ((53252 ? 38319 : var_1)))), ((((273509582 | 53251) ? ((0 ? 150 : 65533)) : (12 == 87))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] = ((~((~(var_5 & var_1)))));
            }
        }
    }
    #pragma endscop
}
