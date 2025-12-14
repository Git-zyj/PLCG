/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = (((((arr_0 [i_0]) + 2147483647)) >> (((arr_0 [i_0]) + 24894))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                arr_7 [i_2] |= 0;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = (arr_10 [i_1]);
                            var_17 = (arr_11 [i_0] [i_1] [i_2]);
                            var_18 ^= ((!((!(arr_3 [i_2])))));
                        }
                    }
                }
                var_19 = (((var_3 ? (arr_10 [i_1]) : 2052821752)));
                var_20 = 2052821752;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_21 = ((var_0 <= (arr_12 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0])));
                var_22 = (arr_14 [i_0] [i_1] [i_1] [i_1]);
            }
        }

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_19 [i_6] [i_0] = ((((~((~(arr_13 [i_0] [i_0] [i_6]))))) & (~44351)));
            var_23 = (max(var_23, ((min(2011021758, 7472)))));
            var_24 = ((-(((arr_11 [i_0] [i_0] [i_0]) ? var_9 : (arr_11 [i_0] [i_6] [i_0])))));
            arr_20 [i_0] [i_0] [i_6] = var_10;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_25 = (min(var_25, (((var_6 / (((13198422924480720679 ? ((2052821732 ? 16827 : 3056402906)) : 1))))))));
        var_26 = (max(var_26, ((((min(var_4, var_5)) - (((((arr_21 [i_7]) & var_8)) | var_9)))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_27 = (((arr_23 [i_11] [i_10] [i_7]) << (((((min(-16827, (arr_29 [i_9] [i_8]))) & (arr_23 [i_7] [i_7] [i_9]))) - 1301892205824708617))));
                            var_28 = (max(var_28, ((!((min(((247 ? var_12 : (arr_24 [i_7]))), ((max(-22177, 1))))))))));
                        }
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_35 [i_7] [i_10] [i_12 - 1] = arr_30 [i_12];
                            arr_36 [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_12] [i_12] = var_6;
                            var_29 = ((!(((!16821) == 1))));
                        }
                        var_30 -= (((arr_32 [i_8] [i_9 + 3] [i_9] [i_9 + 2] [i_9 - 4] [i_9 + 1]) >= (((arr_21 [i_9 + 1]) + (arr_32 [i_9] [i_9 + 2] [i_9 - 4] [i_9 - 3] [i_9 + 2] [i_9 - 2])))));
                    }
                }
            }
        }
        arr_37 [i_7] [i_7] = ((((max(1, 2242145545))) ? var_6 : -41));
    }
    var_31 ^= var_12;
    var_32 &= (!(((var_13 ? -24 : (!var_11)))));
    var_33 = ((-960621135 < (((!((min(var_11, var_0))))))));
    #pragma endscop
}
