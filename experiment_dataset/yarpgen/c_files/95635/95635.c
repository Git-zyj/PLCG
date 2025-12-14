/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_19 = (min((arr_1 [i_0]), var_5));
        var_20 = ((-(min(var_3, var_4))));
        arr_2 [i_0] = -109;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] = (((((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_12)) ^ ((var_11 & (arr_1 [i_0])))));
            var_21 = (arr_1 [i_1]);
            var_22 = (arr_4 [i_1] [i_1 + 1] [i_1 + 1]);
            arr_6 [i_0] [i_0] = (-109 * 18446744073709551607);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_3] [i_0] &= (arr_10 [i_0 - 2]);
                        arr_12 [i_2] [i_2] [i_2] &= (22736 - (arr_8 [i_3 - 2] [i_3 - 2]));
                        var_23 = ((22736 ? (arr_7 [i_1 + 1] [i_1]) : (arr_7 [i_1 - 2] [9])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_16 [i_4] = ((((max(((var_12 ? (arr_3 [i_4]) : var_14)), var_14))) || ((!(((arr_3 [i_0]) || var_7))))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_24 &= (max(((~(42809 / 2065141884688119816))), ((((var_10 & var_0) == (arr_25 [i_5 - 1]))))));
                            var_25 = (1 | 16381602189021431801);
                            var_26 = 11464;
                            var_27 = (arr_0 [9] [i_4]);
                            arr_26 [i_0] [i_7] [i_5] [i_5] [i_6] [i_5] = ((109 ? -10 : 113));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_28 = var_17;
            var_29 = max(var_3, (max((((arr_10 [i_0]) ? 16381602189021431776 : var_2)), ((var_15 / (arr_24 [i_8] [i_0] [i_8]))))));
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_30 = (min((arr_23 [9] [9] [17] [i_12] [i_12]), ((var_2 ? (arr_24 [i_10] [i_10] [i_10]) : ((~(arr_15 [i_12])))))));
                        var_31 = (max((((arr_4 [i_10] [i_10] [i_9]) % var_16)), (((-117 ? 65534 : 6)))));
                        var_32 = (((arr_3 [i_12]) % (((((var_16 ? var_13 : 2824651578)))))));
                    }
                }
            }
        }
        var_33 = (max((((((250 ? -126 : (arr_32 [i_9] [i_9])))) ? (((var_11 ? (arr_27 [i_9] [i_9] [i_9]) : (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9])))) : (((arr_36 [8] [5] [i_9] [i_9]) ^ 8)))), (arr_21 [i_9] [1] [i_9] [i_9])));
        var_34 = var_3;
    }

    /* vectorizable */
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {

        for (int i_14 = 2; i_14 < 17;i_14 += 1)
        {
            arr_44 [i_13 + 2] = (25 == 32493);
            var_35 -= ((arr_7 [i_13 + 1] [i_14 + 1]) == (arr_7 [i_13 + 1] [i_14 - 2]));
        }
        var_36 = ((2065141884688119816 / ((-(arr_14 [i_13])))));
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 18;i_17 += 1)
            {
                {
                    var_37 ^= var_1;

                    /* vectorizable */
                    for (int i_18 = 3; i_18 < 20;i_18 += 1)
                    {
                        var_38 = (arr_46 [6]);
                        var_39 = (17 * 17592186044415);
                        var_40 = (max(var_40, (7680 / 1631102372)));
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        var_41 *= (((((65525 ? (arr_56 [i_17 - 2] [i_17 + 1] [i_17] [i_17]) : (arr_56 [i_17 + 3] [i_17 - 2] [i_17] [i_17 - 2])))) / (((arr_49 [i_15] [i_17 - 1] [i_15]) / ((13 << (233 - 171)))))));
                        arr_60 [i_17] [i_17] [16] [i_19] [i_17] = (arr_58 [i_15] [i_17] [21]);
                        arr_61 [i_15] [i_15] [i_15] = min(((11955 ? -97 : -109)), var_11);
                    }
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        arr_66 [i_17] [i_17] [i_17] [i_17] = var_7;

                        for (int i_21 = 1; i_21 < 19;i_21 += 1)
                        {
                            var_42 = 222;
                            arr_69 [i_15] [i_15] [i_15] [i_21] = ((((max(-1531005713, (arr_65 [i_15] [i_15] [i_17] [i_17] [i_15] [i_15])))) ? (-17646 / 48) : ((max(-120, -117)))));
                        }
                    }
                    var_43 = (max(var_43, (((-(min(((var_6 ? 17 : 1531005705)), var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
