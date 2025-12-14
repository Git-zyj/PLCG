/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_16);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = ((!(((((min((arr_0 [i_1]), var_8))) ? var_3 : ((var_10 ? var_13 : var_14)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = ((((max((~var_16), ((((arr_8 [i_4]) > (arr_10 [i_2] [i_3] [i_4]))))))) ? ((((arr_0 [i_1 + 3]) + (arr_2 [i_0 + 1])))) : (((arr_12 [i_2 + 2] [i_2] [i_2] [i_1] [i_1]) & (~var_0)))));
                                var_23 = (min(((((((arr_6 [i_0 - 1] [i_2] [i_2] [i_2]) ? var_7 : var_7))) ? (arr_5 [i_1 + 3] [i_1] [i_2 - 1]) : ((min((arr_9 [i_1] [i_2] [i_3] [0]), (arr_10 [i_3] [i_2] [i_1])))))), (((arr_5 [i_0 + 1] [i_1 + 2] [i_2]) ? (arr_2 [i_1 - 3]) : (arr_5 [i_0 - 3] [i_1 + 1] [i_2])))));
                                arr_14 [i_2] = ((+((var_10 * (((arr_7 [i_2 + 4] [i_1] [i_0 - 1]) * var_4))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((((max((arr_2 [i_0 - 3]), (arr_5 [i_0] [i_1 - 1] [i_0 + 1])))) ? (((min((arr_2 [i_0 - 2]), var_17)))) : ((~(arr_5 [i_0] [i_1 - 3] [i_0 - 3])))));
            }
        }
    }
    var_24 = ((var_18 == ((max((min(var_19, var_14)), var_6)))));
    #pragma endscop
}
