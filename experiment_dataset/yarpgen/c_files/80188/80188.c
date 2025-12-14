/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = 63;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_3] = ((arr_2 [i_0] [i_0]) ? -1383279722 : (((arr_2 [6] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1] [i_1]))));
                        arr_12 [14] [i_1] [i_2] [i_3] |= ((-46 ? var_4 : ((+((var_11 ? (arr_7 [13] [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_0])))))));
                        var_19 = ((-0 & (arr_10 [i_0] [i_1] [i_3])));
                        var_20 = (var_13 ? -124 : (arr_8 [i_1] [i_2]));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((((!(arr_13 [i_4]))) ? (((arr_9 [i_4]) + (arr_6 [i_4]))) : -var_3));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_21 [i_4] [i_4] [i_4] [i_4] = (((((!(arr_4 [10] [10])))) ^ (!var_8)));
                arr_22 [i_4] [i_5] [i_4] = var_0;
                arr_23 [i_4] = -63;
            }

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_21 = -1256829930;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] = ((-532494377 ? 874816186 : 63488));
                            arr_32 [i_4] = -1256829930;
                            var_22 = 1662525649;
                            var_23 = (min(var_23, var_0));
                            arr_33 [i_4] [i_7] [i_7] [i_7] [i_7] [i_7] = ((-108 ? 63 : ((-46 ? (arr_19 [i_4] [i_9] [i_7] [i_7]) : var_15))));
                        }
                    }
                }
                var_24 = (!-46);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_25 += (20669 <= ((-28 ? 5929222226565404563 : (arr_19 [15] [i_7] [1] [3]))));
                            arr_41 [i_4] = (!63);
                            arr_42 [i_4] [i_5] [i_5] [i_7] [i_5] [i_4] = ((((arr_38 [i_4] [i_5] [i_7] [i_10] [i_4]) % var_17)));
                            var_26 = (min(var_26, (((!(arr_10 [i_10 + 1] [i_10 + 4] [i_11 - 1]))))));
                        }
                    }
                }
                arr_43 [i_4] [18] [i_4] [18] = (((arr_19 [i_4] [i_5] [i_7] [i_7]) ? 62 : (arr_19 [i_4] [i_4] [16] [i_7])));
            }
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_27 = ((((((arr_28 [i_4] [i_5] [14] [i_13] [i_4]) ? (arr_13 [i_12]) : 2047))) ? var_2 : (((var_16 ? 2047 : (arr_20 [i_5] [i_13]))))));
                            var_28 = (min(var_28, (arr_16 [i_4])));
                            arr_50 [i_4] [i_4] [i_12] [i_13] [i_14] = 0;
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_29 = (max(var_29, (((var_3 ? (((var_15 ? ((((!(arr_30 [i_15] [i_15] [i_15] [17] [17]))))) : (((arr_25 [i_15] [i_15] [i_15]) >> (((arr_28 [i_15] [i_15] [i_15] [i_15] [i_15]) - 982534800))))))) : ((var_11 ? ((var_0 ? (arr_6 [i_15]) : var_15)) : 93)))))));
        var_30 = (arr_6 [i_15]);
    }
    var_31 = (max(var_17, (min(1134360012, var_8))));
    var_32 = (max(var_32, 29730));
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 15;i_17 += 1)
        {
            {
                arr_60 [i_16] = ((((((arr_40 [i_17] [i_17 + 1] [i_17] [i_17] [i_17 + 1] [i_17 - 2] [i_17]) ? (arr_13 [i_16 + 2]) : (arr_58 [i_17 - 2] [15] [i_16 + 1])))) ? (min((min(var_4, 6817047415004768834)), (min(var_9, (arr_27 [i_16] [8] [14] [i_16]))))) : ((((-29730 + 2147483647) << (((-63 + 64) - 1)))))));
                var_33 = ((!((min((arr_16 [i_17]), (min((arr_14 [16]), (arr_13 [i_16]))))))));
            }
        }
    }
    #pragma endscop
}
