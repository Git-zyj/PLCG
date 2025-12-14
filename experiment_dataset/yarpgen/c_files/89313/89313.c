/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(max(1549039761626912024, (-2147483647 - 1)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [2] &= 32760;
            var_16 = max((max((arr_3 [i_0] [i_0 - 1] [i_0 + 1]), var_6)), ((max(var_12, (arr_0 [i_0] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = (var_9 <= ((~(-2147483647 - 1))));
            var_17 *= (max(17605, -2147483636));
        }
        arr_10 [i_0] [i_0] = 65515;
        var_18 = (min(var_18, (arr_0 [i_0] [6])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = (min(var_19, (~65493)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_20 = (arr_12 [i_4]);
                    arr_19 [i_5] [i_5] [i_3] = (((arr_17 [i_3] [i_3] [i_5]) ? (arr_17 [i_3] [i_4] [i_5]) : (arr_17 [i_3] [i_5] [i_5])));
                    var_21 = (min(var_21, (arr_12 [i_5])));
                    var_22 = 899178651;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    arr_28 [i_7] [i_7] [i_7] |= (arr_20 [i_6]);
                    var_23 |= (max(1321090394, 25180));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 += 9167977798456276164;

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_25 = (min(var_25, 9223372036854775807));
                            var_26 = ((~((~((((arr_32 [i_7] [i_9] [i_8 + 1] [i_7] [i_6]) <= var_1)))))));
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_14 [i_9]);
                            arr_36 [i_6] [i_7] [i_8] [i_8] [i_8] [2] [i_10] = var_10;
                        }
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            arr_41 [21] [21] = (-1 < var_14);
                            arr_42 [i_6] [i_6] [i_8] [i_9] [i_11] = -1830215200;
                        }
                        var_27 &= max(((((arr_31 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]) ? 2 : -1))), (max(-113, 18446744073709551615)));
                        var_28 = -var_10;
                        arr_43 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = (arr_22 [i_9]);
                    }
                }
            }
        }
        var_29 = ((max(-32741, 7663772846227755296)));
    }
    var_30 = (-2147483647 - 1);
    var_31 = var_14;
    #pragma endscop
}
