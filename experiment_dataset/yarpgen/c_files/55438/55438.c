/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = min((max((((!(arr_3 [i_0] [i_0 + 3] [i_1])))), (arr_3 [i_0] [i_1] [i_1]))), ((max(-4888601037000308745, 4888601037000308744))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = (min((arr_11 [i_0] [i_1] [6] [11] [i_4] [i_4 + 3]), (((!(((var_3 ? 4888601037000308733 : (arr_4 [i_0] [i_0 - 2] [i_0 + 2])))))))));
                                arr_13 [i_0 + 1] [8] [i_2] [i_3 - 1] [i_4 + 3] [i_0] = (max((arr_7 [i_0] [i_2] [7] [i_3] [i_3] [i_1]), ((~(((var_4 + 2147483647) >> (arr_1 [i_4])))))));
                                var_12 -= (((((var_2 ? (min(65523, (arr_5 [i_0] [i_1] [i_3]))) : (((arr_10 [4] [i_3] [i_2] [i_1] [i_0 + 4]) / (arr_6 [i_3] [i_2])))))) < (arr_11 [i_3] [i_0 + 1] [i_3 - 2] [i_3] [i_4 + 3] [i_4 + 2])));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (56499 + 12);
            }
        }
    }
    var_13 = var_8;

    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_14 = (4888601037000308741 / var_8);
        var_15 = (min((~-4888601037000308727), (((-(max((arr_9 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 3]), var_9)))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_7 + 2] = max((((var_2 >> (((arr_19 [i_6]) - 4220929675943531251))))), (max((min(-4888601037000308735, (arr_3 [i_5] [i_6 - 1] [i_7 - 2]))), (arr_16 [i_5]))));
                    arr_25 [i_5] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
