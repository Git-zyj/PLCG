/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((((var_3 ? 1 : var_10)) != (!32767))))));
    var_12 = ((((max((var_1 != var_1), var_10))) > (max(-var_0, var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((arr_0 [i_0]) ? (arr_1 [6]) : 14488))));
        var_13 = ((-var_2 / (((var_10 != (arr_1 [10]))))));
        arr_3 [i_0] = (14507 / 1);
    }
    var_14 = ((((!((min(var_0, var_7))))) ? ((((((1 ? var_4 : var_8))) && (var_10 / var_4)))) : (((!var_3) ? (var_10 <= var_8) : (~1)))));
    var_15 = -32751;
    #pragma endscop
}
