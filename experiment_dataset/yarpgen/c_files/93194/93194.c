/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (min(67553994410557440, 115));
        arr_5 [i_0] = (((-(arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((var_0 ? 1 : (((min(var_7, (arr_8 [i_1])))))));
        arr_11 [i_1] = ((((((((arr_6 [i_1] [i_1]) ? (arr_2 [i_1]) : 2773714817))) ? ((min(1, 127))) : var_4)) ^ ((~(~214930947)))));
        arr_12 [i_1] = ((((1 ? (arr_7 [i_1]) : (arr_7 [i_1]))) > (var_3 + 13779691942863163928)));
        arr_13 [i_1] [i_1] = (((((10 & 1) ? (min(57349, 14334189216835521101)) : (~4294967277))) ^ (arr_9 [i_1])));
    }
    var_10 = (min(var_6, var_8));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_16 [i_2] = -10718236633224892819;
        arr_17 [i_2] = (((29 && 7) || ((((arr_15 [i_2]) ? (((arr_15 [i_2]) ? var_4 : (arr_14 [i_2]))) : (~1))))));
        arr_18 [i_2] = ((1 ? 40 : 1));
        arr_19 [12] = ((!((((-127 - 1) ? (((var_9 ? 0 : var_5))) : var_4)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_26 [i_3] [i_4] [i_5] = (((arr_21 [i_4 + 1]) ? (arr_21 [i_4 + 1]) : (arr_21 [i_4 + 1])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_31 [i_6] = var_8;
                            arr_32 [i_5] [i_6] [i_3] [i_5] = ((((-49 && (arr_24 [i_3] [i_4] [i_7]))) ? (((176837404 ? 1 : var_6))) : var_9));
                        }
                    }
                }
            }
            arr_33 [i_3] = (((arr_29 [i_3] [i_3] [i_4 - 2] [i_3] [i_3] [i_3] [i_4 - 1]) ? (arr_27 [i_3] [8] [i_4 - 1] [10] [i_3]) : var_5));
            arr_34 [i_3] = ((~(arr_28 [i_3] [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 2])));
            arr_35 [i_3] [i_4] [i_3] = (arr_27 [i_3] [i_4] [i_4] [i_3] [i_4 - 1]);
        }
        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
        {
            arr_38 [i_3] [14] = ((-(arr_20 [i_3] [i_3])));
            arr_39 [i_3] [i_8] = (((arr_28 [i_8 - 1] [1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]) <= (arr_22 [i_3] [i_8 + 1] [i_8 - 2])));
            arr_40 [i_3] = 22814;
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_52 [i_12] = (((arr_45 [i_10 - 2] [i_12 + 3]) & (arr_45 [i_10 + 2] [i_12 + 2])));
                                arr_53 [i_3] [14] [i_10] [7] [7] = ((1 > (arr_48 [i_3] [i_9] [i_10] [i_11] [i_12])));
                            }
                        }
                    }

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_56 [i_3] [i_9] [i_10 + 2] [i_3] = (--314021366);
                        arr_57 [i_3] [i_9] [i_9] [i_13] = (((arr_55 [i_3] [i_9] [i_9 + 1] [i_10 + 1]) != 111));
                    }
                }
            }
        }
    }
    var_11 = (min((((!20082) ? (2773714840 == var_1) : (~var_4))), (~1521252471)));
    #pragma endscop
}
