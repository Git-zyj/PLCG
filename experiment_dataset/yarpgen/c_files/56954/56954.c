/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = arr_1 [i_0 - 1];
            arr_6 [i_0] [i_0] [i_1] = ((!(arr_3 [i_1] [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_0 - 1] [i_0 - 1] = (arr_1 [i_0 - 1]);
            var_14 &= (((!1370892049) | (((arr_8 [i_0 - 1] [i_0]) + -960995574))));
            var_15 |= ((!(arr_4 [i_0 - 1])));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = min(((-(min(-960995551, (arr_12 [i_3] [i_3] [i_0]))))), 1);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_16 &= arr_11 [i_0] [i_4];

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 = (max(var_17, var_12));
                            var_18 = var_12;
                        }
                        for (int i_7 = 3; i_7 < 7;i_7 += 1)
                        {
                            var_19 = (((arr_23 [8] [i_7] [i_5] [i_4] [i_3] [i_0] [3]) | var_4));
                            arr_25 [i_3] [i_4] = ((82 ? 0 : 36));
                        }
                        var_20 = ((arr_7 [i_0 - 1]) ? -3874358457037967446 : 103);
                    }
                }
            }
            arr_26 [i_0] = (arr_20 [i_0] [6] [i_0] [i_0] [i_0]);
        }
        var_21 = (arr_4 [i_0 - 1]);
        arr_27 [i_0] = (min(-1, (arr_0 [i_0] [i_0 + 1])));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_22 = (((arr_29 [i_8] [i_8]) ? (((arr_30 [i_8]) ? (min(1, -3874358457037967446)) : ((min(5334, var_13))))) : (arr_29 [i_8] [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_23 = (((min((arr_32 [i_10]), 960995574)) >> (min(1, ((var_4 ? (arr_31 [i_8] [i_8]) : var_12))))));
                    var_24 = (max(var_24, (((+((((min((arr_34 [4] [i_8] [i_8]), 1))) ? (arr_29 [2] [2]) : (~174))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_41 [i_8] [i_9] [i_8] [i_11 - 2] = (((arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_11 + 1]) ? (((arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_12]) ? (arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_11]) : (arr_37 [i_8] [i_11 + 1] [i_11 + 1] [9]))) : (((arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_12]) ? (arr_37 [i_8] [i_11 + 1] [i_11 + 1] [1]) : -3874358457037967465))));
                                var_25 *= ((((!(arr_39 [i_8] [i_9] [i_8] [2] [i_12]))) ? 118 : ((3874358457037967445 ? (arr_37 [12] [i_11 - 2] [i_11 + 3] [i_11 - 2]) : -15238))));
                                arr_42 [i_8] [i_10] [i_8] [i_8] = ((-(((arr_36 [i_11 - 2] [i_8]) ? 14 : (arr_36 [i_11 - 2] [i_10])))));
                                arr_43 [i_8] [i_11] [i_10] [i_9] [i_8] = ((((min(var_13, -4593))) ? ((~(arr_39 [6] [i_9] [i_11 + 3] [i_8] [i_9]))) : (!var_5)));
                            }
                        }
                    }
                    var_26 = ((((((arr_29 [i_8] [i_8]) * (arr_36 [i_8] [i_8])))) ? (arr_31 [i_8] [i_10]) : (((((arr_38 [i_10] [i_8] [i_8] [i_9] [i_8]) == (arr_38 [i_10] [i_9] [i_9] [i_8] [i_8])))))));
                }
            }
        }
        arr_44 [i_8] = (((((-11278 ? 1 : 4172347824985313207))) ? ((~(arr_36 [i_8] [i_8]))) : (~1)));
        arr_45 [i_8] = (arr_31 [i_8] [i_8]);
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                var_27 = (min(var_27, ((((var_6 * 0) ? (min(1871536497, (min(63, 1)))) : 61808)))));
                var_28 = (max(var_28, 105));
                arr_50 [i_13] [i_13] [i_13] = (min(-25596, (28944 <= -9098217070641670265)));
            }
        }
    }
    #pragma endscop
}
