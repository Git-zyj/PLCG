/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(1, (((7 != 255) ? 17780242323179236451 : 6))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (((min(((-(arr_2 [i_0]))), 533254115)) / ((54436 ? -9115184223005275475 : 40426))));
        arr_3 [i_0] [i_0] = (((((var_9 ? -var_3 : ((var_6 ? var_9 : (arr_1 [i_0])))))) ? ((((!((max((arr_2 [1]), var_8))))))) : ((var_6 ? (((max(var_9, 65535)))) : (((arr_0 [5]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 = ((var_1 ? ((-(((arr_5 [i_1]) & var_0)))) : (min((-65 / -1), (arr_4 [i_1])))));
        var_13 *= var_7;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((47642 ? 248 : 255)));
        var_14 += (arr_4 [5]);
        var_15 = max(((-(((arr_6 [i_2]) ? var_3 : (arr_8 [i_2]))))), (((var_9 >= (min((arr_6 [i_2]), (arr_5 [10])))))));
        arr_10 [i_2] = 232;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_16 = (min(6477677937941275847, 228));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_3] = 45;

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_17 += (((((arr_13 [i_3]) ? (arr_13 [i_5]) : (arr_5 [i_3]))) / (((arr_5 [i_3]) ? 5 : (arr_13 [i_3])))));
                var_18 = (arr_8 [i_5]);

                /* vectorizable */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    var_19 = 6661105809575222285;

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_20 = (var_4 <= 31);
                        var_21 += (~var_1);
                        var_22 = (((((arr_18 [0] [i_4] [i_7]) >= var_0)) ? (((arr_11 [i_3]) ? (arr_22 [i_3] [i_4] [i_5] [5] [i_7]) : 9451629977996485446)) : -0));
                        var_23 = (min(var_23, (arr_5 [i_3])));
                    }
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    var_24 = (((arr_11 [i_3]) ? (arr_11 [i_5]) : (arr_11 [i_3])));
                    var_25 += ((!(arr_7 [i_3])));
                    var_26 = (13386 < -1725913657476197077);
                    arr_29 [i_3] [i_4] [4] = -2657122332232497077;
                    arr_30 [i_4] [i_5] [2] = (((arr_19 [i_8 - 3]) ? (arr_28 [1] [i_4] [1] [i_4] [i_4] [i_4]) : 1));
                }
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_27 = (max(var_27, (arr_32 [i_4] [i_4] [i_4])));
                arr_34 [i_3] [i_4] [i_9] = ((((var_4 ? var_3 : var_5)) << ((((~(max((arr_4 [i_3]), (arr_14 [i_3] [i_4] [i_9]))))) + 17378))));
                arr_35 [i_3] [i_4] [14] [5] = var_3;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_39 [i_10] [i_10] [6] [16] = (30 != 21015);
                    var_28 = (((arr_31 [i_3] [1] [i_9] [i_10]) ^ var_4));
                }
            }
        }
        var_29 = ((((((arr_6 [2]) + (arr_7 [i_3])))) ? (((arr_6 [1]) ? var_4 : (arr_7 [0]))) : ((var_7 ? (-127 - 1) : (arr_7 [i_3])))));
    }
    #pragma endscop
}
