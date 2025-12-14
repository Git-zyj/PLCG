/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_15;

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 *= (min(32379, (!-1265)));
            arr_6 [i_0] [i_0] = ((!(~4398046494720)));
            arr_7 [i_0] [i_0] = (max(((((arr_3 [i_0] [i_0 - 3] [i_0 - 3]) <= (max((arr_3 [2] [2] [i_1]), var_7))))), ((~(0 * 124)))));
            var_18 = (max((((~(((arr_5 [i_0] [i_1] [5]) << (var_5 - 61018)))))), var_4));
        }
        var_19 -= ((var_2 ? (arr_5 [4] [4] [i_0]) : ((~(arr_3 [i_0] [i_0] [i_0])))));
        var_20 = min((((var_12 ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))), ((((arr_2 [i_0] [i_0]) ? (~4398046494720) : (arr_5 [i_0] [i_0] [i_0])))));
        arr_8 [i_0] [9] = -100;
    }
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_21 = (min(var_21, ((max(((((((arr_5 [0] [i_3 - 1] [2]) + (arr_4 [i_3] [i_3]))) - 0))), (174790637428507746 - 1))))));
            arr_15 [i_3] = (arr_12 [i_2 - 4]);
            var_22 *= -0;
        }
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            var_23 += (max(((var_5 >> (var_7 - 1718192770))), (97 && 100663296)));
            var_24 = (max(var_24, 123));
            var_25 = (((var_1 | (arr_12 [i_2 - 2]))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_26 *= (arr_2 [1] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_27 *= (max(var_10, (arr_11 [i_2])));
                        arr_28 [i_5] = -6837;
                    }
                }
            }
            arr_29 [i_2 - 2] [i_5] = var_13;
            var_28 += (~89);
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_29 *= (((arr_31 [i_2]) * var_11));
            var_30 |= (var_6 > (arr_17 [i_2] [i_8] [i_2 + 1]));
        }

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_40 [4] [i_9] [7] [i_9] = (((arr_9 [i_2]) / (((((arr_16 [i_10]) && (arr_25 [i_11] [i_2] [i_9] [i_2])))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_44 [i_2 - 3] [i_9] [i_10] [i_12] [i_11] [7] [i_12] = ((124 * (arr_34 [i_2 - 3])));
                            arr_45 [i_12] [i_9] [i_10] [i_11] [i_12] [i_2] [5] = 126;
                            var_31 += (((arr_21 [i_2 - 4] [2]) ? (arr_12 [i_2]) : var_1));
                            var_32 = var_0;
                        }
                    }
                }
            }

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_50 [i_2] [i_9] [i_13] [i_2] = -58;
                var_33 *= (1 | -124);
                arr_51 [i_2] [i_9] [8] [i_13] = var_8;
                arr_52 [i_2 - 1] = ((((max(var_3, (arr_13 [i_2 + 1])))) - (arr_13 [i_2 - 2])));
                var_34 = ((!(((((var_6 >= (arr_0 [i_2 - 3]))) ? var_6 : (arr_24 [i_2] [i_9] [i_13] [i_2 - 2] [i_9]))))));
            }
            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 8;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_35 = (arr_11 [i_16]);
                            arr_60 [i_15] [3] = ((-((+((((arr_32 [i_15] [i_2]) != var_2)))))));
                            arr_61 [i_2 - 3] [i_2] [i_2] [i_2] [i_2] [i_15] [i_2] = ((+(((!93) ? (arr_47 [i_2 - 3] [i_9]) : (((((arr_41 [i_2]) && 110))))))));
                            var_36 = (min(var_2, (arr_10 [i_2] [0])));
                        }
                    }
                }
                var_37 = arr_0 [i_2];
            }
            var_38 = (min(var_38, (((var_6 - ((-(arr_38 [i_2 - 4] [i_2 - 3] [i_2 - 4] [i_2 - 4]))))))));
        }
    }
    var_39 = (var_9 * var_3);
    #pragma endscop
}
