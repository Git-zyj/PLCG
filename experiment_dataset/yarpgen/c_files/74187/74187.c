/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [11] = (((arr_3 [i_0]) ? (arr_2 [i_0]) : (((((max(var_2, var_0))) && (arr_0 [i_0]))))));
        var_17 = (max(var_17, -355647180632375987));
        arr_5 [0] = (!-var_8);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [14] [i_1] = ((-(((arr_6 [i_1]) ? var_15 : var_5))));
        var_18 = (arr_6 [i_1 - 1]);
        arr_9 [i_1] = var_8;
        var_19 += (arr_7 [i_1 - 1]);
        var_20 *= var_14;
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_21 = (arr_11 [i_2]);
        arr_12 [16] [i_2 + 2] = (((arr_10 [i_2]) ? ((((((1644995342 ? var_2 : (arr_11 [i_2 + 2])))) || var_7))) : (min((arr_10 [i_2 + 1]), ((var_10 ? var_5 : var_6))))));
    }
    var_22 |= ((var_0 ? -var_15 : ((((var_11 ? var_3 : 355647180632375983))))));

    /* vectorizable */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_23 -= (((!-355647180632375978) ? 14880 : (arr_15 [i_3 - 3] [i_3])));
        var_24 = (arr_14 [i_3]);
        arr_16 [i_3] = var_12;
        arr_17 [i_3] = var_2;
        var_25 ^= (~252285478);
    }
    var_26 = ((var_13 ? (((!var_15) ? (max(var_4, var_4)) : var_4)) : ((((!(((var_6 ? 540571933 : var_15)))))))));
    #pragma endscop
}
