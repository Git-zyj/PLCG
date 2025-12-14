/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_0) != (max(var_7, var_10))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_1 [i_1]) >= var_10));
                var_13 = (max(((((-28636 ? -28647 : -28639)))), ((~(arr_2 [i_1] [i_0] [i_0])))));
                var_14 = (max(var_9, ((-(arr_2 [i_0] [i_1] [i_1])))));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_15 = ((max(((min(var_11, -28659))), 1366652280006709703)) != 11632);
                    var_16 = (min((var_3 > 28651), ((max(var_3, (arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_0] [i_4] [i_4] = var_1;
                                arr_18 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 3] = var_8;
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] [i_2] = (arr_11 [11] [i_2 + 2] [i_1] [i_1] [21] [i_0 + 1]);
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    arr_23 [i_0 - 2] [i_1] [i_0 - 2] [i_5] = var_6;
                    var_17 = (!-28646);
                    arr_24 [i_5] [i_0] [i_1] [i_5 + 1] = 28639;
                    arr_25 [i_0] [i_1] [i_1] [i_5] = (arr_16 [i_0] [i_1] [i_5] [i_1] [i_5]);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_32 [i_6] = ((((((22524 ? (arr_2 [15] [i_1] [i_7]) : var_10))) ? (max((arr_7 [i_7] [i_0]), (arr_27 [4] [i_1] [i_1]))) : (arr_21 [i_0] [13]))));
                            arr_33 [i_7] = (arr_30 [i_0] [i_1] [i_6] [i_7]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
