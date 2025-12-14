/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((88 & 1888342237) ? ((~(max(var_0, -954133114)))) : (((3106709127 == (~-4008818315777593657))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = ((var_9 ? 0 : (arr_1 [i_0] [i_0 + 2])));
        var_12 = (((((5901981952013788049 ? var_7 : (arr_1 [i_0] [i_0])))) ? 112 : ((3017578143 ? 2113567376 : 3017578143))));
        arr_2 [i_0] [i_0] = ((var_2 ? 5009629292030403398 : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [1] [i_0 + 1] = (~(arr_1 [i_0] [i_0 - 1]));
            arr_6 [i_0] = arr_0 [i_0 - 1] [i_0 + 1];
        }
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_2));
        var_14 = ((((max((!var_4), (arr_4 [i_2] [i_2])))) ? ((1263015620 ? ((1 ? -36 : 55013)) : ((-48 ? var_9 : 1207357548)))) : (!-24726)));
        var_15 = max(((var_9 ? ((1 ? (arr_1 [i_2] [i_2]) : 34917)) : 2018528169)), ((((max(2127, (arr_4 [i_2] [i_2])))) ? ((-(arr_8 [i_2] [i_2]))) : var_6)));
    }
    #pragma endscop
}
