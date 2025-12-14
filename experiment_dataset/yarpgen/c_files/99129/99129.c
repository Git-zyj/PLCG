/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((-(arr_1 [i_0])))) ? ((((var_5 || (arr_1 [i_0]))) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) >= (arr_1 [i_0])))))) : (((arr_1 [i_0]) & (arr_1 [i_0])))));
        var_21 -= (arr_1 [i_0]);
        arr_4 [5] = (arr_0 [i_0]);
        var_22 = max((min(var_18, (arr_2 [i_0]))), (!var_4));
        arr_5 [i_0] [i_0] = (((!2600608506647749203) > ((~(max((arr_0 [i_0]), (arr_2 [i_0])))))));
    }
    var_23 = ((~((287667426198290432 >> (912405218 - 912405211)))));
    var_24 = ((var_9 ? (((var_10 > -422921476) ? -var_11 : var_12)) : var_1));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                arr_12 [i_1] [i_1] [i_1] = ((((((arr_8 [i_1] [i_2]) ? (arr_10 [i_2] [i_1] [i_1]) : ((18159076647511261188 | (arr_6 [i_1] [i_1])))))) ? ((((arr_9 [i_1] [i_2]) + ((max(var_12, (arr_10 [i_1] [i_2] [i_2]))))))) : (((arr_7 [i_2]) ? ((((arr_9 [i_2] [i_1]) & var_8))) : ((~(arr_11 [i_1] [i_1] [i_2])))))));
                var_25 = (((~(arr_9 [18] [18]))));
                var_26 = ((287667426198290441 | 9771489393570328550) != (((arr_11 [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1]))));
                arr_13 [i_1] [i_2] = (min(((var_4 ^ (arr_6 [i_2] [i_2]))), ((max(var_6, (min(var_12, (arr_7 [i_1]))))))));
                var_27 -= ((-((-(arr_7 [i_1])))));
            }
        }
    }
    #pragma endscop
}
