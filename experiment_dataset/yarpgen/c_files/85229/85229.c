/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_16 ? var_3 : (~var_4)))), (~547191652)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= (((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : (547191664 % 3747775663))) < (((arr_1 [i_0 - 1]) ? ((((2291468830 && (arr_1 [i_0]))))) : (arr_0 [i_0])))));
        arr_4 [1] = ((((((((arr_1 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) - (arr_1 [i_0 - 1])))) ? (((((-(arr_0 [i_0])))) ? (((arr_1 [i_0]) + var_1)) : var_6)) : (arr_1 [i_0])));
        arr_5 [1] [1] = (((arr_1 [i_0 + 1]) ? var_9 : (((((~(arr_0 [i_0]))) < (33316 < var_8))))));
        arr_6 [i_0] |= ((((((((arr_1 [12]) && 3747775622))) == var_6))) / (arr_0 [17]));
        var_18 = ((((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1])))) ? (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))) : (max((arr_0 [i_0 - 1]), (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = (((var_3 - 33318) ? (((arr_1 [10]) + 4)) : (((-(arr_8 [10] [10]))))));
        var_19 += ((var_0 == (((arr_1 [i_1 + 1]) ? (((((arr_7 [8]) || 6)))) : (max((arr_1 [i_1]), 4294967295))))));
        var_20 = (max(var_20, (((-(((arr_0 [i_1 + 1]) << (arr_0 [i_1 + 1]))))))));
        var_21 ^= (arr_0 [i_1]);
    }
    var_22 = (!210);
    var_23 = (max((min(((var_5 ? var_4 : 5)), var_1)), (((var_12 ? var_12 : var_11)))));
    #pragma endscop
}
