/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((max(var_8, var_1))) ? ((max(113, 113))) : (~var_12))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] [i_0] &= ((((var_2 ? 113 : -161255975422388504)) >= ((((arr_1 [i_1 + 2] [i_1 + 1]) ? 52858 : var_9)))));
                var_20 = ((((1 / (max(var_10, (arr_0 [i_0])))))) ? (52864 * var_13) : ((52858 ? -6191168398733809112 : 4542)));
                var_21 = (min(var_21, ((((((var_16 + (arr_1 [2] [i_1 + 2])))) ? ((((-12788 - 127) - (((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_3 [i_0])))))) : ((((1126372125 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) - (arr_2 [i_1] [i_0]))))))));
                arr_6 [i_0] [i_1] [i_0] = (max(((((((arr_0 [i_0]) ? var_1 : (arr_1 [i_0] [i_1])))) ? (max(var_3, var_13)) : var_16)), ((((((18 ? 60310 : (arr_4 [i_0])))) < (((arr_1 [i_0] [11]) | var_2)))))));
            }
        }
    }
    #pragma endscop
}
