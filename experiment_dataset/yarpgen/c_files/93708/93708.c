/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(var_13, var_3));
        arr_2 [6] &= ((-((min(var_0, (arr_0 [i_0]))))));
        var_14 = (max((min((arr_1 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (min(((~(arr_3 [i_4]))), (((((arr_9 [i_0]) | (arr_8 [i_0] [i_1] [i_1] [i_1] [8] [i_4]))) ^ (((arr_3 [1]) ^ 1))))));
                                var_16 = (arr_9 [i_1]);
                                var_17 = min(1, (((arr_8 [i_3] [i_3 - 2] [1] [1] [i_4] [i_4]) ? (arr_8 [i_3 + 1] [i_3 - 2] [i_3] [i_4] [i_4] [i_4]) : (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [2]))));
                            }
                        }
                    }
                    var_18 |= 12631;
                }
            }
        }
    }
    var_19 -= ((-((var_8 | (((min(var_1, var_4))))))));
    var_20 = (min(var_20, 1));
    #pragma endscop
}
