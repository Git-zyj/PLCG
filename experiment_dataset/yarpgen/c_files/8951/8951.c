/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 -= var_1;
                arr_5 [i_0] [18] [i_1] = max(204, (max(var_16, (max(2088457115, var_15)))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = var_11;

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_19 |= 223;
                        var_20 = var_8;
                    }
                }
                var_21 = 31635;
            }
        }
    }

    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((223 != ((max(var_8, 50)))));
        var_22 = (((2791352332051393324 != var_11) ? 213 : var_13));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    arr_22 [i_5] = var_4;
                    arr_23 [i_4 - 1] [i_4 - 1] [i_6] = (max((!2081640744), var_7));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = 2791352332051393339;

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_35 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_8] = var_4;
                            arr_36 [i_7 - 4] [i_8] [i_7] = (!var_12);
                            var_23 = 2081640744;
                            var_24 = (arr_31 [i_11]);
                        }
                    }
                }
            }
            var_25 = (-21 != var_13);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_26 = (max(var_26, var_0));

                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            var_27 = ((~(arr_15 [i_7] [0] [15])));
                            arr_43 [7] [i_8] = (((arr_6 [i_13] [i_13] [i_13]) != (arr_1 [i_12] [i_12])));
                            var_28 = (((!32767) != (var_16 != var_6)));
                            var_29 += ((!(arr_31 [i_13])));
                            var_30 = (max(var_30, ((((50 != var_1) != ((((arr_4 [i_14] [i_8]) != var_2))))))));
                        }

                        for (int i_15 = 4; i_15 < 16;i_15 += 1)
                        {
                            var_31 = var_16;
                            var_32 = (~21);
                            var_33 = 31977;
                        }
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_34 = (((var_5 ? var_11 : (arr_11 [i_16] [i_7 - 4]))));
                            var_35 = 205;
                            var_36 = ((var_10 != (!var_16)));
                        }
                        arr_49 [i_8] [i_8] [i_12] [i_13] = 52;
                    }
                }
            }
        }
        var_37 = -576460752303423487;
    }
    var_38 = -42;
    #pragma endscop
}
