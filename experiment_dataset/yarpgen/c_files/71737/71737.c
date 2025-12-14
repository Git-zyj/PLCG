/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 *= var_10;
                var_16 = (max(var_16, (((!(~40910))))));
            }
        }
    }
    var_17 = ((((((~5) - var_8))) && (((38363 ? (var_6 * 1) : var_1)))));
    var_18 -= var_8;
    var_19 = (((((((var_2 ? 1 : 1))) ? 2752447011 : var_2))) ? var_3 : ((min((-32767 - 1), 839898658))));
    #pragma endscop
}
