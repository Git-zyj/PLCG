/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = 18446744073709551615;
                var_14 = 1073741696;
            }
        }
    }
    var_15 = var_8;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_16 = 11388828449374082937;

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_17 = (arr_6 [i_2 + 1]);
            arr_12 [1] [11] = (~1073741694);
            arr_13 [16] [i_3] [i_2 + 1] &= arr_9 [i_2 - 1] [i_3 + 1] [i_3 - 1];
            var_18 = ((((11388828449374082937 << (((arr_7 [i_2 - 1]) - 63358)))) != (((((arr_9 [i_2 + 1] [0] [15]) || (arr_6 [i_3 + 1])))))));
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
            {
                arr_21 [i_2] [12] [i_2] [i_2 + 1] = 36342;
                arr_22 [4] [i_2 - 1] [i_2 - 1] = 20526;
                var_19 = (min(var_19, 2147483647));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_29 [i_2] [i_6] [i_5] [i_4] [i_4] [i_2] [i_2] = arr_16 [i_4] [i_4 + 1] [i_4 - 1];
                            arr_30 [i_2 + 1] [i_2 + 1] [i_2 + 1] = -8293770439866097978;
                            var_20 = (arr_14 [16] [i_7]);
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
            {
                arr_34 [i_2] = -12643549120075250200;
                var_21 = (max(var_21, (arr_26 [i_8 - 1] [i_2 - 1] [12] [i_2 - 1] [i_2])));
                var_22 *= 18837;
                arr_35 [i_2] [i_4] [i_8] = (((arr_14 [i_2] [18]) != (arr_26 [i_2] [i_2] [i_4 + 1] [i_8 + 4] [i_2])));
            }
            for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
            {
                var_23 *= -14452;
                arr_39 [i_9] [6] [i_4] [i_2] = ((!((8173787667877169151 != (arr_11 [i_2] [i_4 + 2])))));
            }
            var_24 += (arr_38 [i_2 - 1] [i_2 - 1] [i_4 + 3] [i_4]);
        }
        arr_40 [15] [i_2 + 1] = -2147483647;
        var_25 += (arr_18 [i_2] [i_2 - 1] [20]);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 13;i_13 += 1)
                {
                    {
                        var_26 ^= (~31790);
                        var_27 ^= (((arr_33 [i_13 - 4] [i_10 + 2]) * (arr_33 [i_11] [i_10 + 2])));
                        var_28 += (~-32752);
                    }
                }
            }
        }
        arr_51 [i_10 - 1] = (arr_44 [i_10] [i_10 - 1] [i_10 + 1]);
        arr_52 [i_10] = ((~(arr_11 [i_10 + 1] [i_10 + 1])));
        arr_53 [i_10] = (-2831268955628650177 & -971982439);
    }
    for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_29 = (min(var_29, (((-(arr_6 [18]))))));

        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            arr_60 [i_14 - 1] [i_14] = min((((!(arr_25 [i_14 - 1] [i_14 + 2])))), (arr_41 [i_14]));
            var_30 = (!3351056266307200142);
        }
        for (int i_16 = 4; i_16 < 13;i_16 += 1) /* same iter space */
        {
            var_31 = (max(var_31, (arr_17 [6] [i_16] [i_14 + 2])));
            arr_63 [i_14] [i_16 + 1] = (min(20539, (min(1353660849, (arr_32 [i_14 + 2] [i_16 + 1])))));
        }
        /* vectorizable */
        for (int i_17 = 4; i_17 < 13;i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_18 = 3; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 3; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 13;i_20 += 1)
                    {
                        {
                            var_32 += 9;
                            arr_76 [i_14 + 1] [i_17] [i_18 - 1] [i_14] [i_14] = (((arr_44 [0] [2] [2]) >= ((((arr_61 [0]) != (arr_6 [i_20]))))));
                        }
                    }
                }
            }
            var_33 = (min(var_33, (((!(arr_10 [i_14 - 1] [i_14 - 1] [i_14 - 1]))))));
            var_34 = (max(var_34, (arr_17 [i_14] [i_17 + 1] [i_17 + 1])));
        }
    }
    var_35 = (max(-var_1, -2147483647));
    #pragma endscop
}
