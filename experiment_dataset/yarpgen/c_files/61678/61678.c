/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = ((!(((((-44 ? (arr_7 [i_0]) : (arr_13 [i_2] [i_3] [i_2] [i_1 + 1] [i_0] [i_0]))) + 4294967290)))));
                                var_14 = var_10;
                                var_15 = ((!(arr_5 [14] [i_2])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = (arr_12 [i_2 - 3]);
                    arr_17 [i_2] [i_1 - 3] [15] = ((min((var_0 / -19), (arr_9 [i_2] [i_1]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_16 = ((!((((((arr_25 [i_5 - 2]) | 119))) != (arr_14 [i_5 + 1] [i_5 + 2] [i_5] [i_5] [i_5 + 1])))));

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                            {
                                var_17 = ((!(arr_27 [i_5 + 1] [3] [i_9] [3])));
                                var_18 = -1;
                                arr_31 [i_5] [i_5] [i_5] [i_5 + 2] = (((var_0 >> (39371 - 39358))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                            {
                                arr_34 [i_5] = (17969225795757289915 + var_5);
                                arr_35 [i_5] = (arr_15 [i_5] [i_5 + 1] [i_6] [i_7] [i_8] [i_10]);
                                arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_7 [i_5 + 1]) < 6));
                            }
                            for (int i_11 = 0; i_11 < 19;i_11 += 1)
                            {
                                var_19 = ((((((~(arr_1 [i_5 + 1]))) + 2147483647)) << (((((((arr_1 [i_5 - 1]) ? -44 : (arr_1 [i_5 + 1]))) + 45)) - 1))));
                                arr_39 [i_5] [i_5] = ((((((arr_12 [i_5 + 1]) ? 2574178900 : (arr_32 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5] [i_5] [i_5])))) ? ((((arr_21 [i_5 + 1] [i_5 + 1] [i_5]) != (arr_3 [i_5 - 2])))) : (((((arr_1 [i_5]) <= (arr_33 [i_11] [i_8] [i_5 + 1] [2] [i_5 + 1])))))));
                                arr_40 [i_5] [i_5] [i_7] [i_7] [10] = ((0 ? (((!((((arr_25 [i_5]) ? 0 : 84)))))) : (arr_37 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_11] [i_5 + 1])));
                            }
                            for (int i_12 = 0; i_12 < 19;i_12 += 1)
                            {
                                arr_44 [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_5] = (arr_15 [i_5] [i_5 + 1] [i_5] [i_5] [17] [i_5 + 2]);
                                arr_45 [i_5] [i_6] [i_5] [i_7] [i_7] [i_12] = (((4294967295 ? (((2812431375 ? (arr_11 [i_5 + 2] [i_6] [i_6] [13]) : 48))) : 4294967290)));
                                var_20 = (arr_30 [i_12] [i_5] [11] [i_5] [i_12]);
                            }
                            arr_46 [i_7] [i_7] [i_5] [i_7] [i_7] = -93;
                            arr_47 [i_5] = ((((min(var_7, (((arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]) + 39362))))) ? (arr_7 [i_5 - 2]) : -3311641460975088106));
                        }
                    }
                }
                arr_48 [i_5] [i_6] = -44;
                var_21 = (arr_14 [i_5] [i_6] [i_6] [i_6] [i_5]);
            }
        }
    }

    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        var_22 = ((1922111474 - var_12) ? ((((arr_1 [i_13 + 2]) ? 3 : (arr_1 [i_13 + 1])))) : (arr_10 [i_13 - 1] [i_13 + 1] [i_13] [i_13]));
        var_23 = 18446744073709551604;
        var_24 = (arr_11 [i_13] [i_13 + 1] [i_13] [i_13 + 1]);
    }
    #pragma endscop
}
