/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] = 11405283431714135419;
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (((arr_2 [i_0] [i_0]) + var_8));
                }
            }
        }
        arr_10 [i_0] [i_0] = (~107);
        var_17 = var_5;
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_18 = (max(var_18, (min(((max((arr_16 [i_3] [i_3]), var_6))), ((~(~var_9)))))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_19 = ((((max((arr_18 [i_5 - 1] [i_5] [i_5 + 1]), 47812))) ? (((((-1724254387193298454 ? 154 : 3808017751))) & 2431035042764171794)) : (((~(~-26910))))));
                            var_20 = var_13;
                            var_21 = (max((((max((arr_3 [1] [i_3]), (arr_17 [i_7] [i_3]))) % (arr_15 [i_3]))), (((~((max(93, var_14))))))));
                            arr_24 [i_3] [1] [i_4] [i_5 + 1] [i_4] [i_6] [i_5 + 1] = var_0;
                        }
                    }
                }
            }
            var_22 = 1;
            arr_25 [i_4] [2] = (min((((((~(arr_23 [i_3] [i_3] [i_3] [i_4] [3] [11] [i_3])))) ? (max((arr_0 [i_4] [i_3]), (arr_3 [i_4] [i_4]))) : (((arr_16 [i_4] [i_4]) ? (arr_11 [i_3] [i_3]) : (arr_13 [i_3]))))), 19106));
        }

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_28 [i_3] = arr_26 [i_8];
            var_23 = 26910;
            var_24 &= (max(((((~(arr_5 [i_3] [i_3] [i_8]))))), ((~((1 ? -26884 : (arr_0 [i_3] [i_3])))))));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            arr_31 [i_9] = var_16;
            var_25 = (min(var_25, ((var_8 != (arr_5 [i_9] [i_3] [i_9])))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            arr_34 [i_3] [i_10] = (((arr_5 [i_10] [i_10] [1]) - ((((arr_30 [i_10]) ? (arr_33 [i_3]) : var_7)))));
            arr_35 [i_10] = (arr_4 [i_10] [i_10] [i_10]);
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_44 [i_12] [i_10] [i_11] [i_11] [i_10] [i_3] = (arr_41 [i_10]);
                        arr_45 [i_10] [i_10] [i_10] = ((((var_7 ? var_13 : var_3)) | (arr_42 [i_3] [i_10] [i_11 + 1] [i_12])));

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_26 = ((11405283431714135419 & (((arr_17 [i_3] [i_13]) ? 104 : var_4))));
                            var_27 -= (((arr_46 [8] [i_13] [i_12 - 1] [i_12 - 1] [i_13]) < (arr_46 [i_11 - 1] [i_13] [i_12 - 1] [i_13] [4])));
                        }
                        var_28 = (~(arr_47 [i_11 + 2]));
                    }
                }
            }
            arr_50 [i_3] [i_10] = ((~(-32767 - 1)));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_29 |= ((-(arr_0 [i_3] [i_14])));
            var_30 = (((((65532 ? (arr_26 [i_14]) : -5374183504468893990))) ? var_10 : ((11714092031786009870 ? 16916 : var_15))));
            arr_53 [i_14] [i_14] = var_0;
        }
        var_31 = (max(var_31, (((((max((max(var_1, 26910)), (arr_20 [i_3] [i_3] [i_3])))) ? var_2 : ((max((arr_37 [i_3] [i_3] [i_3] [i_3]), (arr_29 [i_3] [i_3])))))))));
    }
    var_32 = (max(var_32, var_4));
    #pragma endscop
}
