/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_7, var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [4] [4] |= ((arr_2 [i_1]) ? 949674398 : (arr_2 [i_1]));

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    arr_9 [i_0] [9] [i_0] [3] = (arr_0 [i_1]);
                    var_11 = (arr_5 [i_2 + 2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_12 &= ((var_2 <= (arr_10 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 -= (((arr_11 [i_1 - 2] [i_1 - 2]) & 3345292886));
                                arr_17 [i_0] [9] [i_1] [i_3] [i_4] [i_5] = -1966324210;
                                arr_18 [10] [0] [i_1] [i_3] [5] [i_3] = 4278239748;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_14 &= (arr_15 [1] [i_1] [i_1 + 2] [4] [i_6] [i_0] [i_6]);
                    var_15 = 3345292872;
                    var_16 = (((arr_8 [3] [i_0] [10] [i_6]) ? 4757257130530235345 : (arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1] [2] [i_1 + 2])));
                    var_17 &= (((((arr_2 [i_0]) & (arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))) ? (((249 ? 7493 : 1844))) : (arr_3 [i_1 - 1]));
                    arr_21 [7] [1] = var_2;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_18 = (((arr_1 [i_0]) + 15));
                    var_19 -= (((((63719 ? 0 : 11717))) ? var_9 : 1));
                    arr_24 [1] [4] = ((~((~(arr_16 [i_0] [i_0] [i_1 + 2] [i_7] [i_7])))));
                }
            }
        }
    }
    #pragma endscop
}
