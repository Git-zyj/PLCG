/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 *= (~var_12);
        var_17 = (arr_1 [i_0 + 2] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max(157, 4139835861));
        arr_7 [i_1] = (-((((155131425 ? 155131439 : (arr_3 [i_1]))) - ((((arr_3 [i_1]) ? 127 : var_15))))));
        var_18 = (arr_5 [i_1]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_1] = (arr_10 [i_1]);
            var_19 = (min(var_19, (((~(((32762 && ((((((arr_8 [20]) + 9223372036854775807)) >> (var_1 - 20772))))))))))));
        }
    }
    var_20 = (!var_4);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_21 = 4139835871;

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_25 [i_3] [i_6] [i_3] [i_6] = (max((((!(arr_4 [i_3] [i_5])))), ((4139835879 ? (arr_1 [i_3] [i_4]) : ((-(arr_9 [i_3])))))));
                        var_22 = var_8;
                        var_23 = (var_11 >= var_14);
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_7] [i_7] = (((min(((2147483645 + (arr_2 [i_4] [i_7]))), (((4139835863 ? var_15 : 4139835850))))) < 35350));
                        var_24 = (min(var_24, ((((((max((arr_20 [i_7 + 3] [i_5] [i_3] [i_3]), 35339)))) ^ ((var_15 ? (arr_16 [i_3] [i_3] [i_7 + 2]) : (arr_17 [i_4] [i_4 - 2] [i_4 + 2]))))))));
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, (((max(((min((arr_5 [i_5]), var_6))), (min(var_7, var_15))))))));
                        var_26 *= 22;
                    }
                    for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_3] [i_5] [i_4] [i_4] = 16;
                        var_27 = ((((((arr_21 [i_9 + 1] [i_4 + 2] [i_4 + 2]) - -4226016417))) ? ((((min((arr_22 [i_3] [i_3]), var_15))) ? -105 : -21975)) : (((1643596560 || ((var_9 && (arr_26 [i_3] [i_3] [i_3] [i_3] [i_5] [i_9]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
