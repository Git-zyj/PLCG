/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 7895900126736676383;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [16] [i_3 - 1] [16] [i_1 - 1] [i_0] = max(var_4, (((arr_2 [i_1 - 1] [i_3 - 3]) ? ((var_10 ? (arr_12 [4] [i_1 - 3] [i_2] [i_3 - 2] [i_4]) : 9223372036854775799)) : ((((4294967288 == (arr_0 [6]))))))));
                                arr_15 [i_0] [i_3 - 2] [i_2] [i_1 - 3] [i_0] = ((!(~640707505)));
                            }
                        }
                    }
                    arr_16 [i_0] = ((var_2 ? -9223372036854775800 : var_5));
                    arr_17 [i_2] [i_0] [i_0] [i_0] = var_1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1 - 1] [i_5] [i_5] [i_6] = ((+(((((arr_6 [i_1 - 3] [i_2] [i_5] [i_5]) & var_3))))));
                                arr_26 [i_6] [i_6] = (((((arr_6 [i_0] [i_1 - 1] [i_5] [i_5]) ? (var_3 | var_0) : ((((arr_22 [i_6] [i_5] [i_2] [i_1 - 3] [i_0]) & (arr_9 [i_0] [i_1 - 3] [i_5] [i_2] [i_1 - 1])))))) | ((((((var_3 ? var_7 : var_6))) ? 2 : (~-9223372036854775800))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((var_8 >= ((-var_10 ? var_12 : -9223372036854775799))));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                arr_31 [i_7 + 1] [i_8] [i_8 + 2] = (!var_11);
                arr_32 [i_8] [i_8 + 2] = (!-2);
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
