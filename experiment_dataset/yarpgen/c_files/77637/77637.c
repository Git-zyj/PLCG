/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = 264241152;
                var_19 += (((max(3007081959, (arr_3 [i_0])))) ? ((min((((arr_1 [i_0]) & 438295239)), 1))) : ((~((7526083796099010438 ? (arr_5 [i_0]) : var_4)))));
            }
        }
    }
    var_20 += var_15;
    var_21 = var_16;
    var_22 = var_6;
    #pragma endscop
}
