/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 ^ var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 = (((arr_6 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1]) && (((+(min((arr_5 [i_0] [i_1] [i_2] [i_3 + 1]), var_1)))))));
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [i_3] &= ((-(max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), -var_8))));
                            arr_10 [i_0] [i_3] [i_2] [i_3] = (min((((((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) & (~var_6)))), (max((min(2813110721614149256, 17557826306048)), var_9))));
                        }
                    }
                }
                var_12 *= (((+(((arr_7 [i_0] [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_1] [i_0] [i_1]) : (arr_3 [i_0]))))));
                var_13 ^= (arr_0 [i_0]);
                var_14 = (max(((((!(arr_0 [i_0]))) ? var_2 : var_7)), (min(((-(arr_2 [i_0] [i_0] [1]))), var_4))));
                arr_11 [i_0] [i_0] = ((max(var_4, var_7)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [9] = var_3;
                    var_15 = (min(((var_3 % (15633633352095402362 - 9223372036854775807))), (((!((((arr_16 [i_4]) | (arr_16 [i_4])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_26 [i_4] [i_5] [i_6] [i_4] [i_8] = (arr_21 [i_4] [i_4] [i_4] [i_4] [1]);
                                arr_27 [i_4] [i_4] [i_6] [i_4] [i_7] [i_8] [i_8] = ((~((((!var_6) > 15633633352095402375)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
