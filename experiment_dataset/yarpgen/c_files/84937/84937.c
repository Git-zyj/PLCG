/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((min(var_17, var_10))) ? (213 | var_17) : 42)) | 197));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (((arr_5 [20]) ? ((((~191) ? (51 * 61) : 21))) : (((((219 ? (arr_6 [i_0]) : var_11))) | var_3))));
                            var_20 = var_11;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = (~29);
                                var_22 = (((((arr_13 [i_4]) ? ((194 ? var_13 : 62)) : (((var_7 ? 213 : 32)))))) ? ((((((max(233, 2))) != 61)))) : 51);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, 197));
    #pragma endscop
}
