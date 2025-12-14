/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(-2972476630397879901, (~var_3)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (arr_2 [i_0 - 1] [i_0 - 1]);
        arr_3 [i_0 + 1] = ((!((max(37, -431661222876580308)))));
        var_20 = ((arr_2 [i_0] [i_0]) != (min((arr_0 [i_0 - 1]), var_14)));
        var_21 += (((!((((arr_2 [i_0] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = var_1;
        arr_8 [i_1] [i_1] = (arr_6 [i_1]);
        var_22 = ((var_16 && (!0)));
        arr_9 [i_1] [i_1] = ((!(arr_6 [i_1])));
        arr_10 [i_1] [i_1] = (((arr_6 [i_1]) ? 1 : (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_23 = ((((!(arr_12 [i_2]))) ? (max(var_3, (arr_12 [i_2]))) : 1));
        var_24 -= max((0 + -6), ((-var_0 & (((arr_11 [17]) ? (arr_12 [i_2]) : (arr_11 [i_2]))))));
    }
    var_25 = (((((~0) ? (max(var_10, var_10)) : ((max(4263, 4263)))))) ? var_0 : -1);
    #pragma endscop
}
