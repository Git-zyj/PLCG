/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1 < (((max(268435424, 14)) & 14)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (((arr_3 [i_1]) ? 1 : (max(((127 ? 8 : 268435441)), var_0))));
                var_13 = ((0 ? (((arr_1 [i_0] [i_0 - 1]) | (arr_1 [i_0] [i_0 + 2]))) : ((max((arr_1 [i_0] [i_0 - 3]), var_4)))));
                var_14 = max((arr_6 [i_0 - 3] [i_1] [i_0 - 3]), (((((var_4 ? var_2 : var_7))) ? ((138538465099776 * (arr_6 [i_1] [i_1] [i_0]))) : (((9913989629542684899 ? var_1 : 30257))))));
            }
        }
    }
    var_15 = (30257 ? var_8 : ((((max(35287, var_3))) ? var_3 : ((34359738368 ? 9913989629542684899 : var_4)))));
    var_16 ^= -var_9;
    #pragma endscop
}
