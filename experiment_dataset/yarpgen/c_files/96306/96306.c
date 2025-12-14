/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((min(var_12, 4574)));

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_15 = (min(24744, (arr_6 [i_2] [i_0] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [5] [i_0] = (arr_14 [i_0]);
                                arr_18 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] = ((-(((!(((~(arr_10 [i_0] [i_0] [i_3] [i_4])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, var_2));
                                arr_25 [i_0] [i_1] [i_0] [i_5] [i_6] = ((min((arr_6 [i_2 - 3] [i_2] [i_2] [i_2 + 1]), (min((arr_6 [i_0] [i_1] [i_2 + 1] [i_5]), (arr_7 [i_0] [i_0] [i_0]))))));
                                arr_26 [i_5] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = 153;
                                var_17 = var_12;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_30 [i_7] [i_0] [i_0] [i_0] [i_0] = ((75 ? -125 : -24714));
                        arr_31 [i_0] = var_5;
                    }
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_18 = (arr_0 [i_0] [i_8]);
                    arr_35 [i_0] [i_0] [i_1] [i_8] = var_7;
                }
                arr_36 [i_0] [i_0] [i_0] = 153;
            }
        }
    }
    var_19 = var_1;
    var_20 = -24745;
    var_21 = var_2;
    #pragma endscop
}
