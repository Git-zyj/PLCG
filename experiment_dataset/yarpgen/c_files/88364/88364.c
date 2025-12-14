/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = var_6;
        arr_2 [i_0] = (max(((((arr_1 [i_0]) && 0))), var_9));
        var_11 += (((min((arr_0 [i_0]), (min(-6391250223321200375, (arr_0 [i_0]))))) - (~65525)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (+(((var_5 - var_5) ? ((-(arr_3 [i_1]))) : (arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = (((var_1 ? 2801212915 : var_9)));
        var_13 = ((!(((-(~var_9))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_14 = (((((((min(7, var_4))) << (((min(-127, 3188646995)) - 3188646984))))) ? (((((min(1, var_2))) ^ (arr_0 [i_2])))) : (max(127, 904185118))));
        var_15 = (max(var_15, 4294963200));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_16 -= 0;
        var_17 -= ((67108863 ? (arr_8 [i_3]) : (arr_8 [i_3])));
        var_18 = ((~(var_2 & 0)));
        var_19 = (!1106320320);
        arr_12 [i_3] = 3;
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_20 -= ((((max((arr_14 [i_4]), 4533))) ? (~-var_5) : (arr_0 [i_4 + 3])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_21 = ((-((((arr_8 [i_4]) < (arr_0 [i_5]))))));
            var_22 -= ((56245 || (arr_6 [i_4 + 1] [i_4 + 3])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        var_23 = (arr_18 [i_4]);
                        arr_27 [i_4] [i_6] [i_6] [i_6] [i_4] [i_8 + 1] = var_4;
                    }
                }
            }
            var_24 = (((~34) > ((904185137 << (var_8 - 29191)))));
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_36 [i_11] [i_4] [i_9 - 1] [i_9 - 3] [i_4] [i_4] = ((-2 ? var_8 : 7047));
                            arr_37 [i_4] [i_6] [i_4] [15] [i_11] = var_5;
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            arr_40 [i_4] = ((!((min((((4 ? 0 : 511))), (max(904185149, (arr_25 [i_4] [i_4 + 2] [i_4 + 1] [i_12] [i_12]))))))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_25 += ((var_7 ? (arr_23 [i_4 + 2] [i_12] [i_13] [i_13]) : var_1));
                var_26 = (arr_35 [i_4] [i_12] [i_12]);
                arr_43 [1] [i_12] [i_12] [i_4] = 1;
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_27 = (!((max(((-(arr_4 [i_4 + 3] [i_14]))), 1))));
                arr_46 [i_4] [i_4] = (--0);
                var_28 = (max(var_28, 1));
            }
            for (int i_15 = 1; i_15 < 14;i_15 += 1)
            {
                arr_51 [i_4 + 2] [i_12] [i_4] = 1;
                var_29 = 3988952340;
                var_30 ^= ((35673 ? 13 : 0));
            }
            var_31 = (max(((~(((arr_33 [12] [i_12] [i_12] [i_12] [i_12]) ? 227 : var_9)))), (((-4515 + 2147483647) >> (((((arr_48 [i_4] [i_12] [i_4]) ? -4537 : 1)) + 4558))))));
            var_32 = 1493754397;
            var_33 += ((((min(227, 65535))) && ((((arr_21 [i_4 - 1]) ? (arr_21 [i_4 + 2]) : (arr_21 [i_4 - 1]))))));
        }
        for (int i_16 = 3; i_16 < 16;i_16 += 1)
        {
            var_34 = (arr_26 [i_4] [i_4]);
            var_35 = (max(var_35, (((1 + ((~(~var_7))))))));
            var_36 += ((-(!575911407)));
            var_37 = (max((((!(arr_28 [i_4] [i_4 - 1])))), (arr_47 [i_4] [i_4 + 3] [i_4])));
        }
        var_38 = (((((((3 ? var_8 : 6391250223321200378))) ? (((arr_41 [i_4 + 2] [i_4 + 2] [1]) << (65 - 46))) : (~var_9)))) ? 1493754380 : (((((~var_0) >= ((13300 ? 2801212910 : var_3)))))));
        var_39 = (min(var_39, ((max(1493754386, 4556)))));
    }
    for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
    {
        var_40 = ((~(max(((11937458336789594155 * (arr_49 [i_17 + 2] [10] [4] [i_17]))), var_7))));
        var_41 = ((7 ? 52229 : 2892119692));
        var_42 += ((~((2211664807 ? ((max(var_2, 1))) : (arr_42 [i_17] [2])))));
        var_43 = (((max((arr_4 [i_17] [i_17]), 62)) > (((2801212919 - var_8) ? var_5 : (((max(var_1, var_8))))))));
    }
    #pragma endscop
}
