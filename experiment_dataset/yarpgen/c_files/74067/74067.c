/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= -7290207080384024933;
    var_11 = var_7;
    var_12 = ((!((((max(var_5, var_0))) && (35 || 25165824)))));
    var_13 = ((var_9 ? (max((130816 + -24322), 9223372036854775807)) : (max(-var_6, ((var_8 ? 0 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_1] = 1;
                var_14 = (((max(37372, 1))) / 102);
                var_15 = ((max((arr_4 [i_0 + 2] [i_0 + 1]), (((arr_3 [i_0]) & 28164)))));
            }
        }
    }
    #pragma endscop
}
