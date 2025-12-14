/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 ^= ((((min((max((arr_2 [3]), 557626004)), (arr_4 [i_0] [i_0])))) < (((((var_16 ? -557625997 : var_1))) ? (arr_2 [i_2]) : (min(-21105, var_5))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = min((arr_0 [8] [i_4]), ((((((arr_6 [i_0] [i_2] [i_2] [5]) / (arr_1 [i_1])))) / var_1)));
                                arr_10 [i_2] [i_3] [i_2] [2] [i_1] [5] [i_2] = (((((69 ? var_2 : var_6)) + 9223372036854775807)) >> (((var_15 != (arr_1 [i_3 - 2])))));
                                var_19 = ((((((((arr_5 [i_3] [7] [i_3] [i_3]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 21087))) ? ((((arr_7 [4] [i_2] [i_2]) && var_9))) : (((arr_7 [i_0] [i_0] [i_2]) * 142)))) >= ((((((max(var_3, (arr_1 [i_2]))))) < -1)))));
                                var_20 = 11;
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((3537634899 / ((((arr_5 [i_0] [i_1] [i_0] [i_0]) ? (27159 * var_8) : (((arr_3 [1] [i_1]) / var_7)))))));
                }
            }
        }
    }
    var_21 = (max(-27160, (max(var_1, var_13))));
    var_22 ^= ((var_10 ? var_7 : (!var_16)));
    var_23 ^= (((var_6 ? (!var_5) : var_11)));
    #pragma endscop
}
