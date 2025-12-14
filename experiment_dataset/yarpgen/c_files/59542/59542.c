/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(max((max(var_16, var_15)), var_14))));
    var_21 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 + 2] [i_2] = (max(((((-35 ? 0 : 5829)))), ((~(min((arr_1 [i_0]), (arr_3 [i_0] [i_1])))))));
                    var_22 = (arr_3 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1 + 3] [i_1] = ((((max(((-(arr_3 [i_0] [i_1]))), (((arr_6 [i_4] [i_1] [i_2]) ? (arr_3 [10] [i_1]) : (arr_0 [i_0])))))) ? (((!(arr_8 [i_0] [i_1 + 1] [i_4] [i_3])))) : ((max((arr_4 [i_4]), (max(46369, -5829)))))));
                                var_23 = (max(var_23, (((!((max((arr_11 [i_3] [i_3 - 1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_11 [i_4] [i_3 + 1] [i_1 + 3] [i_1 + 1] [i_1 + 1])))))))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] = ((-(min((min((arr_9 [i_1] [i_1 + 1] [i_1] [i_2]), (arr_0 [i_0]))), ((((arr_11 [i_0] [i_0] [8] [i_0] [i_2]) ? (arr_10 [i_0] [i_1] [i_1]) : (arr_5 [i_0] [i_1] [i_2] [i_1 + 1]))))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_24 = (min((((!(arr_5 [i_1 + 1] [i_1] [i_1] [i_1 + 2])))), (arr_5 [i_1 - 1] [i_1] [i_1] [i_1 + 1])));
                        arr_16 [13] [i_1] [i_1] [i_5] [i_2] [i_5] = (arr_10 [i_1] [i_2] [i_1]);
                        arr_17 [i_0] [i_1 + 2] [i_1] [i_5] = (max((arr_10 [i_0] [i_1] [i_1]), (min((arr_8 [i_5] [i_5] [i_5] [i_1 - 1]), (arr_15 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
