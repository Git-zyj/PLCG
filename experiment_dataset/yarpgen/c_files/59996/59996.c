/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [4] [i_1] [i_1] = ((+(((arr_1 [i_1] [i_0]) ? var_9 : (arr_1 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_10 = ((-((var_0 + (arr_10 [i_0] [i_2] [i_2] [i_2])))));
                    var_11 |= (arr_0 [i_0] [i_0]);
                }
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_12 = (((arr_6 [i_4] [i_3 - 1] [i_1]) ? var_8 : (((var_6 ? (arr_4 [i_4 + 1]) : var_6)))));
                        var_13 |= var_0;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_5] [i_0] [15] = ((!(((var_6 ? var_6 : (arr_6 [i_1] [i_1] [i_5 - 2]))))));
                                var_14 = (max(var_14, ((((((-(arr_8 [i_0] [i_3 - 3] [i_3 - 1] [i_5 - 1])))) ? (((((var_6 ? var_8 : (arr_10 [i_0] [i_1] [i_3 - 3] [i_5])))))) : ((var_9 ? (((-(arr_10 [i_1] [i_3 - 1] [i_5] [i_6])))) : -2147483640)))))));
                                var_15 = (arr_18 [11] [i_5] [i_3] [i_3 - 2] [1] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_7 ? ((max(var_2, (!var_6)))) : -var_1));
    var_17 = var_8;
    var_18 = ((var_1 ? var_0 : var_7));
    #pragma endscop
}
