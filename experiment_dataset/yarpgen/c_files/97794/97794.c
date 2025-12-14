/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                arr_6 [7] [i_1] [i_1] [i_2] = (arr_3 [i_0] [i_0] [i_2 - 2]);
                var_15 -= ((((93 ? -107 : var_6)) & (arr_3 [i_2 - 1] [i_2 + 1] [i_0])));
            }
            var_16 ^= ((-18 ? -99 : (arr_5 [i_0] [i_0])));
            var_17 = 5703665558723535657;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_10 [i_3] = 18;
            arr_11 [12] [i_0] &= ((93 ? (((arr_8 [1] [1] [i_3]) ? 2740943397035970605 : -23)) : var_8));
            arr_12 [1] [i_3] [i_3] = var_3;
        }
        arr_13 [i_0] [i_0] = (((arr_9 [i_0]) ? (((arr_2 [i_0]) / 196)) : (((var_3 ? (arr_9 [i_0]) : -20673)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 *= var_11;

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_19 += (((arr_17 [i_5]) / ((113 ? 9202314990644869233 : 9202314990644869233))));
            var_20 -= (!((((arr_14 [i_4]) + 2584519310))));
            arr_20 [i_4] [i_4] = 59;
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_21 = (min(var_21, ((((arr_16 [i_6 + 1] [i_6 - 2]) <= (arr_24 [i_4] [i_4] [i_6 + 1]))))));
            var_22 = ((4294967295 ? -96 : (arr_19 [i_4] [i_4])));
        }
        arr_25 [i_4] |= (((-9202314990644869234 + 9223372036854775807) >> ((((3645048024 ? var_3 : (arr_5 [i_4] [i_4]))) - 4235456018))));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_28 [11] [i_4] [11] = ((7242671933857528233 - (arr_19 [i_7] [i_7])));
            arr_29 [i_4] [i_4] [i_4] = ((-9223372036854775794 ? (((-75 > (arr_0 [i_4] [i_7])))) : var_12));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_23 ^= -562964617646307944;

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                arr_35 [i_4] [i_4] [i_4] [i_4] = ((57344 ? ((((arr_14 [i_4]) ? var_3 : 1710447986))) : ((var_2 + (-127 - 1)))));
                var_24 *= (arr_21 [i_4]);
            }
            arr_36 [i_4] = ((~((((arr_23 [10] [10] [10]) > (arr_5 [i_4] [18]))))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        {
                            arr_45 [i_4] [19] = 7;
                            var_25 |= 5670744360413252178;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_50 [i_13] [i_14] = (12775999713296299431 >> var_9);
                        var_26 = ((125 ? (((120 > (arr_30 [i_4] [i_4])))) : ((((arr_42 [i_14] [i_8] [i_8] [i_8]) == (arr_7 [i_14]))))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_53 [i_4] = (((arr_17 [17]) && ((((arr_46 [i_15] [i_4]) ? (arr_51 [i_4]) : 1)))));
            arr_54 [i_4] = (~127);
            arr_55 [i_4] [18] = (((1 ? 1710447986 : 60)));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_27 *= 77;
            var_28 ^= ((8 ^ (arr_30 [i_16] [i_4])));
        }
    }
    #pragma endscop
}
