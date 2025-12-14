/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) ? ((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1])))) : (arr_4 [i_0] [i_1])));
                arr_6 [i_0] &= var_11;
                var_13 = ((((arr_0 [i_0]) ? (arr_1 [i_0]) : ((((arr_4 [i_0] [7]) ? var_2 : 255))))));
            }
        }
    }
    var_14 = (min(-97, var_10));
    #pragma endscop
}
