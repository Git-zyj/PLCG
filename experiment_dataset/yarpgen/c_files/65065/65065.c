/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((0 ? 7490693660469346375 : 2203325864))) ? ((7490693660469346366 ? var_5 : -369387866)) : ((var_16 ? 1 : var_18))))) < (((var_13 + -399835629) ? (((109 ? var_14 : var_18))) : ((1 ? var_5 : var_17))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((var_15 ? (arr_2 [1] [6]) : 9))) ? ((((var_4 >= (arr_1 [i_0]))))) : ((399835653 ? (arr_3 [i_0]) : 1))));
        var_20 = (((((var_3 ? var_5 : 1))) ? ((187 ? var_11 : (arr_1 [i_0]))) : (((((arr_1 [i_0]) != var_6))))));
        arr_5 [i_0] = (((((arr_0 [i_0]) || -369387864)) ? (((arr_1 [i_0]) ? var_14 : var_12)) : (((var_2 ? var_9 : 18)))));
    }
    var_21 = (((((((var_1 ? 1 : var_8))) ? (((var_2 ? var_6 : var_15))) : (-6092430031804793029 + 1399566966261840337)))) ? ((((var_13 ? 60 : var_0)) * (var_6 + var_2))) : ((((((var_7 ? var_3 : var_13))) || (185 || var_13)))));
    #pragma endscop
}
