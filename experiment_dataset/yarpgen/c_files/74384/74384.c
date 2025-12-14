/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (max(var_7, ((-(var_15 && -25210)))));
                arr_7 [i_0] [i_0] = 25210;
                arr_8 [i_0] = ((((var_6 && (!var_16))) ? (var_11 << 0) : (((-((min(-25211, var_16))))))));
            }
        }
    }
    var_17 = (max(var_9, ((var_3 ? (min(2250808065489601518, var_16)) : (((var_16 ? var_13 : 588563141)))))));
    #pragma endscop
}
