/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 30510;
    var_17 = (((~255) ? ((~((var_13 ? var_10 : var_8)))) : (((~(~83))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 2] = ((((arr_2 [i_1] [i_1] [i_1 - 1]) ? (arr_2 [i_1 + 1] [i_1] [i_1 - 1]) : var_5)));
                arr_6 [i_0 + 2] = (arr_1 [i_0 + 1]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = ((-(((arr_10 [i_0 - 1]) & var_4))));
                                arr_17 [i_4] [i_3] [i_3] [i_1] [i_0] = ((min((arr_12 [i_2 - 1] [i_2]), (((0 == (arr_10 [i_0])))))));
                                arr_18 [i_2] [i_3] [i_2] = 55;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (75 / var_5);
    #pragma endscop
}
