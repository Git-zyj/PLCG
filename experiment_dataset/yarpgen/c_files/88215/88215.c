/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((~((var_2 ? (arr_5 [i_0]) : (arr_5 [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (max((((arr_11 [i_3] [i_0] [i_1 + 1] [i_1 + 1]) ? 255 : (arr_11 [i_3] [i_3] [i_1 + 1] [i_3]))), (min(var_3, (arr_11 [i_3] [i_3] [i_1 - 1] [i_4])))));
                                var_13 = (min(var_13, ((min(((max((var_8 - var_6), (min(-21, var_8))))), ((-((-(arr_10 [i_0] [i_2] [i_0]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 += 13;
    var_15 = (max(var_15, (((((min(var_10, ((9223372036854775807 ? var_8 : var_6))))) != var_2)))));
    #pragma endscop
}
