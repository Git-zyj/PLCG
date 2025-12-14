/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((!(((-(var_11 && 127))))));
                    var_14 = (min(127, 1));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (-(~-3924931960396669328));
        var_15 = var_4;

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_16 = (~(arr_8 [i_4]));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_17 = (min(var_17, 1550325913));
                        var_18 = (min(var_18, var_0));
                        arr_19 [i_3] [i_4] [i_3] [2] = 0;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_25 [i_3] [i_8] [20] [i_3] = (((var_6 ? var_8 : (arr_15 [i_3] [i_3]))));
                var_19 = (var_4 + ((((max(var_8, var_8))) ? (max(var_11, (arr_12 [i_3]))) : ((((arr_14 [6] [i_8]) ? var_1 : 0))))));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_20 = ((!((((~1) ? 58643 : (max(var_2, var_9)))))));
                arr_28 [i_3] [i_7] [11] = max((((!(arr_26 [i_3] [i_3] [i_3] [i_3])))), var_4);
                var_21 = (arr_13 [i_3] [i_3] [i_3]);
                arr_29 [i_3] = ((~(((arr_23 [i_3] [i_3] [i_9]) ? var_5 : var_11))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_22 = ((~var_6) >= (~116));
                var_23 = (min(var_23, -var_11));
            }
            var_24 = (((9223372036854775807 ^ (9223372036854775807 - var_9))) * var_3);
        }
        arr_33 [i_3] = ((var_3 ? (~2032402073) : ((var_8 ? (arr_15 [i_3] [i_3]) : (arr_24 [i_3] [12] [i_3] [i_3])))));
        var_25 = -var_6;
    }
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        var_26 = (max(var_26, var_0));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    var_27 = (max(var_27, ((((!-74) > ((((max(var_0, var_0))) ? (~var_3) : -2032402074)))))));
                    var_28 = ((max((arr_2 [i_11 + 1] [i_11 + 2]), var_5)));
                }
            }
        }
        arr_42 [i_11] = ((~((-(arr_13 [i_11 - 1] [i_11 + 3] [i_11 + 2])))));
    }
    #pragma endscop
}
