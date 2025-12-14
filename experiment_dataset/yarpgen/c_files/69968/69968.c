/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(0, -45770));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = 60312;

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_12 = 18;
                        var_13 = ((!((((arr_7 [i_1 - 1] [i_2 + 1] [i_3 + 2]) - var_5)))));
                        arr_13 [i_0 + 1] [6] [i_0 + 1] [i_0] = min((max(var_2, (arr_12 [i_0] [i_0 + 1] [i_0 + 2] [i_1 - 1]))), (arr_0 [i_1] [1]));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 = (min(var_14, (max((max(var_1, (arr_0 [i_0 + 2] [i_0 - 1]))), ((((arr_0 [i_0] [i_0]) ? (arr_3 [i_0]) : 32760)))))));
                                var_15 = (max(var_15, (arr_14 [10] [i_5] [i_2] [i_5] [i_1] [i_2 - 1])));
                                var_16 -= (((min(32354, 3788660413681347341)) * 59965));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_1] = (arr_9 [i_0 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
