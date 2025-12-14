/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_1 [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((~((var_16 ^ (arr_1 [i_0])))));
        arr_4 [i_0] [2] = ((var_5 << (((arr_1 [i_0]) - 18622))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (max((((!(((var_12 ? var_6 : 3364748957380766647)))))), ((max(3364748957380766665, (arr_5 [i_1] [i_1]))))));
        var_22 = 3887362097701529579;
        var_23 ^= (((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1]))) & ((((arr_5 [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_24 *= (((arr_10 [i_1] [i_2] [i_3]) ? (arr_7 [i_1]) : ((((((arr_12 [i_1] [i_1] [i_1] [i_1]) ? var_19 : (arr_0 [i_1])))) ? ((var_5 ? (arr_0 [i_1]) : var_5)) : (((max((arr_1 [i_2]), (arr_7 [i_1])))))))));
                    arr_13 [i_1] [i_1] [i_1] = (max((max(((((arr_1 [i_2]) - var_14))), (arr_6 [i_3]))), ((((arr_0 [i_1]) < (((arr_11 [i_1]) ? (arr_5 [i_1] [i_3]) : var_8)))))));
                    var_25 = (((var_16 - (arr_0 [i_1]))));
                }
            }
        }
        var_26 = -8751618532665920604;
    }
    var_27 = 15081995116328784986;
    var_28 = (min((((!var_14) + (var_19 % var_1))), (((var_15 ? ((min(1126, 20880))) : (var_4 > var_19))))));
    var_29 += ((var_2 ? ((var_10 ? var_3 : ((var_0 ? var_17 : var_17)))) : var_8));
    #pragma endscop
}
