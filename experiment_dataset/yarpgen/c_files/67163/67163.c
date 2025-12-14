/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((arr_1 [i_0]) >> (arr_5 [i_0] [i_1] [i_0])));
                var_15 = ((var_2 % ((var_5 - (min(var_3, var_4))))));
                var_16 ^= (((arr_4 [i_0]) * (4228241329 / -2799955406267394311)));
                var_17 = (((arr_5 [i_0] [i_1] [i_0]) ? (arr_3 [i_1] [i_1 - 1]) : ((((arr_1 [i_0]) ? (((var_11 ? var_1 : var_1))) : (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_18 = ((var_6 != (min((arr_8 [i_4] [i_4]), (arr_1 [i_2])))));
                            var_19 = (min(var_19, (((13319 ? (arr_6 [i_5 + 2]) : ((max(var_7, (var_1 && var_5)))))))));
                            var_20 ^= var_7;
                            var_21 = (!var_5);
                            var_22 = (max(var_22, (arr_3 [i_3] [i_3])));
                        }
                    }
                }
                var_23 = ((((((((var_6 ? var_4 : (arr_4 [i_3])))) ? (((arr_11 [i_2] [i_3]) ? var_10 : (arr_4 [i_2]))) : var_1))) ? (max((((arr_15 [16] [i_3] [i_3] [2] [1] [i_3]) - (arr_0 [i_3]))), (((~(arr_11 [i_3] [i_2])))))) : ((((var_7 || var_10) ? 13306 : (arr_10 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
