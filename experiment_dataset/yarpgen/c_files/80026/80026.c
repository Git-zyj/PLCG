/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((min(var_1, 1577926222)))));
    var_11 = ((((max((min(var_7, 0)), var_9))) || 64));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] [i_1] = (((arr_1 [i_0] [i_0]) ? var_9 : ((1289956456 ? 480699208 : 2717041074))));
            arr_5 [i_0] = var_4;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_12 = (((((1577926222 ? 1577926221 : var_1))) ? (!49152) : 2717041073));
                            var_13 = -var_5;
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_2] = (((var_9 ? var_1 : (arr_0 [i_2]))));
                arr_16 [i_0] = (((((arr_9 [i_0] [i_1] [i_1] [i_1] [i_2]) * var_5)) % var_8));
            }
            for (int i_5 = 3; i_5 < 6;i_5 += 1)
            {

                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    var_14 = ((-(arr_8 [i_1] [i_1] [i_1] [i_6] [i_6 + 2] [i_5])));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_5] = (52 < (arr_1 [i_6 - 2] [i_7]));
                        arr_26 [i_0] [i_7] [i_5] [i_6] [i_7] = var_4;
                        var_15 = ((var_6 ? -1 : ((-(arr_23 [i_7] [i_0] [i_5] [i_1] [i_5] [i_0] [i_0])))));
                        var_16 = ((((((arr_10 [i_0] [i_1] [i_5] [i_6] [i_5]) ? var_0 : var_0))) ? (((arr_10 [i_7] [i_6] [i_0] [i_0] [i_0]) | (arr_13 [i_0] [i_1] [i_0] [i_6] [i_0] [i_0]))) : ((-(arr_2 [i_0] [i_1])))));
                    }
                    var_17 = (((arr_8 [i_0] [i_0] [i_6] [i_6 + 2] [i_5] [i_5]) % (arr_8 [i_0] [i_1] [i_5 - 1] [i_6 - 2] [i_5 - 1] [i_6])));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_18 = ((!(((var_6 ? (arr_3 [i_0]) : 480699195)))));
                    arr_30 [i_5] [i_5] [i_5] [i_5] [i_0] = (arr_20 [i_5] [i_5] [i_5 + 1] [i_5 + 4] [i_5]);
                    var_19 = (3814268094 ^ 1);
                    var_20 = ((~(((arr_27 [i_0] [i_0] [i_5 + 2]) ^ 30))));
                    var_21 = ((((arr_29 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8]) ? var_9 : var_5)));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_34 [i_0] [i_5] = (((arr_22 [i_5 - 2] [i_5]) ^ 0));
                    arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((~((-60 / (arr_18 [i_0] [i_0] [i_5])))));
                    var_22 = (arr_11 [i_5 + 3] [i_1] [i_5] [i_9] [i_5] [i_1]);
                }
                for (int i_10 = 2; i_10 < 6;i_10 += 1)
                {
                    arr_38 [i_0] [i_5] = ((-(var_6 < var_9)));
                    var_23 = (max(var_23, ((~((((arr_0 [i_1]) != (arr_19 [i_0] [i_0]))))))));
                    var_24 = var_5;
                    var_25 -= (((((var_5 ? var_3 : (arr_36 [i_1])))) ? ((~(arr_1 [i_5] [i_1]))) : var_2));
                }
                arr_39 [i_5] [i_5] [i_5] [i_5] = ((~(!22343)));

                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    arr_42 [i_0] [i_1] [i_1] [i_5] = (((~var_8) ? ((12601170101296592678 - (arr_19 [i_0] [i_5]))) : 3));
                    arr_43 [i_5] = ((1 ? 1 : 11453618371282493625));
                    arr_44 [i_0] [i_0] [i_0] [i_5] [i_11] |= ((1 ? (arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_11] [i_11 - 1]) : var_9));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    arr_48 [i_0] [i_0] [i_5] [i_5] [i_12] = 247;
                    arr_49 [i_5] = -1;
                    var_26 = (arr_31 [i_0] [i_1] [i_1] [i_5] [i_12]);
                }
                var_27 = 1577926204;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_28 = -253;
                            var_29 = (4839633231952161361 / 1);
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_30 = (min(var_30, ((var_6 ? (arr_54 [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_15] [i_0] [i_15] [i_15])))));

            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_31 = (((-1681149548 >= -1792857883) >> (((var_8 << var_2) - 141))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        {
                            var_32 = ((var_4 ? (arr_33 [i_0] [i_15] [i_16] [i_17]) : (arr_33 [i_0] [i_0] [i_0] [i_0])));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                            var_33 = (((((~(arr_37 [i_0] [i_15] [i_15] [i_17])))) ? 7252568294175274331 : var_2));
                        }
                    }
                }
                var_34 = 19;
            }
        }
        for (int i_19 = 4; i_19 < 7;i_19 += 1)
        {
            var_35 = (~var_7);
            var_36 += (arr_71 [i_19 + 1] [i_19 - 2]);
        }
        arr_73 [i_0] [i_0] = 19;
        var_37 = ((var_2 ? (arr_61 [i_0]) : 16769024));
        arr_74 [i_0] = (((arr_64 [i_0] [i_0]) <= (arr_64 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 10;i_20 += 1)
    {
        arr_78 [i_20] [i_20] = ((127 ? ((var_2 ? var_6 : (arr_75 [i_20]))) : ((var_0 ? 227 : (arr_75 [i_20])))));
        var_38 = (arr_77 [i_20 - 1]);
    }
    #pragma endscop
}
