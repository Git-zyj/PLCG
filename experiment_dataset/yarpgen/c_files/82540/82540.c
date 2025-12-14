/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (((((-((var_3 | (arr_1 [i_0] [19])))))) ? 13476 : (min(((12 ? var_8 : 124)), (min(var_7, (arr_0 [i_0] [i_0])))))));
        var_13 = (min(var_13, -121));
        var_14 = (max(var_14, ((max(((-18192 ? (((max(121, var_9)))) : var_8)), ((((arr_0 [i_0] [i_0]) || var_1))))))));
        var_15 = (min(var_15, (((((arr_1 [i_0] [7]) ? (min((arr_0 [19] [3]), 135)) : var_7))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_16 = (arr_1 [5] [10]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_17 += (arr_5 [i_1] [i_2] [2]);
            arr_6 [i_1] = ((((127 ? var_2 : 121)) < -var_8));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_18 = -127;
            var_19 = var_7;
            var_20 = ((-(arr_0 [i_1] [4])));
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            var_21 = (~var_6);

            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                var_22 &= var_10;
                var_23 = (min(var_23, (((var_1 ? var_10 : var_4)))));
                var_24 = (((~var_10) ? 1 : var_2));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_25 = (arr_11 [i_1] [i_4]);
                var_26 = ((-(((arr_10 [1] [12] [i_1]) ? var_8 : var_4))));
            }
        }
        var_27 = ((-104 < (-1517630035 || -1)));
        var_28 -= (arr_2 [i_1]);
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_29 -= (((-18371 ? var_0 : -125)));
        arr_21 [i_7] = (((((arr_0 [i_7] [1]) ? var_11 : var_1)) << (-1296132599 + 1296132601)));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_30 |= ((-(((((max(135, (arr_22 [i_8])))) >= 1517630018)))));
        var_31 = (min(var_31, ((-62431632 - ((-560047586 >> ((var_1 >> (((arr_23 [23]) + 28))))))))));
    }
    #pragma endscop
}
