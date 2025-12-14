/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_15;
    var_19 += var_0;
    var_20 += (min((((var_1 ? ((1693383726 >> (var_17 - 577771970))) : var_9))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 += ((((1693383726 ? 0 : (arr_5 [1] [1] [i_1 + 2])))) * (min(var_15, (((var_15 + 9223372036854775807) >> (((arr_0 [i_0] [i_1]) - 3102788860232636206)))))));
                var_22 ^= ((~((min((((1 <= (arr_5 [2] [4] [i_0])))), -19487)))));
            }
        }
    }
    var_23 += ((~(max(var_5, ((6965677775875849624 ? var_10 : -9172985306040864879))))));
    #pragma endscop
}
