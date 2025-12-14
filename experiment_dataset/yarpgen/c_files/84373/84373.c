/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = ((((var_8 ? (arr_0 [i_0]) : (arr_1 [i_0]))) ^ ((((!(arr_0 [i_0])))))));
        var_11 = var_2;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_12 ^= (max(var_8, (~var_9)));
        var_13 = (((((var_0 | (var_6 <= var_6)))) > (min(1, 96))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    var_14 *= ((~((-(arr_7 [i_4 - 1] [i_4 - 2] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_15 -= -1;
                                var_16 = (max(var_16, var_6));
                                arr_15 [15] [i_3] [i_4] [i_5] [i_4] [i_3] [i_3] = (arr_7 [i_2] [i_2] [i_2]);
                            }
                        }
                    }
                    var_17 = (((((180277983 & (arr_10 [i_2 + 2] [i_3 + 1])))) ? (arr_10 [i_2 - 1] [i_3 - 1]) : ((~(arr_10 [i_2 + 1] [i_3 - 2])))));
                }
            }
        }
        var_18 = (min((((!(arr_4 [i_2 - 1])))), (~597906447)));
        var_19 = (min(var_19, ((min((((-30829 ? 96 : -1994088654))), var_2)))));

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_20 = 41980;
                            arr_27 [i_2] [i_9] [i_7] [i_7] [i_2] = ((((max(((max(31340, (arr_6 [i_7])))), var_2))) ? ((((arr_24 [i_2] [6] [i_8] [i_9] [3]) - (arr_22 [i_9] [i_8])))) : (min(var_9, -var_2))));
                            var_21 = 4174793418;
                        }
                    }
                }
            }
            var_22 += (arr_21 [i_2] [i_2] [i_7] [7]);
            arr_28 [i_2] = (max((((1 >= (arr_13 [i_2 + 2] [i_2 + 2])))), ((((((arr_20 [11] [i_2] [11]) ? 118 : 39992157))) ? var_5 : (((min(var_0, 255))))))));
            var_23 = var_1;
        }
        arr_29 [4] [12] = (var_3 >= var_0);
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {

        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            var_24 ^= (arr_31 [16]);
            var_25 = 4490;

            for (int i_13 = 4; i_13 < 22;i_13 += 1)
            {
                var_26 = ((+((max((arr_33 [i_11]), ((max((arr_32 [i_13] [i_12] [i_11]), (arr_32 [22] [i_12] [i_13])))))))));
                arr_36 [i_11] [16] [i_11] [16] |= ((~((~(-118 || 34213)))));
                var_27 = (!1);
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            arr_39 [i_11] [i_11] = (!-124);
            var_28 = ((~(arr_31 [i_11])));
            var_29 = 82;
            var_30 = (min(var_30, (arr_30 [i_11])));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        {
                            arr_50 [i_11] [i_11] = ((!(arr_49 [i_11] [8] [i_17 + 1] [i_17])));
                            var_31 = (!122);
                            arr_51 [i_11] [0] [0] [i_11] [16] [0] [i_18] &= ((!(arr_34 [i_11] [7])));
                        }
                    }
                }
            }
            var_32 = (((2129644112 | 61045) == ((1 ? (arr_34 [i_11] [i_11]) : (arr_41 [i_11] [i_15])))));
        }
        for (int i_19 = 1; i_19 < 20;i_19 += 1)
        {

            /* vectorizable */
            for (int i_20 = 1; i_20 < 22;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 1; i_21 < 21;i_21 += 1)
                {
                    var_33 &= var_5;
                    var_34 = (65535 > 4294967293);
                }
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    var_35 = ((123 + (arr_32 [i_22] [i_20] [i_19])));
                    var_36 = (64 - -119);
                    var_37 ^= (arr_37 [6] [12]);
                    var_38 = (min(var_38, (((-(arr_64 [22] [i_20 + 1] [i_20 - 1]))))));
                }
                arr_65 [i_11] [i_19] [i_11] [i_11] = (34196 || 45611);
                var_39 = (min(var_39, -123));
                var_40 = (((arr_37 [i_11] [i_11]) >> (var_9 + 11326)));
            }
            for (int i_23 = 1; i_23 < 22;i_23 += 1) /* same iter space */
            {
                var_41 = ((-(((arr_60 [i_19 - 1]) ? (arr_60 [i_19 + 3]) : 117))));
                var_42 = (min(var_42, ((max((((+(((arr_46 [i_11]) / (arr_63 [i_11] [3] [i_19] [i_23])))))), ((var_0 ? -3071828816567941682 : ((4294967293 ? 2 : 10286061521788999582)))))))));
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 23;i_25 += 1)
                {
                    {
                        var_43 = ((~(((arr_35 [i_24] [i_19] [i_19 + 2]) ? ((((arr_71 [i_25] [i_24] [i_19] [i_11]) && 63))) : (~20328)))));
                        arr_74 [i_11] [i_11] [10] [i_11] [i_11] = (~var_3);
                    }
                }
            }
        }
        var_44 = (((~var_3) ? 1 : ((min(1, var_2)))));
        var_45 = (max((arr_53 [i_11]), ((-(arr_53 [i_11])))));
    }
    var_46 = (((((max(var_8, var_3)) ? var_8 : var_6))));
    var_47 = (max(var_47, (~var_5)));
    var_48 = 6545;
    var_49 = (max(var_49, (((var_1 ? (((var_5 == (-41 & var_2)))) : var_3)))));
    #pragma endscop
}
