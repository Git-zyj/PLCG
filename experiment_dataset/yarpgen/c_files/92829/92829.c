/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 == (max(((max(var_12, var_5))), (~var_12)))));
    var_15 = ((((var_6 + 7132554439770509040) ? var_10 : (var_1 != var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_16 *= ((16777215 ? 4503599627370495 : ((16777211 ? -71 : 32))));
                var_17 = (min(var_17, (arr_0 [i_0])));
                var_18 = (((~-9223372036854775785) ? (((arr_2 [i_1 - 2] [i_1 - 2]) ? (arr_2 [i_1 - 2] [i_1 - 2]) : (arr_5 [i_1 - 2] [i_1 - 2]))) : (arr_2 [i_1 + 2] [i_1 - 1])));
                var_19 = ((!((((arr_1 [i_0]) ? 32749 : (((arr_2 [i_0] [i_0]) ? (arr_4 [8]) : (arr_0 [i_1]))))))));
            }
        }
    }
    var_20 = ((-((min((min(3, 255)), (var_6 > var_13))))));
    #pragma endscop
}
