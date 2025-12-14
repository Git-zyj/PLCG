/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = ((!(((-((min((arr_4 [2] [i_1]), var_4))))))));
                arr_7 [i_1] = (min(((max((arr_2 [i_0 + 4] [i_0 + 2]), var_8))), (max((arr_5 [i_0 + 3] [i_0 + 2]), var_0))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (arr_9 [i_0] [i_3 + 1] [i_0]);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (~var_3);
                                arr_18 [i_1] [i_1] [21] [19] [i_1] = (min((arr_0 [i_0]), (arr_0 [i_4])));
                                arr_19 [i_0 + 3] [i_1] [i_2] [i_3] [2] = (arr_8 [i_2] [i_3 - 1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((min((((!(arr_13 [i_0 + 1])))), (arr_13 [i_0]))))));
                            arr_24 [i_0] [i_5] [i_0] [i_6] = var_2;
                            var_14 = ((!(((~(!var_2))))));
                            arr_25 [i_0] [i_5] [i_5] [i_6] = arr_12 [i_0 + 2] [i_0 + 2] [i_5] [i_6 - 2];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
