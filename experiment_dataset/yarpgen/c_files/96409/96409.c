/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((134217727 ? ((((-116 ^ var_7) | ((max((arr_3 [i_0] [1]), var_7)))))) : (min((~4195509840), (-33 & 28299)))));
                    arr_11 [i_2] [i_0 - 2] [i_1] [i_0 - 2] = (arr_0 [i_0 + 1]);
                }
            }
        }
    }
    var_20 = (min(var_10, (((var_19 >> (96 - 69))))));
    #pragma endscop
}
