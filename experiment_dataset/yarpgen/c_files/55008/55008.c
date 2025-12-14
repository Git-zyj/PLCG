/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 += var_11;
        arr_2 [i_0] = (((((var_3 ? 15254300202449228417 : ((-105 ? var_11 : var_3))))) ^ (max((1801942520 & var_9), 65519))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_13 = (min(var_13, (((var_5 ? 1 : var_5)))));
        var_14 = ((var_11 ? var_9 : (arr_3 [i_1 + 3] [i_1 + 1])));
        var_15 ^= (arr_3 [i_1 + 2] [i_1 + 2]);
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_16 = (max(var_16, (((((var_10 ? var_10 : (arr_7 [1]))) & var_5)))));
        arr_8 [i_2] = ((((((var_2 + 2147483647) >> (var_7 - 95)))) % -17));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = ((205 >> (var_6 - 21396)));
        var_18 = var_0;
        var_19 |= (~var_7);
        arr_11 [i_3] = (((arr_6 [i_3]) ? var_4 : var_8));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_20 *= 1;
        var_21 = (min(var_21, (((28223 ? ((((~1) ? (!var_0) : var_3))) : (((arr_7 [i_4 - 1]) ? (min(var_10, (arr_6 [4]))) : (43 / var_2))))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_22 = (var_6 || var_9);
        var_23 = var_1;
        var_24 = (min(var_24, ((((((var_2 / (arr_17 [i_5])))) ? (arr_17 [i_5]) : (((min(var_10, (arr_16 [i_5]))))))))));
        var_25 = (min(var_25, ((((arr_16 [i_5]) ? var_6 : (((!(arr_15 [i_5])))))))));
    }
    var_26 = var_1;
    #pragma endscop
}
