/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 >> (var_2 - 839002056)));
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = -var_9;
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 -= (((3536894856 != 3336164934) < (arr_5 [i_0])));
            var_14 -= (arr_7 [i_0] [i_1] [i_1]);
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = (arr_0 [i_2]);
        arr_12 [i_2] = (13066387646000746364 - 5380356427708805253);
        var_15 += 5380356427708805256;
        var_16 = (arr_2 [i_2]);

        /* vectorizable */
        for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_17 = ((((((var_3 <= (arr_13 [i_3] [i_2] [i_2]))))) * 13066387646000746366));
            arr_15 [i_2] [i_2] [i_3] = (arr_5 [i_2]);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_18 = 13066387646000746351;
            var_19 = (((~13066387646000746338) == var_9));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_20 += (~13066387646000746355);
                var_21 |= ((-((((arr_9 [i_4 - 1]) >= var_5)))));
                var_22 = (arr_0 [i_2]);
                var_23 = ((5380356427708805254 ? var_7 : (arr_8 [i_2] [i_4 + 1])));
            }

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                var_24 = (min(var_24, (var_1 % 13066387646000746368)));
                var_25 = (arr_21 [i_4] [i_4 - 1] [i_4] [i_4 + 1]);
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_30 [i_7] [i_7] = ((5380356427708805257 ? (arr_17 [i_7]) : (arr_17 [i_7])));

        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            var_26 = (((13066387646000746380 ? 13066387646000746373 : (arr_5 [i_7]))));
            var_27 = (13066387646000746349 % 13066387646000746365);
        }
        var_28 += (((arr_29 [i_7]) - 13066387646000746368));
    }
    var_29 = 5380356427708805234;
    #pragma endscop
}
