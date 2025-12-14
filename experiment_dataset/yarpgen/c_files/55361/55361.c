/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (-109 + var_12)));
                    arr_8 [i_0] [i_1] [8] [i_2] &= max(93, ((((arr_2 [i_1]) ? var_2 : var_11))));
                    arr_9 [8] |= 2093433197540456569;
                    arr_10 [i_0 + 1] [i_1] [i_1] [i_1] = (min((arr_6 [i_0 - 1] [i_0] [i_0 - 1]), 1285681117));
                }
            }
        }
        arr_11 [i_0] = (max((((arr_6 [i_0] [i_0 - 1] [i_0]) ? var_16 : var_17)), (((arr_4 [i_0 + 1] [14]) / (arr_4 [i_0] [6])))));
        arr_12 [i_0] = (((arr_0 [i_0 - 1] [i_0]) - (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))));
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4 + 1] [i_5] = ((((max((arr_14 [i_4 - 1]), var_15))) % ((max((arr_14 [i_3]), (arr_19 [i_3] [i_4] [i_3] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_19 = (min(((((((max(var_14, 24592)))) > (max(8167936339899973300, 2401))))), (arr_17 [i_4] [i_5])));
                                var_20 = -80;
                                var_21 *= ((min((((var_3 || (arr_2 [i_5])))), ((63133 ? var_1 : var_13)))));
                                arr_28 [i_3 + 1] [7] [i_6] = min((((((510657346 >> (250 - 227)))) ? 202 : ((((arr_2 [i_5]) ? var_12 : (arr_24 [i_3] [i_4] [i_3] [1] [i_7] [i_4 + 1])))))), ((((((!(arr_24 [i_3] [i_3 - 1] [i_4] [i_3] [i_6] [i_7])))) + (arr_15 [i_4 - 1] [i_3 - 2] [i_7 + 1])))));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        arr_32 [i_3] [i_4] [i_5] [i_8 - 1] = max(8974439612247200272, ((max((!var_13), ((var_8 + (arr_30 [i_3] [i_4] [i_5] [i_8 - 2])))))));
                        var_22 = (((arr_31 [i_3] [i_4] [i_5] [i_8]) < var_11));
                    }
                    arr_33 [i_3] [i_3] [i_5] [i_3] = (arr_29 [i_3] [i_4] [i_5] [i_5]);
                }
            }
        }
    }
    var_23 = (63114 + 31);
    #pragma endscop
}
