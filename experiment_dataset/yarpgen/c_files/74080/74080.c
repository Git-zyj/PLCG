/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (arr_3 [i_0]);
                    var_17 = (min((((arr_2 [i_2] [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_0] [i_0] [12]))), (arr_4 [8] [i_2] [1] [8])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_4 [i_1] [17] [5] [6]) * (arr_1 [13] [8])));
                                arr_11 [i_1] [i_1] [i_2] [i_3] [i_4] = (max((max((((arr_0 [i_1] [i_4 - 1]) ^ var_13)), (arr_0 [0] [i_1]))), ((max((arr_10 [i_1] [i_1]), (arr_10 [i_1] [i_1]))))));
                            }
                        }
                    }
                    arr_12 [i_1] [i_2] [9] = (var_15 > var_5);
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
