/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] = (min((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_1 [i_0] [i_0]))), (((arr_1 [i_1] [i_1]) | 26))));
                            arr_10 [3] [8] [3] [i_2] [9] [10] = -32;
                            arr_11 [i_3] = ((-((-(((arr_7 [4]) ? var_7 : 17549))))));
                            arr_12 [1] [i_3] [1] = (((arr_2 [0]) > (((((max(17, (arr_1 [0] [4])))) != (((arr_1 [i_0] [i_1]) / var_3)))))));
                        }
                    }
                }
                arr_13 [i_1] = ((((((17 ? 17547 : var_16)))) == var_1));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (min(((31 ? -32760 : 16)), (arr_3 [i_0] [1] [i_0])));
                                arr_24 [i_6] [i_5] [i_4] [i_1] [i_6] = ((var_2 ? (((((arr_1 [i_4] [i_4]) / (arr_3 [0] [i_5] [i_0]))))) : ((4 ? -5 : 230))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max((min(-var_6, (var_6 | var_12))), var_5));
    var_20 = var_12;
    #pragma endscop
}
