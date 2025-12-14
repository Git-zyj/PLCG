/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((-1390416275 | 36552) - (((((arr_0 [i_0]) && -29056)) ? -112 : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (((arr_4 [i_0] [i_1] [i_2]) ^ var_5));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = (arr_5 [i_0]);
                }
            }
        }
        arr_10 [i_0] = (((arr_2 [i_0]) * ((~((1 | (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_11 = (max(var_11, 14872));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_12 += var_8;
                            var_13 = (min(var_13, (!1058284738)));
                            arr_24 [i_3] [i_4] [i_5] [i_6] = (((((-630500940 / (arr_19 [i_4] [i_4])))) ? ((-(arr_11 [i_3]))) : 0));
                            var_14 = 14671;
                            var_15 = (max(var_15, ((((var_3 * 13872572941472889894) ? 4294967282 : (arr_22 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3 + 3]))))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_16 += (arr_23 [i_4] [i_3 + 1]);
                            arr_27 [i_3 + 2] [i_4] [i_3 + 2] [i_8] [i_8] = (arr_4 [i_3] [i_8] [i_3]);
                            var_17 = (max(var_17, ((((((-(arr_25 [i_3] [i_4] [i_4] [i_6] [i_8] [i_6] [i_8])))) ? -var_4 : -1184659439)))));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_18 = (max(var_18, ((((arr_29 [i_9 - 1] [i_5] [i_5] [1] [i_3] [i_6]) * (arr_18 [i_9 - 1] [i_4] [i_5] [i_6] [i_4] [i_9]))))));
                            arr_31 [i_9] [i_4] [i_4] [i_6] [i_9] = ((!5) * (arr_21 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_3 + 3]));
                            arr_32 [i_9] [i_9] [i_5] [i_9] [i_3] = (((((arr_30 [i_4] [i_3] [i_4] [i_4] [i_3] [i_3 + 2]) ? (arr_1 [i_9]) : 13872572941472889880)) + (arr_2 [i_3 + 3])));
                        }
                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            var_19 = ((var_8 ? 14 : (arr_7 [i_3 + 2])));
                            var_20 -= (((arr_28 [i_3 - 1]) + (arr_28 [i_3 + 1])));
                            var_21 = (max(var_21, (((3623576630431639579 || -29) * (((!(arr_22 [i_6] [i_5] [i_4] [i_3]))))))));
                        }
                    }
                }
            }
            arr_35 [i_3] &= ((-(arr_25 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 1] [i_3] [i_3 - 1])));
            arr_36 [i_3] = (((~var_3) < (arr_26 [2] [i_4] [i_3] [i_4] [i_4])));
        }
        arr_37 [i_3] |= (arr_19 [i_3] [i_3]);
        arr_38 [i_3] [i_3] = (((arr_30 [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3]) ? (arr_30 [i_3] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3]) : (arr_13 [i_3 + 2] [1] [i_3])));

        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            var_22 = arr_30 [i_3] [i_11 + 1] [i_3 + 2] [i_11 + 1] [i_3] [i_3 + 1];
            var_23 = (min(var_23, (((1 ? (arr_40 [i_11 + 1] [i_11]) : (arr_40 [i_11 + 1] [i_11 + 1]))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    {
                        var_24 = (max(var_24, (arr_13 [11] [i_12] [i_11])));
                        var_25 = (min(var_25, (arr_0 [i_13 - 2])));
                        var_26 *= (arr_25 [i_3] [11] [11] [11] [i_13] [i_13] [i_13 - 2]);
                    }
                }
            }
        }
        var_27 = -1;
    }
    var_28 = var_7;
    #pragma endscop
}
