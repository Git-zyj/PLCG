/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, ((min(-var_8, (((!(((~(arr_2 [i_0] [i_0]))))))))))));
        var_17 = ((-((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) / (arr_2 [i_0] [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3 - 1] [i_3] [i_2] = ((((min((arr_7 [i_2 + 1] [i_4] [i_4]), (arr_7 [i_2 + 1] [i_5] [i_5])))) ? (max((arr_7 [i_2 + 1] [i_2 + 1] [i_5]), (arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 2]))) : (arr_7 [i_2 + 1] [i_3 + 3] [i_3])));
                                var_18 = (((((var_5 ? (arr_15 [5] [i_1] [i_2] [i_3] [i_4] [i_4] [i_5]) : var_9)) - (((max((arr_13 [i_1]), var_3)))))));
                            }
                        }
                    }
                    arr_17 [i_3] = 255;
                    arr_18 [i_1] [i_1] [2] [i_1 + 1] |= var_11;
                }
            }
        }
    }
    #pragma endscop
}
