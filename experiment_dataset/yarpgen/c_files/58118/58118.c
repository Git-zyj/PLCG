/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((!((min((arr_0 [i_0] [i_0]), 1895954485))))))));
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) <= (arr_0 [i_0] [i_0])))) > (arr_1 [i_0])));
        var_11 = (max((arr_1 [i_0]), (min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [21] [i_1] [i_1] = ((((max(((((arr_7 [i_0] [i_1] [i_1]) >= (arr_5 [i_0] [i_1] [i_1])))), (((arr_7 [i_0] [i_0] [i_1]) ? 0 : (arr_6 [i_1] [18])))))) ? (((((min((arr_7 [i_0] [6] [i_1]), 0))) < (arr_6 [i_1] [i_1])))) : 2147483646));
            var_12 ^= (arr_0 [i_0] [i_0]);
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((~(arr_10 [i_2] [i_2])))) ? ((min(-2147483646, (((arr_9 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2])))))) : 1785065613833577423));
        arr_12 [i_2] = (((arr_9 [i_2] [17]) != (arr_10 [i_2] [i_2])));
        arr_13 [i_2] |= (min((arr_9 [15] [i_2]), (((!(((~(arr_10 [i_2] [i_2])))))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_13 = (arr_17 [i_3]);
        arr_18 [i_3] [i_3] = (((arr_15 [i_3]) ? (((((max(33825, (arr_9 [i_3] [i_3])))) ? 0 : (min(1637186933, 0))))) : 64512));
        var_14 = (arr_17 [1]);
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_22 [i_4] [i_4] = ((min((arr_4 [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4]))));
        arr_23 [i_4] = (arr_1 [i_4]);
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_29 [i_6] = ((((((arr_24 [1]) ? 0 : (arr_0 [i_5] [i_6])))) ? (arr_26 [i_5] [i_6]) : -2691072087));
            arr_30 [i_5] [i_6] = 191;
            arr_31 [i_5] [i_6] = ((((((arr_28 [i_5]) ? (arr_9 [2] [2]) : (arr_5 [i_6] [i_6] [i_6])))) ? 1637186949 : (arr_15 [i_6])));
        }
        arr_32 [i_5] [i_5] |= 2691072087;
        var_15 = min(((max((((arr_24 [i_5]) ? 10430 : (arr_6 [i_5] [i_5]))), ((~(arr_7 [i_5] [i_5] [i_5])))))), (((arr_14 [i_5]) / (arr_10 [i_5] [i_5]))));
    }
    var_16 = ((((min(2691072087, (var_10 & var_7)))) ? (-1637186934 && var_6) : var_1));
    var_17 = -843489683;
    var_18 = ((var_1 ? var_2 : (max(64512, (~var_1)))));
    #pragma endscop
}
