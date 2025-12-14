/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max((((((-69 ? 103 : -454127178))) ? ((var_9 ? var_2 : var_6)) : var_18)), ((min(var_9, 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (~14);
        var_22 |= (arr_0 [i_0]);
        var_23 = (max(var_23, ((((arr_1 [i_0] [i_0]) ? 96 : -126)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_24 = (max(var_24, (((var_16 ? var_9 : (arr_4 [8]))))));
        var_25 -= var_0;
        var_26 -= -1;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = var_10;
            var_27 = ((-(arr_3 [i_1] [i_1])));
            var_28 ^= (((~-1133550094717919527) ? 1 : ((~(arr_7 [i_2] [i_1])))));
            var_29 = (var_1 && var_1);
        }
        var_30 += (var_14 >= (!16543));
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_11 [i_3] = var_17;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_31 = (min(var_31, ((-(arr_6 [6] [i_4 + 4] [i_4 + 4])))));
            var_32 = (arr_10 [i_3]);

            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                var_33 = (max(var_33, ((((arr_15 [i_3] [14] [i_5 + 2]) - (arr_15 [i_4] [10] [i_5 + 2]))))));
                var_34 = (max(var_34, (arr_3 [i_3] [12])));
                var_35 = ((arr_6 [i_5] [i_5 - 1] [i_5]) >= var_3);
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_36 -= (~-2449);

                for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_37 = (arr_13 [i_3] [i_3]);
                    var_38 = (((arr_6 [10] [i_4] [10]) >= (~var_11)));
                    arr_21 [i_7 - 1] [i_7 - 1] [i_6] = (~var_5);
                }
                for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_39 = 7242;
                    var_40 = (min(var_40, (~-26)));
                    arr_25 [i_8] [i_6] [i_3] [i_3] = (((-1 + 2147483647) >> ((((var_17 ? (arr_4 [4]) : -21462)) - 96))));
                    var_41 = (min(var_41, (((arr_10 [i_6]) && (~var_10)))));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_42 = (max(var_42, ((~((var_15 ? (arr_12 [i_4]) : 1))))));
                    var_43 = (!13);
                    var_44 -= (~-var_12);
                }
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                var_45 = (min(var_45, ((4294967295 ? -28352 : 16777215))));
                var_46 = ((var_3 ? (arr_26 [i_4 + 2] [13] [13] [13] [i_4] [i_4]) : (arr_23 [i_3] [i_4] [i_3] [i_4 + 3])));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_47 = (max(var_47, (((112 ? 127 : -1992267013967847482)))));
                arr_35 [i_11] [i_11] [i_11] [i_11] = 0;
                var_48 = (-441410888 ^ 3883841996);
                arr_36 [i_3] [i_3] [i_3] [i_3] = (var_16 ? 63 : var_4);
            }
            var_49 ^= ((-var_10 ? 63 : (~var_2)));
        }
        var_50 &= (((((max(1, (arr_17 [i_3] [i_3] [i_3] [i_3]))) ? var_17 : ((max((arr_12 [i_3]), var_15)))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_51 = (min(var_51, var_17));
        var_52 = (max(var_52, 1));
    }
    #pragma endscop
}
