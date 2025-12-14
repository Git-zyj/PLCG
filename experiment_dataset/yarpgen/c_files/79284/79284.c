/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_1;
    var_21 = (((((((var_2 ? var_10 : 1072238045)) + ((-428 ? var_3 : 3222729250))))) ? var_19 : ((var_5 ? var_4 : ((var_5 >> (-22161 + 22180)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-25576 ? (((86 ? (arr_0 [i_0] [i_0]) : 126))) : (arr_1 [i_0])));
        var_22 &= (((var_13 + (arr_1 [i_0]))));
        arr_4 [i_0] [1] = ((((((arr_0 [2] [i_0]) ? 2852 : var_17))) ? (arr_2 [17] [i_0]) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_23 = (arr_0 [i_1] [i_1]);
            var_24 = ((-1481 / (arr_1 [i_1])));
        }
        var_25 |= ((25016 ? (((-12684 ? 17427 : -28612))) : ((22179 / (arr_1 [i_1])))));
        var_26 = 1481;
        var_27 |= (((arr_0 [i_1] [i_1]) / (arr_9 [i_1] [i_1])));
    }
    var_28 = (((((var_5 ? 0 : var_8))) ? var_6 : var_12));
    #pragma endscop
}
