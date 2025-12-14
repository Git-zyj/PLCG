/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_10 * var_1);
    var_12 = (((max((max(var_9, (-9223372036854775807 - 1))), (~var_1))) ^ 17320));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = var_7;
                                var_13 = ((((arr_13 [i_2 - 4] [i_2] [9] [i_1 - 1] [i_1 + 1]) | ((max((arr_13 [i_0] [14] [11] [i_3] [2]), (arr_5 [i_4] [i_3] [12] [4])))))));
                                var_14 = var_3;
                            }
                        }
                    }
                    var_15 = var_7;
                    var_16 = -6293284233118681345;
                    var_17 = (min(var_17, (arr_6 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = (arr_19 [i_5]);
                    arr_24 [5] [21] [17] [i_6] = (((arr_21 [i_5] [i_5] [i_7] [i_7]) ? (min(var_6, 16597384743639649198)) : ((max((min(var_6, (arr_22 [14] [i_5] [i_6] [19]))), ((max((arr_17 [18]), 19540))))))));
                    var_19 = (arr_21 [i_5] [i_6] [i_6] [18]);
                }
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
