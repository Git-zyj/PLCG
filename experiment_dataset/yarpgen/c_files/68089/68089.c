/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_10 = (max((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))), (arr_1 [i_0 + 2])));
        var_11 = ((-2147483647 <= (((arr_1 [i_0 + 1]) - (-2147483647 - 1)))));
        var_12 = ((2147483647 * (((2581973860 == (arr_0 [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (min((arr_1 [i_1]), (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        var_13 += (((max((arr_4 [i_1]), (arr_4 [i_1])))) != ((min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_14 = ((!(-2147483647 - 1)));
            var_15 = ((-(((((arr_2 [i_2]) + (arr_4 [i_2]))) - ((1 + (arr_3 [i_2] [i_2])))))));
            arr_11 [i_2] [i_2] = (((arr_7 [i_3 + 1] [i_3 + 2]) * (((-127 - 1) / (arr_7 [i_3 - 2] [i_3 + 1])))));
        }

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_18 [i_4] [i_4] [i_5] = ((arr_13 [i_4] [i_4] [i_4]) <= (arr_9 [i_4 + 2] [i_4 + 1]));
                var_16 &= (((arr_9 [i_4 + 1] [i_4 + 1]) ? (arr_9 [i_4 + 1] [i_4 + 1]) : 2147483621));
                var_17 = 0;
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                arr_21 [i_2] [i_2] [i_2] |= (max((max(6305597377275508812, 524280)), (((1490 ? ((-2 ? (arr_0 [i_2]) : 14)) : (((min(var_0, (arr_6 [i_2]))))))))));
                arr_22 [i_2] [i_2] [i_4 + 2] [i_4] = (arr_13 [i_4] [i_4] [i_4]);
                var_18 = ((6 >> ((((arr_19 [i_4] [i_4] [i_4]) || 9)))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_27 [i_4] [i_4] [i_4] = (((arr_24 [i_7] [i_7] [i_7]) ? (((var_3 ? ((var_6 & (arr_4 [i_2]))) : (max(2, var_5))))) : ((((max(-20, -9149))) ? (min((arr_9 [12] [i_4]), (arr_16 [i_7] [6] [6]))) : ((7 ? (arr_10 [i_2]) : (arr_8 [i_2])))))));
                var_19 = (arr_15 [i_2] [i_7]);
            }
            var_20 = ((((max(1023, (((9250 ? 256 : var_0)))))) >= ((6 ? (arr_2 [i_4]) : var_9))));
        }
        var_21 = var_9;
        arr_28 [8] = (((arr_1 [i_2]) + (max(((((arr_23 [i_2] [i_2] [i_2] [i_2]) - 1))), 1275126105090095159))));
        var_22 = (9705910142394749062 | 6);
    }
    var_23 = ((var_4 ? var_3 : ((min(var_4, ((-8 ? var_0 : var_7)))))));
    #pragma endscop
}
