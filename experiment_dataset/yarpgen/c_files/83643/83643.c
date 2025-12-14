/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(1072693248 - 32768)));
    var_14 = (var_9 <= var_10);
    var_15 = (min(var_15, (((((((1654520330 ^ 7063573062625935976) ? (min(-21973, var_1)) : 255))) ? (6544 == -72) : -296933116)))));
    var_16 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [14] [i_1] [i_0 + 2] = (((arr_1 [i_0 - 1] [i_1]) / (arr_5 [i_0] [i_1])));
            var_17 -= (arr_3 [19]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 += (arr_9 [i_0 + 2] [i_0 - 1]);
            var_19 = (max(var_19, ((((arr_9 [i_0 - 1] [19]) >= 11383171011083615620)))));
            var_20 = ((((var_3 ? var_7 : 5680713711045693495)) & 296933116));
            var_21 = ((7063573062625935996 ? 32 : 3139));
            arr_10 [i_0] [i_0] [i_2] = -var_10;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_0] [i_0] [i_0] = (((arr_4 [i_3] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : 15));
            arr_14 [i_0] [i_0] = 32768;

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_22 = (arr_8 [i_4]);
                arr_18 [i_0] = -24866504;
                var_23 = var_7;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0 + 2] [i_0 + 1]) ? 43 : (arr_12 [i_5] [i_0 - 1] [i_4])));
                            var_24 -= (arr_15 [i_0 + 2] [i_3] [i_3] [i_5]);
                        }
                    }
                }
                var_25 ^= (arr_6 [i_0] [i_0 + 2] [i_4]);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_27 [i_0] = (arr_17 [i_0] [i_3]);
                arr_28 [i_7] [i_3] [i_0 - 1] = 0;
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_31 [i_8] = (((arr_16 [i_8] [i_8] [i_3] [i_0]) << (((var_12 - -61121437) - 61181907))));
                var_26 += (((((12600514879428056179 ? 1675906941 : var_1))) ? (arr_3 [6]) : var_9));
                arr_32 [i_0] [i_0] [i_0] [i_8] = ((var_8 ? var_5 : (arr_22 [17] [i_0] [i_3] [i_3] [i_0] [i_0])));
            }
            var_27 += (arr_23 [i_0] [i_0 + 1] [i_0] [i_3] [i_3] [i_3]);
        }
        arr_33 [i_0] = 2097152;
        arr_34 [i_0] [i_0] = var_4;
        var_28 = (min(var_28, (((~(arr_8 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_29 += 10247900267791117951;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_30 += (((!0) * var_4));
                    arr_45 [i_9] = 32;
                    arr_46 [i_9] [i_9] [i_11] = 1;
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_54 [i_9] [i_10] = (var_12 > -296933116);
                                arr_55 [i_9] [i_10] [19] [i_9] [i_13] = var_12;
                                arr_56 [i_9] = ((~(arr_12 [i_9 + 2] [i_9] [i_9 - 1])));
                            }
                        }
                    }
                }
            }
        }
        arr_57 [i_9 + 2] [i_9] = (arr_8 [i_9 + 1]);
        var_31 = (max(var_31, var_12));
    }
    #pragma endscop
}
