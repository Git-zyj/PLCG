/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [13] = (arr_2 [i_0]);
            arr_8 [i_1] [i_1] [i_1] = -117;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_12 [2] = (arr_5 [i_0] [i_0] [i_0]);
            var_14 = (arr_9 [i_2] [2] [i_2]);
            arr_13 [i_0] [i_2] [15] = (arr_4 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_15 = ((arr_0 [i_0]) ? (((-2147483647 - 1) + (arr_3 [12] [i_3]))) : (((arr_3 [6] [i_3]) % (arr_0 [i_3]))));
            arr_16 [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_3] [i_3]);
        }
        arr_17 [4] = (((-2147483647 - 1) && 2065239377));
        arr_18 [i_0] = (~(-2147483647 - 1));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_16 = ((~((((((arr_10 [i_4]) && (arr_10 [i_4])))) >> (((((-1 + 2147483647) << (2147483647 - 2147483647))) - 2147483638))))));
        arr_22 [10] = (((237 ? (((34 << (15557 - 15553))) : 18446744073709551609))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_17 = (((arr_0 [i_5]) ? ((-(arr_0 [i_5]))) : ((max(58557, (arr_6 [i_5] [i_5] [i_5]))))));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_18 = (arr_4 [i_5] [i_6]);
            var_19 = (min((((~(((-2147483647 - 1) & 13))))), ((65524 ? 2147483647 : var_1))));
            arr_27 [i_6] = (arr_3 [i_6] [i_5]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_20 = 65535;

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_21 = arr_20 [i_7] [i_7];
                var_22 = ((-(arr_11 [i_7] [8] [i_7])));
                var_23 |= 65524;
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_35 [i_9] [i_9] = var_9;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((((((((((arr_25 [i_7] [i_7]) + 2147483647)) << (3431988097 - 3431988097)))) ? (!2147483647) : (((arr_21 [i_10]) ? 3 : 2147483647)))) % (max(((max((arr_15 [i_5] [i_5] [i_5]), 59760))), ((-1 ? 65524 : var_11)))))))));
                            var_25 = (min(var_25, (((((((arr_4 [i_10] [i_9]) / (arr_4 [i_5] [i_9])))) * ((((((arr_19 [i_11]) ? (-2147483647 - 1) : 4))) / (max(16395436525575405995, 4)))))))));
                            var_26 = (((((max(255, 133))) == -127)) ? var_12 : (((arr_1 [i_5]) ? (arr_1 [i_9]) : (arr_1 [i_7]))));
                        }
                    }
                }
                var_27 = (max(var_27, (((!((((~var_1) ? (arr_37 [i_5] [i_5] [i_5]) : (arr_31 [i_7])))))))));
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
            {
                var_28 = (arr_37 [i_5] [i_7] [10]);
                var_29 = (((-(arr_34 [i_5] [i_5] [i_7] [6]))));
            }
        }
        arr_44 [i_5] = ((-113 ? 255 : -15));
        var_30 = ((-((13 >> (((max((arr_5 [i_5] [i_5] [i_5]), 14146268038150142520)) - 14146268038150142520))))));
    }
    var_31 = ((var_6 ? var_5 : var_12));
    #pragma endscop
}
