/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_12 = ((((-2217 + 2147483647) << (var_7 - 1401231626))) > (var_9 <= var_11));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] &= (arr_6 [i_1 - 2] [i_1 - 2]);
        var_13 = ((-(((!(arr_4 [i_1] [i_1]))))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((!(((arr_8 [i_2 - 1] [i_2]) || (((arr_8 [i_2] [i_2]) && 1))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_14 += (((((!(!var_8)))) * (((-122 > (80 < var_2))))));
            arr_15 [i_2] [i_2] = (arr_8 [i_2 - 2] [i_3]);
        }
        var_15 = ((var_6 | (((-67 + 2147483647) >> (-81 + 98)))));
    }
    for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_16 = ((~(max((((arr_13 [i_4] [i_4 - 2] [i_4 + 1]) ? (arr_17 [i_4]) : var_11)), (((arr_13 [i_4 - 2] [i_4 - 1] [i_4]) ? var_2 : -1391))))));
        arr_20 [i_4] [21] = (arr_18 [i_4] [i_4 - 1]);
        arr_21 [i_4] = 2217;
    }
    var_17 = var_0;

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_18 = 80;
        var_19 *= ((-((-(2147483647 || -2217)))));
        var_20 -= (arr_9 [i_5]);
    }
    #pragma endscop
}
