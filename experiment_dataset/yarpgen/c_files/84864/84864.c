/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, (((175 ? 18618 : 0)))));
        var_16 = (min(var_16, ((((0 && 13431471385586716182) / (((((var_11 - (arr_1 [i_0])))) + (arr_0 [i_0 + 1]))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 -= (-64 * 46);
            arr_5 [i_0 + 4] [i_0 + 4] [i_1] |= ((min((arr_2 [i_0 + 1]), (!var_9))));
            var_18 = ((((((arr_2 [i_1]) ? (arr_4 [3]) : (arr_0 [i_0])))) <= (((46918 ? var_4 : (var_5 || var_14))))));
            var_19 = (-var_7 || 74);
        }
    }
    var_20 = (((((var_6 ? var_1 : var_11))) ? var_5 : (max(var_13, var_0))));
    #pragma endscop
}
