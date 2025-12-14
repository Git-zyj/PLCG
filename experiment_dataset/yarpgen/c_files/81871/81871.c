/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 &= 2136444285;
                var_21 += ((31579 || ((((arr_3 [i_1 + 2]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1]))))));
                arr_5 [i_0] [4] = (min((((arr_2 [i_1 + 2]) ? (arr_4 [i_0]) : (arr_4 [i_0]))), ((-122 & (arr_2 [i_1 + 2])))));
                var_22 = (arr_4 [i_0]);
                var_23 = (arr_0 [i_0] [14]);
            }
        }
    }
    var_24 = (min(var_24, var_5));
    var_25 = var_15;
    #pragma endscop
}
