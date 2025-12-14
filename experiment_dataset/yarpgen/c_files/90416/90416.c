/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((13061 ? 33159 : 15497)))) | (((min(var_10, var_3))))));
    var_20 = ((33159 <= ((255 ? var_11 : ((56835 ? var_11 : var_5))))));
    var_21 = var_16;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = arr_1 [i_0] [i_0 + 1];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [0] |= (((~32768) ? (arr_0 [i_2 - 3] [i_0 + 3]) : (arr_1 [i_0 + 3] [i_2])));
                    var_23 = ((4884 ? (!var_16) : (arr_0 [i_0 + 1] [i_1 - 1])));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_24 = (((arr_7 [i_1]) ? (arr_2 [i_0 + 3]) : (((arr_3 [i_1] [i_1] [i_3]) ? var_11 : var_6))));
                        var_25 = ((~(arr_3 [i_1] [i_2 + 1] [i_2 + 1])));
                        var_26 = var_11;
                        arr_10 [i_0] [2] [i_1] [i_0] [i_0] = 15497;
                        arr_11 [i_3] |= 2568;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] = ((var_11 ? var_11 : (arr_9 [i_1 - 1] [i_1])));
                        arr_17 [i_1] [12] [i_0] [12] = (arr_8 [i_1 + 1] [i_2 + 1]);
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_1] = (arr_14 [i_0 + 2] [i_1] [i_2] [i_5]);
                        arr_22 [i_0 - 2] [4] [3] [i_2] [i_1] [19] = ((35561 ? var_13 : 50620));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_27 |= var_10;

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_28 *= ((!(((29971 ? 37082 : var_2)))));
                            var_29 = ((!(((63109 ? var_2 : var_3)))));
                            arr_27 [i_0] [i_6] [5] [i_1] [i_0] = arr_8 [i_7] [i_2];
                            arr_28 [i_1] [i_1] [13] = (((arr_5 [13]) ? 63405 : (arr_19 [i_2 - 2] [i_1])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((6 ? 9680 : 65504));
                            var_30 = ((!(~65278)));
                            var_31 |= ((~(arr_26 [6] [6] [i_0 + 3] [i_1 - 1] [i_2 + 1] [6])));
                        }
                        var_32 = ((!(((arr_8 [i_1 + 1] [4]) <= (arr_19 [i_0 + 2] [i_1])))));
                        var_33 = (((arr_18 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_1]) >> (52192 - 52165)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_34 = var_1;
                        var_35 &= 57869;
                        arr_40 [18] [i_10] [20] [i_0] = ((var_5 == (arr_32 [i_11] [i_10 - 1])));
                        var_36 = ((!(arr_29 [i_0] [i_0] [16] [i_0 + 2] [i_0] [i_0 + 2] [i_0])));
                    }
                }
            }
        }
        var_37 = var_3;
    }
    var_38 = ((var_16 ? ((25866 ? 511 : 57844)) : 24));
    #pragma endscop
}
