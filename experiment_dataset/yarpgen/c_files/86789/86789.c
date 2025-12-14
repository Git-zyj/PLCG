/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = max((min(((max(25424, -25425))), 8842769342471229933)), var_8);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_12 &= ((-3345611515164157156 ? 25430 : (arr_6 [i_2] [i_2])));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [7] = ((~(!var_4)));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_13 = ((var_2 ? (4275240646494142079 != 65535) : ((~(arr_17 [i_0] [i_1] [i_2] [i_3] [i_5])))));
                            var_14 += ((!(arr_10 [i_0] [i_2])));
                            arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_2] [3]);
                            var_15 = (!-29290);
                            var_16 = (min(var_16, -2469));
                        }
                        var_17 = ((!(arr_16 [i_3] [i_3] [i_3] [7] [i_0] [i_0] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_18 = (min((((!7127665184145832175) ? 25424 : 37241)), (arr_4 [2] [i_0 + 2])));

                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_19 = ((-((18446744073709551615 ? ((min(var_8, var_2))) : (!25424)))));
                            var_20 = (!37647);
                            var_21 = (min((max((max(691745298845572830, var_4)), (arr_14 [i_1] [i_1] [i_2] [i_2] [12]))), (arr_12 [i_0 - 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7])));
                            arr_24 [16] [16] [i_0] [16] [i_7] = 511;
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            arr_28 [4] [4] [i_0] [i_0] = (~16352);
                            var_22 -= 2473;
                        }

                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            var_23 = (arr_1 [i_0] [i_0]);
                            arr_32 [i_0] [i_0] [i_2] [14] [i_9] = -1;
                            var_24 = -7127665184145832175;
                            var_25 ^= ((1073741823 ? (((arr_27 [i_6] [i_6] [i_6] [i_6] [i_9] [i_9] [i_9]) ? (arr_26 [i_6]) : (arr_14 [i_1] [i_1] [i_2] [i_1] [i_1]))) : (((max((arr_31 [2] [2] [2] [i_6] [11] [i_2] [i_9]), (arr_0 [i_6])))))));
                            arr_33 [i_0] [i_0] [i_0] = (min((var_2 + 2097024), ((((min((arr_20 [i_0] [i_0] [2] [i_2]), (arr_23 [i_9])))) ? 2847107317902211596 : 27910))));
                        }
                        var_26 = ((((((var_3 ? var_9 : (arr_3 [i_0]))) * 0))));
                    }
                }
            }
        }
    }
    var_27 &= var_1;

    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        var_28 = (min((min((arr_27 [i_10] [i_10 + 1] [i_10] [i_10] [i_10 - 1] [i_10] [i_10]), (arr_27 [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10] [i_10 - 1] [10]))), (((arr_27 [i_10] [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10]) / var_8))));
        var_29 = 3;
        var_30 = (max((max(-1286986248705032562, var_10)), var_5));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_41 [i_11] [11] = (arr_21 [i_11] [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_31 = 3422;
                    arr_46 [i_11] [i_11] [i_13] [i_13] = (((var_1 + 2147483647) >> (1024 - 997)));

                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_32 = (arr_11 [i_11] [i_12] [i_12 - 1] [i_14] [i_13]);
                        var_33 = -37640;
                        var_34 |= (0 != var_8);
                        var_35 &= 35914;
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_36 = (min(var_36, (!41531)));
                        arr_51 [i_11] [i_11] [i_11] [i_13] = ((+((0 << (((arr_17 [i_11] [i_12] [i_13] [i_11] [i_15]) - 50))))));
                        var_37 = (((arr_1 [i_12] [i_13]) ? 16256 : (arr_37 [i_12 + 1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                {
                    var_38 = ((65033 ? var_6 : (arr_47 [i_16] [i_16] [i_16] [i_16])));
                    var_39 = ((-((((arr_12 [i_11] [i_11] [17] [i_11] [i_11] [i_11]) == 8935141660703064064)))));
                    var_40 = (arr_39 [i_17] [i_17]);
                }
            }
        }
        arr_58 [i_11] = ((!(16352 || 16)));
        var_41 = (max(var_41, (!-26082)));
    }
    #pragma endscop
}
