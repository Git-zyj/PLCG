/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((244 ? ((max(16599, (arr_0 [i_0])))) : (1 ^ var_3))));
                var_16 = (min(var_16, (16602 - 38246)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 ^= (min(52919, 1));
                            var_18 = ((((arr_1 [i_1] [i_1]) == (arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_3 + 1]))) || ((min((arr_4 [i_1] [i_1] [i_2]), (max(34478, var_9))))));
                        }
                    }
                }
                var_19 = (((~0) ? (((arr_7 [1] [i_1] [i_1]) ? (min((arr_8 [i_1] [i_1] [i_1] [i_0]), var_14)) : ((((arr_3 [i_0] [i_0] [i_1]) & var_6))))) : ((((((arr_9 [i_0] [i_0] [i_0] [1]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [2] [i_1])))) ? (min(38, var_14)) : (arr_7 [i_0 - 1] [i_0 - 2] [i_0])))));
            }
        }
    }
    var_20 |= var_12;
    #pragma endscop
}
