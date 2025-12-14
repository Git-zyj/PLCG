/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 += 1659874209;
                var_17 = ((((((1659874220 % (arr_0 [i_0])))) ? (arr_1 [i_0]) : 0)));
            }
        }
    }
    var_18 = ((((((((29 ? var_15 : var_1))) | (var_12 | 1)))) ? (var_6 | 1) : (((min(-2296433603943442935, var_5))))));
    var_19 -= (4191349755457740541 + 1);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_3] [i_2] [i_2] = (arr_7 [i_3 - 1] [i_3]);
                    arr_13 [i_3] = ((((((arr_11 [i_3] [i_3] [i_4 + 1]) << ((45 ? 1 : 0))))) * (((((max((arr_9 [i_3]), 48848)))) - (max((arr_6 [22]), var_5))))));
                }
            }
        }
    }
    #pragma endscop
}
