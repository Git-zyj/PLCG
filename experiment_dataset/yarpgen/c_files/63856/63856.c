/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(22928, 42623);
    var_20 = (min(var_20, ((((((((var_4 ? 0 : 3121))) ? ((22941 ? 42571 : 146180968408599782)) : 2739370425)) % (((34843 ? ((max(var_0, var_3))) : var_5))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (((((19639 ? var_1 : (arr_0 [i_0] [i_0])))) ? 89 : (((!(-32767 - 1))))));
        var_22 ^= (((arr_1 [4]) ? (arr_1 [4]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [11] = 2071378149639255932;
        var_23 -= 34436;
        arr_6 [i_1] &= 173;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            var_24 = (max(var_24, (((var_18 ? var_12 : (arr_8 [i_3 - 2]))))));
            arr_12 [i_3 + 1] [21] [18] = ((-7410 ? ((60993 ? var_11 : 6)) : var_7));
            arr_13 [i_2] [i_2] = var_11;
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_20 [i_2] [i_4] [i_5] = (((var_8 != 42595) ? (arr_7 [i_2] [i_5]) : ((var_4 ? 2071378149639255932 : var_10))));
                arr_21 [i_2] [i_2] = (arr_8 [11]);
            }
            var_25 *= var_3;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_24 [i_6] [i_6] = ((var_18 + (var_16 * var_13)));
            arr_25 [i_6] [i_6] [i_6] = (((var_8 / var_4) ? (arr_8 [i_2]) : var_5));
            var_26 = -2071378149639255932;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_28 [i_7] = var_14;
            arr_29 [i_7] [i_7] [i_7] = ((var_16 ? (arr_16 [i_2] [i_2] [i_2]) : (arr_23 [i_7])));
            arr_30 [i_7] [i_7] [i_7] = (((165 & var_11) > 42571));
        }
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            arr_34 [14] [i_8] [24] = 31100;
            var_27 = var_9;
        }
        var_28 = (((arr_23 [24]) ? var_16 : (arr_16 [i_2] [i_2] [i_2])));
        var_29 = (((arr_8 [i_2]) ? var_11 : 3442470488));
    }
    #pragma endscop
}
