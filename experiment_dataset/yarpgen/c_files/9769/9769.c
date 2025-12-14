/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_3] = (((~(-127 - 1))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (min((arr_16 [i_1] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 1]), (arr_16 [i_2] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1])));
                                var_11 = (max((max(var_3, 2399833888119495752)), ((max((arr_12 [i_0] [i_1] [8] [i_4]), (((-725613532 != (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [12] = max((arr_11 [i_0] [i_1] [i_1] [i_1]), (((((96 ? (arr_3 [i_0] [i_0] [i_4]) : var_7))) ? (((min(var_10, (arr_3 [i_0] [i_0] [i_0]))))) : var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 *= var_2;
    #pragma endscop
}
