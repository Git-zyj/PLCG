/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 &= (~var_3);
        arr_2 [i_0] = ((1 != (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 = (((-18505 != 112) != (-127 - 1)));
        var_19 &= ((((((((16628337505605503878 & (-127 - 1)))) ? (18446743523953737728 == -109) : ((min(1, 117)))))) ? ((((((var_8 ? 47912 : 0))) != (arr_4 [i_1])))) : (max((var_9 ^ 0), var_0))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_1] = (((1 == 10) ? -16816 : (max(var_16, 18446743523953737732))));
            var_20 &= ((var_8 ? (((!168) << ((var_12 ? 1 : var_1)))) : ((~(2 - -18)))));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_21 = ((((((arr_7 [i_3] [i_3]) - (min(0, var_13))))) ? (((127 >> (((arr_7 [i_3] [i_3]) - 113))))) : ((var_2 << ((((209 ? 127 : 288160007407534080)) - 124))))));
        var_22 = -121;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_23 &= (((((120 % (~var_14)))) ? (((((var_3 << (-762720184024556347 + 762720184024556360)))) ? ((var_9 ? var_14 : 18446743523953737732)) : (((var_5 ? 10 : (arr_8 [i_4])))))) : ((min(3336684018, 288160007407534080)))));
        var_24 = (max(var_24, (((((min(((1 ? (arr_9 [i_4] [i_4] [6]) : (arr_11 [i_4] [i_4]))), 80))) ? var_15 : (-29789 ^ 4294967295))))));
        var_25 = ((~(arr_3 [i_4])));
        arr_17 [i_4] &= -762720184024556347;
    }
    var_26 = var_5;
    #pragma endscop
}
