/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_10 ? var_2 : (var_7 > var_14))), var_9));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 = (max(var_21, var_2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 ^= ((arr_7 [i_0] [i_1] [i_1] [i_1]) << ((((max((arr_5 [i_0 + 2] [i_2 + 2]), (arr_5 [i_0 + 1] [i_2 - 1])))) - 58242)));
                    var_23 = ((((var_3 < ((-14780 ? (arr_4 [i_0] [i_0] [i_2]) : -1315478639764155397)))) ? var_14 : ((1422534436213596554 ? ((((arr_2 [i_0]) * var_11))) : ((1422534436213596554 ? 2803442070076717057 : (arr_0 [i_0])))))));
                    var_24 = ((!(((((((arr_7 [i_0] [i_1] [i_0] [i_0]) > 57)))) < 0))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = arr_0 [i_3];
        var_25 = ((~((min((arr_0 [i_3]), (arr_0 [i_3]))))));
        var_26 = (((((min((arr_2 [i_3]), 1))) ? -1 : var_3)));
        var_27 = ((((max(-87, (arr_9 [i_3])))) ? (((arr_4 [i_3] [i_3] [i_3]) ? 1 : (((-1353002087096581644 || (arr_2 [i_3])))))) : var_1));
        arr_13 [i_3] [i_3] = (~0);
    }
    var_28 &= var_8;
    var_29 = ((!(var_14 < var_17)));
    #pragma endscop
}
