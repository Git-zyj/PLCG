/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(((((arr_4 [i_1] [i_1] [i_0]) || var_2))), (((min(var_11, 1711535205)) >> (((~var_7) - 1389))))));
                var_15 = ((!(((2583432090 ? ((-(arr_3 [9] [i_1] [1]))) : (arr_5 [i_1] [i_0]))))));
                arr_6 [i_0] [6] = max((((2308256955 <= (arr_2 [i_1])))), (((((arr_4 [i_0] [i_0] [i_1]) + 2147483647)) << (1809989290 - 1809989290))));
                var_16 = ((((max(0, var_9))) ? 4194304 : (~0)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_5] [i_3] [i_2] = (-((+(((arr_17 [0] [0] [i_5] [i_5] [i_6] [3]) % var_1)))));
                                var_17 = (min(var_17, var_4));
                            }
                        }
                    }
                }
                arr_22 [i_3] [i_2] = (((var_10 ^ var_6) | var_8));
                var_18 += (max(((-(arr_12 [i_3 + 2]))), -1851));
                var_19 = (arr_3 [i_2] [i_2] [10]);
            }
        }
    }

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_20 = (((((arr_24 [i_7] [0]) + (arr_24 [i_7] [i_7])))) ? (((1128722971 >> (-68804029 + 68804034)))) : var_12);
        arr_25 [i_7] &= var_3;
        var_21 = (max(var_21, ((min((max((min(2308256955, 1711535205)), (arr_23 [i_7]))), var_0)))));
        arr_26 [i_7] = (max((((arr_24 [i_7] [i_7]) ? var_2 : (arr_24 [i_7] [i_7]))), (max(var_11, (arr_24 [i_7] [i_7])))));
    }
    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        var_22 = (-1096703102 ? (((var_7 + 2147483647) >> (((arr_23 [i_8 + 3]) - 3633907461)))) : (arr_29 [i_8 + 2]));
        var_23 = var_11;
        arr_31 [i_8 + 2] = 0;
        var_24 = ((~((((arr_5 [i_8 - 3] [i_8 + 1]) != (-2147483647 - 1))))));
        arr_32 [i_8] = (((912017579 == -68804033) ? (arr_2 [i_8 - 1]) : 2583432085));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (((!(((~(max(1023, (arr_2 [i_9])))))))))));

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_26 = arr_5 [i_9] [i_10];
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_27 = (min(var_27, var_12));
                        var_28 = -14115;
                    }
                }
            }
            var_29 = 1711535205;
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            arr_46 [i_9] [i_13] = (((((arr_33 [i_9]) ? (((arr_39 [2] [i_13] [2]) >> (((arr_43 [i_13] [4] [4] [6]) - 3984663341)))) : var_5))) ? ((min((min(19243, 8192)), (2841253658 > 396372315)))) : -1884083202);
            arr_47 [i_9] = ((((min(var_4, 1134756718))) % 3984758317));
        }
        var_30 = (min((((((max(var_12, (arr_33 [i_9])))) ? (max(var_0, (arr_36 [i_9]))) : (arr_40 [2])))), (((((arr_29 [i_9]) ? var_9 : (arr_0 [2]))) << (((~134217727) - 4160749548))))));
        arr_48 [i_9] = (var_2 - (((arr_0 [i_9]) ? var_5 : (((-1 <= (arr_0 [i_9])))))));
        var_31 = (((arr_28 [i_9]) ? ((var_7 % (arr_5 [i_9] [6]))) : (((min(var_11, 6)) / 1169910723))));
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] [i_14] = (max((((var_1 || (arr_24 [11] [1])))), (((~var_5) ? (min(var_9, (arr_36 [i_14]))) : ((((var_11 + 2147483647) << (var_9 - 584252394))))))));
        var_32 = (((arr_28 [i_14]) >> (var_11 + 184793492)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_58 [i_14] [i_14] [i_14] = (arr_54 [i_14] [i_14]);
                        var_33 = (max(var_33, (((var_8 | (arr_24 [i_14] [i_15]))))));
                        var_34 = (max(var_34, (((461632216 ? 3291142371 : -870724112)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
