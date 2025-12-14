/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (((((((1 ? var_16 : var_15))) * 5431490630178503356)) % 32505856));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [22] |= (max(var_4, (((arr_2 [i_2] [i_0]) ? var_13 : (((arr_4 [i_0 + 2] [22] [8]) ? var_7 : var_15))))));
                    arr_8 [i_0] = (((!-110) ? 1345003184 : 110));
                    arr_9 [i_0] = ((5431490630178503371 ? 1 : 39924));
                    arr_10 [i_2] [i_0] [i_0] [i_1] = (~295680267);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((((((arr_4 [5] [i_0 + 4] [i_0]) ? var_9 : (arr_4 [i_0 - 2] [i_0 + 3] [i_0])))) ? (((((((arr_5 [i_0] [i_1]) ? -110 : (arr_4 [23] [i_1] [i_0]))) + 2147483647)) << ((((((arr_0 [i_0 - 1]) >= var_6))) - 1)))) : (13015253443531048265 && 0)));
                }
            }
        }
    }
    #pragma endscop
}
