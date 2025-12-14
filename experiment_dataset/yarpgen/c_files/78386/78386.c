/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] |= (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 4]);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [14] [8] [14] [10] [14] [23] |= (arr_5 [i_0 + 2]);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_18 = ((-(arr_4 [i_0 - 1] [i_1 - 2] [i_2 - 2])));
                            var_19 = (arr_5 [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_5] [i_2] [i_3] [i_2] = arr_13 [i_0] [i_1 - 2] [i_2 + 4] [22] [2];
                            var_20 ^= ((var_3 <= (0 | 4)));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [17] [i_1] [1] [i_0] = 3968;
                            arr_21 [i_6] [i_0] [i_1] [i_2] [i_1] [i_0] = ((~(arr_5 [17])));
                            arr_22 [i_0] [i_0] [9] [i_3] [i_6] &= (((arr_1 [i_1] [i_2]) || (!6620947003186053222)));
                            arr_23 [i_0] [i_1] [18] [i_2] [i_3] [9] [1] = (((arr_5 [21]) || (arr_16 [i_0] [i_0 + 2] [i_2] [i_3 + 1] [i_6])));
                            var_21 = (arr_19 [i_0 + 1] [i_1 - 4] [i_0 + 1] [i_2 - 1] [i_3 + 2]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_26 [4] [i_1] [i_7] [i_7] [i_7] [9] |= (~2164401997);
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [17] = (arr_18 [i_0 - 2]);
                        }
                        var_22 = (((arr_14 [i_2 + 2] [i_1 - 3]) != (arr_14 [i_1] [i_1])));
                        var_23 = ((~(arr_25 [i_0] [i_1 - 1] [i_0] [8] [i_3 + 1] [i_3 + 1])));
                    }
                    var_24 |= (((arr_13 [i_2] [i_2] [i_0] [i_0] [i_0]) < (((arr_10 [i_2] [i_1] [22] [22]) << (arr_2 [i_2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_25 &= (4 / 38381302);
                                arr_35 [i_9] [i_2] [i_2] [i_1] [i_0] = -583421408;
                                var_26 |= (arr_15 [4] [20] [20] [13] [i_0]);
                                arr_36 [6] [6] [6] [i_1] = (arr_25 [i_0] [1] [4] [1] [1] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_0;
    #pragma endscop
}
