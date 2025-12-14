/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((((max(-1096238118572796555, var_0)) != (var_5 ^ 9223372036854775807))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (((arr_0 [i_1 + 1] [i_0 + 3]) ? (max(((((arr_1 [i_0] [i_1]) ? (arr_3 [i_1] [i_0] [i_1 + 1]) : (arr_1 [9] [i_1 + 2])))), var_4)) : 4294967295));
                var_12 += ((((max(1096238118572796554, (((32767 & (arr_1 [4] [i_1]))))))) ? ((((max((arr_4 [i_1]), 1096238118572796554))) ? (var_4 & var_6) : var_8)) : (arr_1 [5] [5])));
                var_13 = ((~(((((((~9223372036854775807) + 9223372036854775807)) + 9223372036854775807)) << (((arr_1 [i_1] [i_0 - 2]) - 35786))))));
            }
        }
    }
    #pragma endscop
}
