/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [4] = (arr_1 [i_2 + 2]);

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_11 = ((~(~var_3)));
                        var_12 = ((((!(arr_5 [i_2] [i_1]))) ? 886387886287426460 : (((((6813992262891317187 > (arr_10 [i_1] [i_2])))) | (((!(arr_10 [14] [i_0]))))))));
                        var_13 = (!40614);
                        var_14 ^= 0;
                        var_15 = ((~(arr_0 [13])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_2 - 1] [i_0] [i_4] = ((((!((!(arr_1 [i_0]))))) ? 65535 : 4));
                        var_16 = (!((((((!(arr_12 [i_4])))) ^ (((var_2 < (arr_14 [i_0] [i_0] [10] [10] [i_4] [i_1]))))))));
                        var_17 = (((((+(max((arr_9 [i_4] [i_4] [i_4] [i_4]), (arr_13 [i_0] [i_1] [i_2] [i_4])))))) ? ((((65529 ? 1807938186 : 12)))) : (((max((arr_3 [7] [i_0]), (arr_0 [0])))))));
                        var_18 = ((+(((arr_12 [i_0]) + (arr_6 [i_2 - 2])))));
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_1] = (arr_2 [i_0]);
                }
            }
        }
    }
    var_19 = ((var_9 || (((var_10 ? ((25948 ? var_3 : -6813992262891317188)) : 41067)))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_20 = (max(var_20, ((((arr_17 [19] [i_5]) | (((arr_17 [i_5] [i_5]) ? (arr_18 [i_5]) : (arr_17 [i_5] [i_5]))))))));
        var_21 = (min(var_21, (arr_17 [i_5] [i_5])));
        arr_19 [i_5] = -1;
    }
    var_22 += ((-((((min(var_5, var_0))) + ((var_0 ? var_2 : var_5))))));

    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_23 = (((arr_5 [i_6] [i_6 + 1]) / (((((18446744073709551615 ? var_10 : (arr_12 [i_6])))) ? -160 : (arr_5 [i_6 + 4] [i_6 + 1])))));
        var_24 = ((((((((-(arr_3 [i_6] [13])))) || ((((arr_13 [i_6] [i_6] [i_6] [i_6]) & (arr_18 [i_6]))))))) % (arr_10 [i_6] [i_6])));
        var_25 = (min(var_25, (~141)));
        var_26 = 7;
        arr_22 [i_6] = (((var_9 % ((min(93, (arr_6 [i_6])))))));
    }
    for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
    {
        var_27 = ((!((((arr_2 [i_7 - 1]) ? 132 : (arr_2 [i_7 + 3]))))));
        var_28 = ((!((((~(arr_13 [i_7 + 4] [i_7 - 1] [i_7] [14])))))));
        var_29 = (((arr_21 [i_7 + 4]) ? (arr_7 [i_7]) : (arr_2 [1])));
    }
    #pragma endscop
}
