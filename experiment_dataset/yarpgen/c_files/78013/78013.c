/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max((186422522 | var_7), 75))) / (min(var_12, (var_11 / var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_8 [i_2]);
                    var_16 -= 24576;

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_1] &= (max(((max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))), (min(((max((arr_2 [i_2]), 13))), (max((arr_7 [4] [i_1] [i_2] [i_3]), 24547))))));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_17 = ((((max(var_13, ((~(arr_17 [i_2])))))) ? (max((arr_6 [i_0]), (arr_16 [i_2] [i_3 + 1] [i_3] [i_2] [i_4]))) : 0));
                            arr_18 [i_0] [i_2] = ((((min(((-(arr_4 [i_0]))), (max(var_5, (arr_15 [i_2] [i_2] [i_2] [3])))))) ? ((~(max(8190625517850844931, var_12)))) : (arr_17 [i_2])));
                            var_18 = (var_2 < (min((-24594 * 1), (arr_15 [i_2] [i_4] [i_4 - 1] [i_4 - 1]))));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_2] [i_3 + 1] [i_2] [i_1] [i_2] = (((max((arr_0 [i_0]), (max(58, var_5)))) > (max((arr_4 [i_0]), var_9))));
                            arr_22 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_5] = (((((min((min((arr_16 [6] [i_1] [i_2] [i_2] [i_2]), var_14)), var_7)) + 9223372036854775807)) >> (((max((((-24562 || (arr_8 [i_0])))), 2135592147)) - 2135592085))));
                            arr_23 [i_2] = (max((arr_6 [i_5]), 43));
                            arr_24 [i_0] [i_1] [i_2] [4] [i_5 + 1] = var_5;
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_27 [i_2] [i_6] [i_6] [i_6] = ((-(arr_8 [3])));
                            arr_28 [i_2] [i_2] = 24576;
                            var_19 *= (arr_8 [6]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_20 -= ((-(arr_3 [i_0])));
                        var_21 = (((arr_3 [i_1]) ? 227 : (max(1600547279, 2764047585))));
                        arr_32 [i_2] [1] [i_2] = (max(0, (arr_10 [i_0] [i_1] [i_2] [i_7])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
