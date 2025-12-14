/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = (max((arr_2 [i_0] [i_0 - 1]), (((~var_2) ? (~var_1) : ((min(0, var_9)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = min(((min(var_2, 33023))), (max(var_4, (arr_4 [i_0 + 1]))));
                    var_12 = ((~((max((arr_0 [i_2]), (arr_0 [i_1 + 1]))))));
                    arr_10 [i_1] [i_1] = ((var_9 + (((var_2 ? (arr_7 [i_0] [i_1] [11]) : var_6)))));
                    arr_11 [i_0] [i_2] [i_0] [i_2] = 0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_13 = (arr_14 [i_4] [i_4] [0]);
            var_14 = (min(var_14, (((!(arr_13 [i_4]))))));
            var_15 = ((~(arr_14 [i_3] [i_4] [i_4])));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_16 *= ((-((-1 ? 144115188075855871 : var_1))));
                arr_18 [i_5] [i_3] [i_3] = (arr_12 [i_3]);
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_25 [i_7] [i_4] [i_3] [i_4] [i_3] = (!(arr_21 [i_5] [i_5] [i_6 - 1] [i_6]));
                            var_17 = ((arr_14 [i_3] [i_3] [i_3]) ? (arr_20 [i_3] [i_4] [i_5] [i_6] [i_7] [i_7]) : (arr_24 [i_3]));
                        }
                    }
                }
                var_18 = (~10060546477254868959);
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_19 = (arr_13 [i_4]);
                var_20 = (arr_21 [i_3] [1] [i_3] [i_3]);
                arr_28 [i_3] [i_3] [i_3] = ((var_3 + (arr_26 [i_3] [12] [i_3] [i_3])));

                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    arr_31 [i_3] [i_9] = (arr_26 [i_4] [i_9 - 2] [i_9 + 1] [i_9 + 1]);
                    var_21 = var_4;
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_22 = ((~(arr_32 [i_3] [1] [i_8] [i_10])));
                    arr_35 [i_3] [18] [i_8] [i_10] = (arr_13 [i_3]);

                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        arr_39 [i_3] [i_11] [i_3] [9] [i_3] = arr_36 [i_11 + 3] [i_3] [14] [13] [i_3] [i_3];
                        arr_40 [i_11] [i_11] [i_8] [i_10] [i_11] = ((-(((16 && (arr_37 [i_11] [i_3] [14] [14] [i_3]))))));
                    }
                    var_23 = 0;
                }
                for (int i_12 = 4; i_12 < 17;i_12 += 1)
                {
                    arr_43 [i_3] [i_3] [1] [i_3] [i_3] = ((2986218434734301300 ? 1 : 36070));
                    arr_44 [i_3] [17] [1] [i_12 - 3] [i_12] = ((+((var_9 ? (arr_29 [i_3] [i_4]) : var_4))));
                }
            }
            arr_45 [i_3] [i_3] = (arr_16 [i_3] [i_3] [i_3] [i_3]);
        }
        var_24 = ((-(arr_12 [i_3])));
        var_25 = ((~var_10) ? 2 : (arr_24 [i_3]));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    arr_51 [i_3] [i_13] = var_8;

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_26 = -var_7;
                        var_27 = ((~(arr_15 [i_3] [i_13])));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_28 *= ((4 ? 2986218434734301294 : 6168103117473804754));
                        var_29 = ((29466 / ((16885356139095356258 ? (arr_16 [i_3] [i_3] [i_3] [i_3]) : 2986218434734301276))));
                        var_30 -= (arr_46 [1] [i_14]);
                        var_31 = (arr_30 [i_13] [14] [i_3] [14]);
                    }
                    var_32 = (!0);
                    var_33 = (-30640 ? 15460525638975250307 : -26959);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
    {
        var_34 = (min(var_34, (((~(arr_12 [i_17]))))));
        var_35 = ((~(arr_16 [i_17] [15] [i_17] [i_17])));
        arr_60 [i_17] [i_17] = (((arr_27 [i_17] [i_17] [i_17]) ? 1 : (arr_13 [i_17])));
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        arr_63 [i_18] = ((-((~((min(var_8, (arr_62 [i_18]))))))));
        arr_64 [i_18] = ((max((arr_61 [i_18]), (arr_61 [i_18]))));
        arr_65 [i_18] = (arr_61 [i_18]);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                {
                    var_36 = ((-(min(4322321079221322201, 2986218434734301294))));
                    var_37 = (min(var_37, (((!(((1 ? (max(var_2, (arr_61 [i_18]))) : (((min(36051, (arr_71 [i_20])))))))))))));
                    arr_73 [i_18] [i_19] [i_19] [i_19] = ((+(((~-13339) ? (arr_68 [i_18] [i_20]) : ((1 ? 44 : 9944))))));
                    var_38 = (min(var_38, var_2));
                }
            }
        }
    }
    var_39 = var_6;
    var_40 = (min(1, (max(((var_0 ? var_6 : var_2)), var_1))));
    #pragma endscop
}
