/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((28510 ? 113968594136483213 : -18175))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((arr_0 [i_0]), ((-(arr_0 [i_0])))))) ? ((var_9 ? (((-3448807420368151505 ? 37026 : var_4))) : var_8)) : 2996517332573212381));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1 - 1] [i_1] [i_0] = (arr_3 [i_0] [i_1 + 2] [i_0]);
            arr_6 [i_0] [i_0] [i_1] = (!5452653719942098609);
            arr_7 [i_0] [i_0] [i_1 + 3] = (((arr_3 [i_0] [i_1 - 1] [i_1]) ? (arr_3 [i_0] [i_1 + 3] [i_1]) : (arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3])));
            arr_8 [i_0] [i_1] [i_1 + 2] = (((arr_3 [i_0] [i_1 - 2] [i_1]) ? 18174 : (arr_3 [i_1 + 1] [i_1] [i_1 + 3])));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] = ((16012 <= (arr_1 [i_0])));
            arr_13 [i_0] [i_2] = (((arr_0 [i_0]) ? (~4724) : 32621));
            arr_14 [12] [i_2 + 3] [13] = (((arr_1 [i_2 + 2]) <= 60812));
            arr_15 [i_0] [i_2 - 3] [i_2 - 3] = (arr_11 [i_2 + 3]);
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_27 [i_0] [10] [i_0] [i_5] [i_0] [i_0] = (((((5452653719942098592 ? 8965 : (arr_0 [8])))) && ((!(arr_3 [i_3] [i_3] [i_4])))));
                            arr_28 [i_0] [i_3] [i_4] [i_5] [13] = (((((31 & ((max(-15996, 4714)))))) ? (arr_18 [i_3] [i_5] [i_6]) : (arr_20 [i_0])));
                            arr_29 [i_0] [i_5] [14] [i_0] [i_0] = arr_0 [i_0];
                            arr_30 [i_5] [i_5] [i_3] [i_3] [i_5] = (max((((((max(var_4, var_0))) ? 4729 : ((max(15995, -22301)))))), (max(60390, -7008))));
                        }
                    }
                }
            }
            arr_31 [i_0] [i_3] [i_0] = arr_26 [i_0] [i_0] [i_0] [i_3] [i_3];
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_35 [i_7] = 613923104326519870;
            arr_36 [i_7] [i_0] [i_7] |= (~(((arr_34 [i_7]) ? ((30798 ? -16384 : (arr_1 [i_7]))) : (arr_21 [i_0] [i_7] [3]))));
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_39 [i_8] [11] = 60812;
        arr_40 [i_8] = 12051;
    }
    #pragma endscop
}
