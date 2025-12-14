/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_7, 2989665752));
    var_16 = (max(var_16, 9223372036854775791));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 ^= 2254652276;
        arr_4 [i_0] [i_0] = 18446744073709551615;
        var_18 = (max(var_18, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = -3320620829064097149;
        var_19 *= (-8652695440235093313 >= 2457573088447184139);

        /* vectorizable */
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_2] = 23139;
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = (max(var_20, (arr_13 [i_1] [i_2] [i_3] [i_5])));
                            var_21 *= -3398479866246376070;
                            var_22 = (max(var_22, 18446744073709551613));
                            arr_20 [i_2] [i_2] = 8219343610747207221;
                        }
                    }
                }
            }
            arr_21 [i_2] [i_1] [i_2] = (i_2 % 2 == zero) ? ((((((~2) + 2147483647)) << (((((arr_15 [i_2] [i_1] [i_1] [2] [i_2]) & -1028312784666967615)) - 12790275753200468353))))) : ((((((~2) + 2147483647)) << (((((((arr_15 [i_2] [i_1] [i_1] [2] [i_2]) & -1028312784666967615)) - 12790275753200468353)) - 13804080655798632383)))));
            var_23 = (min(var_23, 274877906943));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_26 [i_1] [i_6] [7] = -274877906954;
            arr_27 [i_6] = (min((!0), (!3320620829064097149)));
        }
        var_24 = max(11329281633853948836, ((((((arr_9 [8] [i_1]) + 9223372036854775807)) >> (((((arr_5 [i_1]) | 1)) - 3193883246934089737))))));
        arr_28 [i_1] = (arr_10 [i_1]);
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_25 = 32767;
        var_26 *= (arr_17 [i_7] [5] [7] [i_7] [i_7] [i_7] [i_7]);
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_27 = ((((!(arr_18 [i_8] [i_8] [i_8] [i_8])))));
        arr_33 [i_8] = (arr_9 [i_8] [i_8]);
        var_28 = (min(((((!-259213564780667930) << ((((137438953471 << (((arr_2 [9]) - 2937005331015322987)))) - 1099511627756))))), (arr_10 [i_8])));
        var_29 = (arr_31 [i_8]);
    }
    var_30 = (((-(max(var_7, var_5)))) | (+-274877906931));
    #pragma endscop
}
