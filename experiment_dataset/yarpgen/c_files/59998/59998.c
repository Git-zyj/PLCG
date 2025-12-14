/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -21181;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((((arr_1 [i_0]) ? 4223545595 : 4300603780629686738)) <= (!var_2))))) == (min((max(var_10, 4300603780629686740)), (arr_0 [i_0] [i_0])))));
        var_20 = (23912 ? (((arr_0 [i_0] [i_0]) ? var_5 : (arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) ? -40 : (arr_0 [i_0] [i_0]))));
        var_21 = ((~(((!-4300603780629686740) ? 1 : (arr_2 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_22 -= (~var_13);
        var_23 = (max(var_23, (((var_16 / (arr_0 [i_1] [i_1 - 2]))))));
        var_24 = ((23935 ? (arr_1 [i_1 - 1]) : 212));
    }
    var_25 = (((var_13 * 40) + ((((0 << (var_13 - 3301992782))) | 15))));
    var_26 = (min(var_26, var_14));
    var_27 = var_2;
    #pragma endscop
}
