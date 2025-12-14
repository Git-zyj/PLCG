/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((max((var_0 % var_13), var_14)) != (max((var_17 / var_14), var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_9 [i_2] [i_2])));
                                arr_12 [i_1] [i_1] [i_1] [i_3] [i_4] [3] = (max((arr_8 [i_1]), (((arr_5 [i_0] [i_1] [10]) ? (arr_5 [i_3] [i_1] [i_0]) : var_9))));
                                var_20 = (max(var_20, (arr_9 [11] [11])));
                            }
                        }
                    }
                    var_21 = ((var_16 ? ((((((arr_2 [7]) ? 1 : var_11))) ? 1 : var_4)) : (((((arr_0 [i_1]) || (arr_4 [i_0]))) ? (arr_5 [3] [i_1] [i_1]) : (((arr_4 [i_0]) ? 20 : 0))))));
                }
            }
        }
    }
    var_22 = 5745693803823235785;
    var_23 = ((((var_8 <= (!var_7))) ? var_3 : (~var_14)));
    #pragma endscop
}
