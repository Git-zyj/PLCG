/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((var_3 && (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = 167;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] &= (max(-167, var_9));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_5] [12] [i_4] [12] [i_2] [12] [i_1] = 43337;
                            arr_19 [i_1] [14] [i_2] [i_3] [1] [i_5] [14] = min(var_10, (arr_7 [i_3] [i_5]));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [11] [i_2] [i_2 - 1] [1] [i_2] [i_2] [i_2] = 3753621178;
                            arr_24 [i_1] [i_3] [i_3] [i_4] [i_6] = ((!((max((arr_20 [i_1] [i_6 - 2] [i_3 - 2] [i_4] [i_3 - 2] [i_3 + 3]), var_17)))));
                            arr_25 [i_6] [i_4] [i_3] [i_2] [i_1] &= ((!(arr_22 [i_1] [i_1] [i_1] [i_1])));
                            arr_26 [i_1] [i_2] [12] [i_4] [i_1] = (!-1);
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            arr_31 [i_2] [i_3 - 1] [i_4] [i_7] = arr_11 [i_2 + 1];
                            arr_32 [i_7] [i_7] [i_7] [11] [i_7] [i_7] = (39216 != 43311);
                            arr_33 [i_1] [i_2 - 3] [i_1] [0] [i_7] = (1 >= 203);
                        }
                        arr_34 [i_1] [i_2 - 3] [i_3] [i_4] &= (arr_28 [1] [i_1] [1] [i_3] [3] [i_4] [i_1]);
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        arr_37 [i_1] = (((((!(!7168)))) > (max(65511, 85))));
                        arr_38 [i_3] [1] [i_3] [i_3 + 1] [i_8] = var_15;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            arr_43 [i_1] [10] [i_1] [i_1] [i_9] [i_10 - 1] = var_3;
                            arr_44 [i_1] [i_1] [i_1] [i_3] [i_1] [i_9] [i_9] = var_12;
                            arr_45 [i_10] [i_3] [i_3] [i_3 + 3] [i_2] [i_1] [i_1] = (((((((arr_40 [i_1] [i_2 - 2] [i_9]) < var_4))) + (arr_9 [i_1] [i_1]))) == (arr_12 [i_1] [1] [i_1]));
                        }
                        arr_46 [0] [i_1] [i_2] [i_2] [i_1] &= (arr_36 [i_1] [1] [i_9]);
                        arr_47 [i_1] [i_1] [1] [14] = var_18;
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        arr_52 [i_1] [i_2] [15] [i_11 - 1] [i_11 - 1] [i_11] = ((-((((arr_39 [i_3] [i_1] [i_3]) != var_7)))));
                        arr_53 [i_1] [14] [i_1] [i_1] = (arr_41 [i_11 - 1] [i_2 - 2]);
                    }
                    arr_54 [8] &= ((!((!(!var_14)))));
                    arr_55 [i_1] [i_2] [i_3] = ((-(((!(arr_1 [11] [11]))))));
                }
            }
        }
        arr_56 [14] [i_1] = (!-1);
        arr_57 [i_1] = ((!(arr_11 [4])));
    }
    for (int i_12 = 1; i_12 < 18;i_12 += 1)
    {
        arr_60 [i_12] = (arr_59 [i_12 + 1]);
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 17;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                arr_72 [i_13] = ((max(((~(arr_63 [i_16] [i_16])), -var_15))));
                                arr_73 [i_12 - 1] [i_13 + 3] [i_13 + 3] [i_15] [i_13] [i_13] = ((!(((~((var_1 / (arr_59 [i_12 + 1]))))))));
                                arr_74 [i_13] [i_13 + 2] [i_14] [i_13] [16] = (max(var_7, (min((~65535), (!var_9)))));
                            }
                        }
                    }
                    arr_75 [i_14] [1] [i_14 - 1] = -var_13;
                    arr_76 [i_12] [i_14] [18] = (arr_71 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_13 - 1] [i_12 + 1] [i_12 + 1]);
                    arr_77 [i_13] = ((!(((~(arr_63 [i_12] [i_14 + 1]))))));
                }
            }
        }
    }
    var_20 &= var_6;
    var_21 = ((!((min(var_3, (!178))))));
    #pragma endscop
}
