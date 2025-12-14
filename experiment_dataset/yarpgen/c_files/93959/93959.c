/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] = (!1420410007);
        var_18 = (arr_3 [i_0] [7]);
        var_19 = (min(var_19, ((max((max(1261108896, 1261108896)), (1261108896 ^ 2874557288))))));
        var_20 |= ((18 + (((((min(-3, var_1))) || (min(var_2, 1)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_12 [1] [i_2] [i_3] [7] = (arr_1 [i_1]);
                    var_21 &= 2874557289;
                    arr_13 [i_1] [8] [i_1] = (arr_10 [14] [i_2] [i_2]);
                    arr_14 [1] [0] [i_1] [i_1] = (max(var_1, 0));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_22 = ((-851310337 ? ((53 >> (((max(1, (arr_1 [i_1]))) - 1898939786)))) : (max((~262931582), (max((arr_16 [4] [4] [i_2] [i_1]), 2054993789))))));
                        arr_17 [i_3] [i_2] [1] = (((((arr_16 [i_4] [i_3] [10] [i_1]) + (max(-6, (arr_6 [3] [3]))))) < 14));
                        var_23 = (max((((-32757 != (1 != 26)))), ((var_11 ^ ((max((arr_3 [1] [i_2]), (arr_11 [i_1] [i_1] [i_1]))))))));
                        var_24 = max(-91, (((min(var_0, var_6)) & (~var_8))));
                        arr_18 [i_1] = (arr_0 [i_1]);
                    }
                }
            }
        }
        var_25 = (~1261108896);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_26 = ((-(max(2874557299, (arr_26 [i_5] [9] [i_6] [i_8] [i_8])))));
                        var_27 = (arr_1 [1]);
                    }
                }
            }
        }

        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            var_28 = ((3 ? ((var_0 ? (arr_25 [0] [i_9 + 2] [8]) : ((1 ? 46169 : 1)))) : (117365712 != var_5)));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_40 [i_5] [i_9 + 1] [0] [i_5] [i_11] [i_11] [i_11] = -499754376883800774;
                            var_29 *= (((arr_33 [i_5]) == var_7));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_16;
    var_31 += (((-39 + 2147483647) >> ((5390717346596303781 ? (min(var_13, var_2)) : (((max(-58, -22))))))));

    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_43 [11] = var_11;
        var_32 = var_8;
        arr_44 [i_13] [i_13] = (3033858399 > 38872);
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    {
                        var_33 = var_16;
                        arr_54 [8] [7] [i_16] = 13339741537436717946;
                        var_34 &= (arr_6 [i_14] [i_16]);
                        var_35 = (((arr_51 [11] [1] [i_15]) ? (arr_21 [i_16]) : (arr_37 [i_16] [i_15] [i_14] [i_16])));
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_36 = ((var_3 ? 2147483646 : (arr_2 [i_17])));
        var_37 = (min(var_37, (((-((((((13339741537436717949 >> (var_3 + 127)))) && (arr_55 [i_17] [2])))))))));
    }
    #pragma endscop
}
