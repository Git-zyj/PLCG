/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(((max(var_8, var_3))), (var_14 | var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_1 - 1] [i_0] [i_0] = (((arr_2 [i_0]) + ((~(arr_4 [i_0] [i_0])))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    arr_11 [i_2] [i_0] = (((arr_0 [i_1 - 2] [i_0]) ? (arr_6 [i_3 + 3] [i_1 + 1] [i_1] [i_0]) : 1));
                    var_17 = -var_4;
                    var_18 = (((-(arr_3 [i_3] [i_1]))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_19 = (max(var_19, var_3));
                    var_20 = (max(var_20, ((((arr_0 [i_2] [i_2]) ? -var_7 : -var_10)))));
                    var_21 = (arr_6 [i_0] [2] [i_0] [i_0]);
                    var_22 = (max(var_22, (arr_10 [i_2] [8] [i_1] [i_1 - 3] [i_1] [i_2])));
                }
                var_23 = ((!(arr_10 [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_24 |= var_11;
                            var_25 = ((-(-127 - 1)));
                            var_26 *= var_0;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_27 = ((-(((arr_4 [1] [1]) ? var_4 : (arr_7 [i_0] [i_0] [i_1 + 2])))));
                var_28 = (arr_20 [i_0] [i_1 + 1]);
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_29 = ((var_11 ? (arr_28 [i_0] [i_0]) : ((var_12 ? (arr_14 [i_10] [i_0] [i_0] [i_0]) : (arr_14 [i_10] [i_0] [i_0] [i_0])))));
                            arr_32 [i_0] [i_1] [i_1] [i_9 - 1] [i_1] [0] = (((((-(arr_19 [i_0] [i_0] [i_0] [i_0] [7])))) ? (arr_21 [i_0] [i_1] [i_0]) : (arr_24 [i_0] [i_9 - 1] [i_9 - 1] [i_0])));
                            var_30 |= (arr_18 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_8] [i_10] [i_9 - 1] [i_9 - 1]);
                        }
                    }
                }
                var_31 = (min(var_31, (arr_13 [i_0] [i_0] [i_8] [i_0])));

                for (int i_11 = 1; i_11 < 6;i_11 += 1)
                {
                    var_32 = (min(var_32, (((+((var_14 ? (arr_3 [i_0] [i_0]) : (arr_12 [i_1] [i_1] [i_1] [i_8]))))))));
                    var_33 = ((+(((arr_9 [1] [6]) ? var_11 : (arr_4 [i_1] [i_11])))));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_34 = ((-(arr_27 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                    var_35 = arr_21 [i_0] [i_1] [i_1];
                }
                var_36 = (min(var_36, ((((arr_2 [i_8]) ? var_6 : (arr_2 [i_8]))))));
            }
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 6;i_14 += 1)
                {
                    {
                        var_37 -= ((-var_11 ^ (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_38 = (max(var_38, (((+(((arr_30 [6] [0] [i_13] [2] [i_14]) ? var_3 : (-127 - 1))))))));
                        arr_42 [i_14] [i_0] [i_0] [9] = ((arr_38 [i_1 - 1] [i_13 - 1] [i_0]) ? (arr_38 [i_14 + 3] [i_14 + 3] [i_0]) : (arr_38 [i_0] [i_1 - 2] [i_0]));
                    }
                }
            }
            arr_43 [i_0] [1] [1] = (arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]);
        }
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 9;i_17 += 1)
                {
                    {

                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            var_39 = (max(var_39, (arr_13 [i_0] [i_0] [i_16] [0])));
                            var_40 = (min(var_40, (arr_0 [i_15 - 2] [i_16])));
                        }
                        for (int i_19 = 1; i_19 < 9;i_19 += 1)
                        {
                            var_41 = (((arr_45 [i_0]) ? (arr_45 [i_0]) : (arr_9 [i_15 - 1] [i_15 - 2])));
                            var_42 = (arr_17 [i_19 - 1] [i_19 - 1] [i_15 - 2] [i_15] [i_15]);
                        }
                        for (int i_20 = 3; i_20 < 9;i_20 += 1)
                        {
                            var_43 ^= (arr_15 [i_0] [1] [1] [i_17] [i_15] [i_15]);
                            var_44 = arr_4 [i_0] [9];
                            var_45 = (-127 - 1);
                            var_46 &= var_5;
                            var_47 = 122;
                        }
                        arr_60 [i_16] [i_15 - 1] [i_17] [i_17] [i_15 - 1] [i_17 + 1] &= (arr_22 [i_17 - 1]);
                    }
                }
            }

            for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
            {
                var_48 = (arr_25 [i_15 - 2] [i_15] [i_0]);
                var_49 &= (((arr_62 [i_15 + 1] [i_15 - 1] [i_15 + 1]) % var_10));
            }
            for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
            {
                var_50 = -1;

                for (int i_23 = 2; i_23 < 8;i_23 += 1)
                {
                    var_51 += var_0;
                    var_52 = arr_41 [i_0] [i_23 + 2] [1];
                }
            }
            var_53 = ((-(arr_38 [i_0] [i_0] [i_0])));
        }

        for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
        {
            var_54 = (((arr_68 [i_0] [i_24]) ? (arr_68 [i_0] [i_0]) : (arr_68 [i_0] [i_24])));
            var_55 += (arr_45 [2]);
            var_56 = var_1;
            arr_70 [i_0] = (~var_7);
            arr_71 [i_0] [i_0] = ((-(arr_12 [i_0] [i_24] [i_24] [i_0])));
        }
        for (int i_25 = 0; i_25 < 10;i_25 += 1) /* same iter space */
        {
            arr_75 [7] [i_0] [i_0] = arr_53 [8] [i_0] [8] [i_0] [i_25] [i_0] [i_25];
            var_57 = (arr_54 [i_0] [i_0] [i_25] [i_25] [i_25]);
        }
        var_58 ^= (arr_8 [i_0]);
    }
    #pragma endscop
}
