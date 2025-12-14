/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_17 = (min(var_17, ((~((-(arr_0 [i_0] [i_1 + 1])))))));
            var_18 = ((((arr_0 [i_1 + 1] [i_1 - 1]) ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_0 [i_1 - 1] [i_1 + 1]))));
        }

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_19 = var_9;
            var_20 = 5062;
        }
        var_21 = var_10;
        var_22 = ((-(((arr_0 [i_0] [i_0]) ? (arr_3 [i_0]) : ((max(var_14, 4740)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((var_5 % (((arr_11 [i_3]) ? 13907412046738238442 : 13907412046738238442))));
        arr_13 [i_3] = ((var_13 ? (0 > 4539332026971313174) : var_11));
        var_23 = (max(var_23, ((((arr_4 [i_3]) ? (arr_5 [i_3] [i_3]) : (arr_4 [i_3]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_24 = (arr_15 [i_4] [i_4]);
        var_25 = (((arr_14 [i_4]) ? (arr_1 [i_4]) : var_8));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (((((((arr_16 [i_5]) ? (((~(arr_10 [i_5])))) : (max(4294967295, -23))))) ? (((((var_10 ? (arr_7 [4] [4]) : (arr_9 [i_5])))) ? ((max((arr_0 [i_5] [i_5]), 1))) : ((var_9 ? var_13 : (arr_0 [i_5] [i_5]))))) : (-2147483647 - 1))))));
        var_27 = arr_18 [i_5] [i_5];
    }
    var_28 |= ((((((var_1 ? var_11 : var_8)))) ? ((var_6 ? ((2147483647 ? 1465626832105283817 : var_6)) : (max(9, var_2)))) : var_16));
    var_29 = (((13907412046738238442 % var_6) ? (((var_0 ? ((var_0 ? var_5 : -300006670)) : var_10))) : (((1 - -105) ? (22 % 10868293263778389441) : (~var_0)))));
    #pragma endscop
}
