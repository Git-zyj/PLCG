/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(var_10, ((min((((var_7 ^ (arr_2 [i_0])))), ((13137201036108963788 ? 459148018249925626 : 17)))))));
        var_18 = (((((!(arr_2 [i_0])))) | ((-(arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 10;
        var_19 = (max(var_19, (-11106 == -24009)));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            var_20 = (min(var_20, ((min(((233 << (((((arr_2 [i_2]) + 13633)) - 5)))), (211 + 1))))));
            arr_13 [3] = ((((((arr_1 [1] [i_3 - 1]) ? (arr_1 [i_3 + 1] [i_3 - 1]) : 10))) <= (min((max(-459148018249925626, 120)), ((-11096 ? -459148018249925625 : 11096))))));
            arr_14 [i_2] [13] [i_3 - 1] = ((var_7 != (((var_10 ^ 1) + (min((arr_5 [i_2]), var_16))))));
            var_21 = ((((((((arr_4 [i_3 - 2] [i_2]) != (arr_1 [i_2] [1])))) == (~-171343218))) ? (((~var_16) ? var_17 : (((arr_10 [7]) ? (arr_2 [i_2]) : 28)))) : (((((max(-1577060967, 0))) >= var_2)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_18 [i_2] [i_2] [i_4] = ((14781092340350927857 ? (arr_15 [i_2]) : (arr_15 [i_2])));
            var_22 = (max(var_22, ((((-127 - 1) ? 22 : 11116)))));
            var_23 = (arr_12 [7] [i_4] [i_4]);
        }
        arr_19 [6] = (min(((max((arr_6 [i_2]), 1))), (((arr_6 [i_2]) ? 1577060964 : var_5))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_24 += arr_1 [9] [i_5];
        arr_23 [i_5] = (((137 <= 4) ? 126 : (~0)));
        arr_24 [i_5] = (arr_0 [i_5] [i_5]);
    }
    var_25 = (((((~((var_9 ? var_5 : var_7))))) < ((var_10 ? (max(var_13, var_4)) : (((252 ? var_17 : 0)))))));
    #pragma endscop
}
