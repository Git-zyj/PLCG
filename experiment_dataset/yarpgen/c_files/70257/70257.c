/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = (((6133823456096787653 ? 65524 : (!158))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 1]) ^ (arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 2])))) ? ((~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 2]))) : ((var_14 | (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2])))));
                    var_19 = (((arr_8 [i_0 - 1] [i_0 + 2] [i_1 - 2]) | (arr_3 [i_0 + 1])));

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_20 = (max(14764, 87));
                        var_21 = 14452;
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_22 = 14759;

                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_23 = ((1915 ? -6133823456096787646 : 797901978));
                            var_24 = ((((var_1 ^ (arr_16 [1] [i_4] [10] [i_0] [i_0]))) ^ -1889));
                            var_25 = (arr_4 [i_1] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_26 = (min((arr_12 [i_0] [i_0] [i_2] [i_1] [i_6]), var_11));
                            var_27 = 976049387;
                        }

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_28 = -var_15;
                            var_29 &= (min(var_6, var_8));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_30 = (!-var_9);
                            var_31 = (max(var_31, 1));
                            var_32 = (max(var_32, ((max((((((520410488 ^ (arr_13 [5] [i_2] [i_4] [i_8])))) ? (arr_1 [i_0 - 2] [1]) : ((886121315 ^ (arr_10 [i_0 - 1] [i_1] [i_4] [i_8]))))), ((var_12 ? ((min(-1915, 169))) : 6133823456096787641)))))));
                            var_33 = (min(var_33, var_3));
                        }
                        var_34 &= 16777216;
                    }
                }
            }
        }
        var_35 = var_3;
        var_36 = var_6;
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        var_37 = 14759;

        for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_38 = ((max((~1), (min((arr_28 [i_9] [i_9 + 1] [i_10]), (arr_23 [i_9]))))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_39 = var_6;
                            var_40 = ((((var_11 ^ (arr_24 [i_9]))) ^ (~var_11)));
                        }
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
        {
            var_41 = (arr_31 [i_9] [i_9]);
            var_42 = (((((arr_28 [i_14 + 1] [i_14 + 1] [i_14]) ? (arr_28 [i_14 + 2] [i_14 + 2] [i_14]) : (arr_36 [i_9 + 1]))) ^ var_13));
        }
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        var_43 = ((+(max((arr_39 [i_15]), -86))));
        var_44 = 0;
        var_45 = ((!((max((arr_26 [i_15] [4] [4]), (((~(arr_38 [i_15] [22] [2])))))))));
        var_46 |= min(((((min(1, var_10))) ^ (min(242, -388865167)))), 1);
    }
    for (int i_16 = 3; i_16 < 10;i_16 += 1)
    {
        var_47 = (~var_11);
        var_48 = ((!((min(var_7, (arr_6 [i_16] [i_16] [i_16]))))));
        var_49 = ((-(arr_37 [18])));
    }
    var_50 = var_12;
    #pragma endscop
}
