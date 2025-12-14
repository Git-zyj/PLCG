/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_6 & var_8) ? (!var_18) : var_13));
    var_21 = var_17;
    var_22 = (((var_10 * (var_9 / var_12))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_23 = (((!(!0))) ? -1341769290 : ((min((min((arr_3 [6] [6]), (arr_1 [i_0 - 1] [i_0 - 1]))), (arr_1 [i_0] [1])))));
        arr_4 [i_0] = min(((-(arr_3 [i_0 - 1] [i_0 - 1]))), ((((min((arr_2 [23] [i_0]), (arr_0 [i_0 - 1])))) ? (arr_2 [i_0 - 1] [i_0 - 1]) : -var_1)));
        var_24 += (!(arr_2 [i_0 - 1] [i_0 - 1]));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_25 = (11081557335264909689 * 1);
        arr_8 [i_1] = ((((!(((~(arr_2 [24] [i_1])))))) ? ((min(68, (arr_6 [i_1] [i_1])))) : ((max((max(var_4, (arr_2 [i_1] [2]))), (arr_6 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((arr_0 [i_2]) & (arr_10 [i_2]))) & (((arr_0 [i_2]) ^ (arr_10 [i_2])))));
        var_26 = (max((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_1 [i_2] [i_2]))), (arr_1 [i_2] [i_2])));
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_27 = ((((((arr_12 [i_3]) ? (arr_12 [i_3]) : (arr_3 [i_3] [i_3])))) || (((((((arr_15 [i_3] [i_3]) ? (arr_2 [i_3] [i_3]) : 4088))) ? (((arr_3 [i_3] [i_3]) ? var_3 : (arr_12 [i_3]))) : (((!(arr_1 [1] [i_3])))))))));
        var_28 -= ((-(((min(var_19, (arr_0 [i_3]))) + (~27341)))));
    }
    #pragma endscop
}
