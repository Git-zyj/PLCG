/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 != var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (((arr_0 [8] [i_0]) ? (arr_3 [i_0]) : ((((-4537459695726275089 ? 808035577993742752 : 15017)) >> (((arr_1 [i_0] [i_1]) - 6553162882220113287))))));
                var_16 = arr_3 [i_0];
                var_17 += ((~(((arr_1 [i_0] [i_1]) ? var_12 : (arr_2 [i_0] [i_1])))));
                arr_6 [i_0] = ((~(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
