/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((arr_3 [i_1] [i_1] [i_1 - 2]) ? var_3 : -58489)) ^ (((!(arr_1 [i_1 - 2]))))));
                arr_5 [i_1] [i_1] = ((22076 ? 65535 : 2159865302935846495));
            }
        }
    }
    var_18 = -32751;
    var_19 *= ((!(((var_15 ? (252 / -18723) : (!var_8))))));
    var_20 = (var_13 ? var_6 : var_3);
    #pragma endscop
}
