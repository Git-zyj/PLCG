/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [1] [i_0] [i_1] [i_3] [i_0] [i_2] [i_0] = (-9223372036854775807 - 1);
                                var_10 = (min(var_10, ((-80 ? (arr_7 [i_0] [i_0] [i_0] [2]) : ((~(~var_1)))))));
                                var_11 = max(((-(arr_10 [i_4 - 3] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_1]))), (((46846 == (arr_1 [i_1])))));
                                arr_12 [i_1] [i_1] [i_3] = (max(((-((226 ? 9223372036854775807 : var_7)))), ((73 ? (-2147483647 - 1) : (((arr_2 [1]) ? (arr_2 [i_2]) : 6222205269687596326))))));
                                var_12 = (((!65525) ? (((arr_7 [i_1] [i_1] [i_3] [10]) ? 9223372036854775807 : (arr_4 [i_0] [i_4]))) : -6222205269687596326));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_13 = (max((~6222205269687596327), (((arr_17 [2] [9] [i_0]) ? -10 : ((var_2 ? 10 : var_3))))));
                            var_14 ^= (arr_7 [i_0] [i_0] [i_5] [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((((((-1841578714 ? var_6 : 11))) ? var_6 : ((var_3 ? 1840506578 : var_7))))) ? 246290604621824 : ((((((1715359128 ? var_7 : 1840506578))) ? -var_8 : var_0)))));
    var_16 = ((!(!278093622)));
    var_17 = ((var_4 ? ((((-63 == (min(40877027303242975, var_4)))))) : var_3));
    var_18 = ((~(((((var_2 ? -28 : var_7))) ? ((1024 ? var_2 : var_3)) : var_4))));
    #pragma endscop
}
