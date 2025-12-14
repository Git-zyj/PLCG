/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((((~var_4) ? 11245 : ((var_10 ? var_7 : var_8))))) ? ((max((min(var_11, var_5)), ((min(var_0, var_14)))))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 - 1] [i_1] [i_3] [i_4 + 2] = (arr_12 [i_2 + 4] [i_2 + 4] [i_2 + 2] [i_2] [i_2 + 1]);
                                var_16 = (min(var_16, ((min((((((!(arr_6 [i_0]))) ? ((min((arr_1 [i_4]), -11259))) : ((min((arr_3 [i_0 - 3] [14]), var_11)))))), (((arr_2 [i_0] [i_1]) ? ((((arr_3 [i_3 - 4] [i_3 - 4]) ? (arr_4 [i_0]) : (arr_6 [13])))) : (min(var_1, (arr_9 [i_0] [i_4]))))))))));
                            }
                        }
                    }
                    var_17 = (((arr_5 [i_1] [i_2 + 2]) ? ((-((-(arr_10 [i_0] [i_1]))))) : 119));
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
