/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((((arr_3 [i_1] [i_2] [i_3 - 1]) ? var_2 : 13869552353694514533)) + (((var_3 ? 65535 : (arr_1 [i_0])))))), ((((max(31, var_0))) ? (((max(224, (arr_5 [i_0] [i_0] [6]))))) : ((1 ? var_0 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_4 - 1] = ((((min(var_0, var_0))) + ((((var_4 ^ 19483) ^ var_7)))));
                            }
                        }
                    }
                }
                arr_13 [i_0] = (-(((arr_1 [i_1]) ? 239 : (arr_1 [i_0]))));
                arr_14 [i_1] = ((((((((arr_7 [i_0] [i_0] [i_0] [i_1]) + (arr_6 [i_0]))) + ((0 * (arr_2 [i_0] [1])))))) ? (16330397800931859141 - var_0) : ((((var_9 * var_8) * ((((arr_1 [i_1]) * 0))))))));
                arr_15 [i_0] [1] = ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]) : var_1)) & ((570163113 ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]) : var_1)));
            }
        }
    }
    var_13 = (max(((((var_4 || var_11) && (((var_2 ? var_0 : var_10)))))), var_0));
    #pragma endscop
}
