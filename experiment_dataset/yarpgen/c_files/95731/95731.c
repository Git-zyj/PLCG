/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~((((max(var_0, var_5))) ? (2454677737 == 14306609978010350861) : 1840289580)));
    var_20 = (((((((var_10 + 2147483647) >> (var_9 - 38515)))) ? (((var_2 ? 2454677737 : 1840289553))) : 0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : 16376));
        var_22 = 64733;
        var_23 = 54760;
    }
    var_24 *= var_11;

    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] [i_1 + 2] = ((1840289575 ? (arr_3 [i_1 + 1] [i_1 + 1]) : (((arr_3 [i_1] [i_1]) & (0 | 4294950900)))));
        var_25 *= ((!(arr_3 [i_1 + 1] [i_1 + 1])));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (((var_9 ? (arr_3 [i_1 - 1] [i_2 + 1]) : (arr_7 [i_1 + 1] [0] [i_2 - 1]))))));
            var_27 = (!1840289551);
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_28 = (arr_7 [i_1] [i_3] [i_3]);
            arr_10 [i_1 + 2] [i_1] [i_1] = -1840289553;
            var_29 = 2454677746;
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_30 = var_2;
            arr_15 [i_1] [i_1] = var_6;
            arr_16 [11] = (min((max(var_2, ((var_1 ? var_8 : 1031076574)))), (arr_7 [i_4 - 1] [i_4] [i_4])));
        }
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            var_31 *= (max((min((-116 >= 29), ((-(arr_8 [i_5 - 3]))))), 62951));
            arr_19 [i_5 - 3] [i_5] [10] = -20;
            var_32 = (((((700489211210979594 ? (arr_18 [i_1 - 1] [i_1 + 2] [i_5 - 1]) : (arr_18 [i_1 + 1] [i_1 + 2] [i_5 - 1])))) ? (((arr_3 [i_5 - 3] [i_1 - 1]) ? (arr_3 [i_5 + 1] [i_1 + 1]) : 2331282263)) : ((var_1 ? -585736633 : 2454677742))));
            arr_20 [i_5] = ((127 ? (10776 != 4127636882309320208) : (arr_18 [i_5 - 3] [i_1] [10])));
            var_33 -= (min(-0, (arr_14 [i_1 + 1] [i_1 + 1])));
        }
    }
    #pragma endscop
}
