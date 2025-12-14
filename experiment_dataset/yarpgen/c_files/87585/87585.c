/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (arr_4 [i_0] [i_1] [i_1]);
                var_17 = (max((((!(((~(arr_5 [i_0]))))))), (((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0])))));

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_18 = 1433994369;
                    var_19 = (min((((((max((arr_2 [6]), (arr_4 [i_0] [i_1] [i_2 - 2]))))) - (min((arr_7 [12] [i_1] [i_2 + 1] [12]), (arr_5 [i_1]))))), (arr_7 [i_1] [i_1] [i_1] [2])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = ((-(arr_6 [i_1] [i_4])));
                                var_21 = (arr_13 [i_1] [2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_22 ^= (max((max((arr_8 [i_0] [i_1] [i_5 - 1] [i_6 - 1]), ((-(arr_1 [i_0] [i_1]))))), (((((arr_5 [i_0]) ? (arr_17 [i_0]) : (arr_10 [i_0] [i_1] [i_5] [5] [i_5] [i_6]))) & ((min((arr_5 [i_0]), (arr_1 [i_0] [i_0]))))))));
                            var_23 ^= min(((512 >= (arr_3 [i_5 - 1]))), ((!(((8372224 ? 31592 : 2984429928))))));
                            var_24 = ((((!(arr_9 [i_5 - 1] [i_5 - 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 1]))) ? (((((138 >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 21779))))) ? -4286595072 : (min(4286595071, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_15 [i_0])));
                            var_25 -= 5133889363393153480;
                            var_26 = (arr_17 [i_6]);
                        }
                    }
                }
                arr_19 [i_0] = (min(((((arr_16 [i_0] [i_1] [i_1] [i_0]) ? (arr_7 [i_0] [8] [8] [i_0]) : (-26704 * 1310537348)))), 18410715276690587648));
            }
        }
    }
    #pragma endscop
}
