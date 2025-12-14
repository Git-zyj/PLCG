/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [1] [1] [i_1] = ((((((var_5 ? 0 : (arr_2 [i_1])))) ? ((min((arr_3 [i_1]), (arr_7 [i_2] [i_0] [i_0])))) : var_2)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_2] [20] [i_1] [i_0] &= (arr_5 [i_1] [i_2 - 2] [i_2]);
                        var_15 = (((((arr_9 [i_0] [i_2 + 1] [i_2 - 2] [i_1]) & (arr_7 [i_2 - 1] [i_2] [i_2 - 2]))) * ((((((var_10 ? (arr_6 [i_1]) : (arr_6 [i_1])))) || (var_2 == var_7))))));
                    }
                }
            }
        }
    }
    var_16 &= var_3;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_24 [i_4] [16] [i_4] &= -7857828933873460903;
                                var_17 ^= ((((((arr_19 [i_4] [i_7]) / (arr_11 [i_4] [i_5] [i_7] [1])))) ? (((arr_20 [18] [i_6] [i_4]) ? (arr_20 [i_5] [i_6] [i_4]) : (arr_20 [i_4] [i_5] [i_4]))) : (arr_3 [i_7])));
                            }
                        }
                    }
                    arr_25 [i_4] [i_4] [i_5] [i_5] = (((((arr_16 [i_4] [i_5] [i_6]) ? (arr_16 [i_4] [i_5] [i_6]) : (arr_16 [i_5] [i_5] [1]))) | ((max((arr_13 [i_4] [5]), (((var_10 && (arr_6 [i_5])))))))));
                    var_18 = (((1048 * 445433350) + (arr_23 [i_5])));
                    arr_26 [i_5] = (arr_22 [i_4] [i_4] [i_5] [i_6] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
