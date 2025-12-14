/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [3] [i_2] [3] [i_3] = (2147483647 | 5973710075423338847);
                            var_13 += ((2147483625 ? 774758159 : 1924704140));
                            var_14 = (-(~33861));
                        }
                    }
                }
                arr_11 [6] [i_1] [i_0] = (max(-2147483647, (min(774758190, 24522))));
            }
        }
    }
    var_15 = ((var_8 & (((!((max(2147483640, -1470664409))))))));

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_16 -= (~-104);
        var_17 += (~141);
        var_18 = (((max(774758159, (arr_14 [i_4] [i_4]))) >= (((((((arr_13 [i_4]) | (arr_14 [15] [i_4])))) ? (arr_12 [i_4] [i_4]) : (var_11 < -5973710075423338848))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_17 [i_5] [i_5] = 115;
            arr_18 [i_5] [15] [i_5] = ((!(arr_12 [i_4] [8])));
            var_19 = (arr_15 [i_5] [i_5]);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_20 -= ((!((((arr_3 [i_6]) & 2147483633)))));

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_21 -= (arr_20 [i_6]);
                    var_22 -= var_3;
                    arr_31 [i_6] [9] [i_7] [i_8] [i_9] = (!-2147483647);
                    arr_32 [i_6] [i_7] [i_8] [i_9] = ((~(!18014394214514688)));
                    var_23 += ((672933163 * (arr_19 [i_7])));
                }
                arr_33 [i_7] = (-2147483641 || -774758167);
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                arr_37 [3] [3] [i_7] [i_6] = (((((~(arr_6 [10] [i_6])))) ? (var_6 | -2147483647) : -8191));
                arr_38 [i_6] [i_7] [i_10] = (~var_0);
            }

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_43 [i_6] [i_7] [11] = var_0;
                var_24 = (arr_12 [i_6] [i_7]);
                arr_44 [i_6] [i_6] [6] [i_11] = ((-(arr_29 [i_11] [i_7] [i_7] [9] [i_6])));
                var_25 += ((!(arr_19 [i_6])));
            }
            for (int i_12 = 3; i_12 < 13;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_52 [i_14] [6] [8] [i_7] [6] = (arr_35 [i_6] [i_6] [i_6]);
                            arr_53 [i_6] [i_7] [i_12] [1] [13] [0] = var_10;
                            arr_54 [i_6] [i_7] [i_6] [i_12] [i_13 - 4] [i_14] [i_14] = (((arr_28 [1] [i_12] [1] [1] [1] [i_12 - 2]) > ((-1924704140 ? 2146435072 : (arr_5 [i_6] [i_12 - 2] [8])))));
                        }
                    }
                }
                var_26 -= (((((774758190 ? (arr_35 [i_7] [i_7] [i_12]) : (arr_21 [i_12] [i_12])))) ? -1366245560 : ((18014394214514667 ? 8 : (arr_41 [8])))));
                var_27 += (!2147483640);
            }
        }
        var_28 -= ((-(arr_21 [i_6] [i_6])));
        var_29 = (((arr_3 [i_6]) <= -18014394214514668));
        arr_55 [i_6] = (((arr_45 [i_6] [i_6] [i_6] [i_6]) == (arr_0 [i_6])));
    }
    #pragma endscop
}
