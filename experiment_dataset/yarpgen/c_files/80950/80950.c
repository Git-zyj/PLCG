/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_18 &= ((((min(864807843, (arr_3 [i_1 - 3])))) ? (((((((arr_0 [i_1] [i_1]) && (arr_1 [i_1 + 1])))) * var_8))) : var_1));
                var_19 = ((((~(min(var_0, (arr_1 [i_0]))))) - ((~(arr_4 [i_0] [i_1] [i_1 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = 1351;
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2] = ((((~(arr_7 [i_2] [i_0] [i_2] [i_0]))) * (((((((arr_7 [i_4] [i_2] [i_2] [i_0]) ? var_17 : -1)) > (arr_2 [i_4])))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] = -var_12;
                arr_16 [i_0] [1] = (!-1);
            }
        }
    }
    var_21 = var_8;
    var_22 = ((~((~(var_1 | var_10)))));
    #pragma endscop
}
