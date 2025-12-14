/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((-24 > 23) - ((((arr_4 [i_0] [i_0 + 1] [i_0 - 1]) > var_7)))));
                var_21 = (((-122 / var_8) ? (arr_1 [i_1 + 1]) : (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1])))));
            }
        }
    }
    var_22 = (max(var_22, var_10));
    var_23 = (max(var_23, (((var_9 + (!var_11))))));
    var_24 &= ((!((min(var_1, 37)))));
    #pragma endscop
}
