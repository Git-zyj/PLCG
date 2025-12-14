/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((min(78, var_9))))));
        arr_3 [i_0] = ((min(var_5, var_5)) - (((~(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (((~16431731206387007429) ? -79 : ((((52807 * var_3) == var_7)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = (arr_0 [i_1]);
        arr_10 [i_1] = ((78 ? 1 : 1));
        arr_11 [i_1] = (min((((!var_3) ? var_9 : ((37802 ? var_2 : var_9)))), var_3));
        arr_12 [i_1] = (min((((max(var_6, var_0)) / (min(var_7, 16966363618721967702)))), var_6));
        arr_13 [i_1] = (((((var_5 ? (min(var_6, 6938707751256751176)) : (~-1)))) ? (arr_8 [i_1]) : ((0 - ((var_11 ? 27735 : (arr_1 [i_1] [i_1])))))));
    }
    var_12 = ((((max((((0 ? 37802 : 359433076))), var_9))) ? (((var_10 ? var_7 : (!-84)))) : ((55121 ? var_1 : ((var_8 ? 3683955569351279268 : var_6))))));
    var_13 = var_2;
    #pragma endscop
}
