/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 |= (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_21 = ((var_11 - (arr_3 [i_0])));
            var_22 = ((6822 << (arr_1 [i_1 + 1])));
            var_23 -= arr_4 [10] [10];

            for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
            {
                var_24 = (arr_0 [i_1 - 1]);
                var_25 = var_2;
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_26 = (!179);
                        var_27 = 6822;
                        var_28 = (((((arr_10 [i_0] [i_1 + 1]) * (-9223372036854775807 - 1))) <= (arr_6 [i_0] [i_1] [0])));
                        var_29 = (i_0 % 2 == 0) ? ((((arr_13 [i_0] [i_0] [i_3] [i_4] [4]) >> (((arr_5 [i_0] [i_0] [i_0] [i_1 - 1]) + 122))))) : ((((arr_13 [i_0] [i_0] [i_3] [i_4] [4]) >> (((((arr_5 [i_0] [i_0] [i_0] [i_1 - 1]) + 122)) - 116)))));
                    }
                    var_30 = var_19;
                    var_31 += (((arr_11 [i_3] [i_3] [i_3] [i_3]) == var_14));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_32 = (arr_14 [i_0] [i_0] [i_0] [14] [i_0] [i_0] [i_0]);
                        var_33 = (min(var_33, (arr_11 [i_3] [i_4] [i_3] [i_3])));
                        var_34 = (min(var_34, (((-(arr_6 [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_35 = 0;
                        var_36 = (((~(arr_13 [i_0] [i_1] [4] [i_4] [i_7]))));
                    }
                    var_37 = (min(var_37, (arr_5 [i_1 - 1] [i_3] [i_1 + 1] [i_1 + 1])));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_38 = ((!(arr_17 [i_1 - 1] [i_1 - 2] [i_1 - 1])));
                    var_39 = (min(var_39, ((((arr_19 [i_0] [i_3] [i_0]) * (arr_11 [i_3] [8] [i_1 + 1] [i_1 - 1]))))));
                    var_40 = ((-(((arr_16 [i_0] [i_1]) - 1597993639))));
                    var_41 = 3680947645;

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_42 = (min(var_42, (((~(arr_10 [i_3] [i_3]))))));
                        var_43 = (min(var_43, (arr_1 [i_0])));
                        var_44 -= (arr_2 [0] [i_3]);
                        var_45 = (max(var_45, 2696973657));
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_46 *= 0;
                    var_47 = 1020329009771129834;
                    var_48 = var_5;
                    var_49 = (arr_10 [i_0] [i_1 - 1]);
                }
                var_50 = var_11;
                var_51 = (58713 || var_4);
                var_52 &= ((var_16 == var_3) / 793069204);
            }
        }
        var_53 = ((~(arr_15 [4] [4] [i_0] [i_0] [i_0] [i_0])));
        var_54 *= ((var_8 | (arr_25 [4] [i_0] [1] [i_0] [i_0] [i_0])));
    }
    var_55 |= var_16;
    #pragma endscop
}
