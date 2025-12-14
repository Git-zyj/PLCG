/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max(-78, var_1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (((((+(((arr_10 [i_2] [i_2]) ? 12 : (arr_1 [i_1] [i_1])))))) ? ((((max(255, 11))) + (((!(arr_7 [i_2] [i_1] [i_1] [i_3 - 2] [i_4] [12])))))) : (!65524)));
                                var_18 ^= var_3;
                            }
                        }
                    }
                    arr_11 [i_2] [i_2] [i_2] = (min((arr_5 [6]), (((148232141 ? 28 : ((65535 ? 243 : 0)))))));
                    arr_12 [i_2] [14] [i_2] = ((53 ? var_7 : (arr_8 [1] [i_0 + 1] [i_2 - 1])));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = ((12 * (max((((264241152 ? var_15 : 1))), ((15 ? var_15 : var_9))))));
        arr_15 [i_5] [i_5] = (((min(-19, (arr_14 [i_5]))) << (var_10 - 3587280725)));
    }
    #pragma endscop
}
