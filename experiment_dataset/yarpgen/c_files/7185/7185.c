/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 &= (arr_2 [i_0] [i_1]);
                var_20 &= (min((max((((arr_1 [i_1]) & (arr_4 [i_0]))), ((((arr_1 [i_1]) ? 15 : 3))))), ((min((arr_4 [i_0 + 1]), (arr_4 [i_0 - 2]))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_2] [i_0] = (var_11 ^ (3049981952 >= -3711718029887526560));
                    arr_9 [i_0] [1] [i_2] = var_17;
                    arr_10 [i_0] [i_0] [i_0] [1] = (1244985343 | 41);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (((arr_0 [14]) ? (arr_11 [8] [i_1] [i_2] [i_1]) : (~1)));
                                var_22 &= ((min(((169 ? -3711718029887526583 : 0)), 3711718029887526566)));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((~(((arr_11 [i_2] [i_1] [i_1] [i_0]) ? (arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_2]) : (arr_2 [i_0 - 3] [i_1]))))))));
                }
                arr_16 [i_1] = var_18;
            }
        }
    }
    var_24 = (var_6 != var_4);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_25 = (min(var_25, (((-((~(arr_21 [i_5] [i_6]))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_26 = (arr_7 [i_5] [6] [i_7]);
                            arr_28 [i_5] = (max(var_1, ((11 + (arr_0 [1])))));
                            arr_29 [i_5] [i_6] [i_5] [i_8] = (arr_12 [i_5] [i_5] [i_5] [i_5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
