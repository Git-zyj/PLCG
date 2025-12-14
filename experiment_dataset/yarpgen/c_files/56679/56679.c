/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_8);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((!(arr_0 [i_0])))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_5 [1] [i_1 - 2] = -235;
            var_12 = (min(var_12, (((~(~var_7))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = (min(var_13, var_0));
            arr_10 [i_2] [i_2] [i_0] = (!var_10);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = var_3;
            var_14 = ((((~(arr_8 [i_0])))));
            arr_15 [i_0] [i_0] [i_3] &= (~33);
            var_15 = ((-(~33)));
            arr_16 [i_0] [i_3] [i_3] = var_7;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_16 += (~152);
            arr_21 [i_0] [i_4] = ((!(arr_1 [i_4])));
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_34 [i_8] [i_7] [i_6] [i_6] [3] = (~var_5);

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_38 [i_5] [i_6] [i_7] [i_8 + 1] [i_6] [i_7 + 4] [i_7] = ((-((-((~(arr_3 [i_5] [i_5])))))));
                            var_17 -= ((-(arr_37 [i_9])));
                            arr_39 [i_6] [i_5] [i_6] [i_7 + 3] [i_8] [i_9] [i_9] = 98;
                            arr_40 [i_5] [i_6] [i_7] [i_6] [i_9] [10] = 106549834;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_18 = (min(var_18, var_0));
                            arr_44 [i_5] [i_5] [i_6] [i_5] [11] [i_5] = (!104);
                            var_19 = (max(var_19, -var_2));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_20 = (max(var_20, -1));
                            arr_48 [i_6] = (~91);
                            var_21 = (!102);
                            var_22 = var_3;
                        }
                        var_23 = (((!(!106549828))));
                        var_24 = (max(var_24, var_4));
                    }
                }
            }
        }
        var_25 -= (((~(~-675576627))));
        arr_49 [i_5] [i_5] = (-((~(arr_12 [i_5] [i_5] [i_5]))));

        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        var_26 += (+-0);
                        arr_60 [i_12] [i_13 + 2] [i_13 - 1] = 2246150807;
                    }
                }
            }
            var_27 -= (~-var_0);
        }
        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            var_28 = (max(var_28, (!-483399258814890854)));
            var_29 = (max(var_29, -var_0));
        }
    }
    for (int i_16 = 2; i_16 < 16;i_16 += 1)
    {
        var_30 = (min(var_30, ((((!(arr_9 [i_16 + 2] [i_16])))))));
        arr_65 [15] [i_16 + 3] = var_8;
        arr_66 [i_16 - 2] = ((-((((-(arr_63 [i_16])))))));
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        var_31 = (min(var_31, (arr_52 [i_17] [i_17] [i_17])));
        arr_69 [i_17] [i_17] = ((((!(!var_4)))));
        arr_70 [2] |= 35031;
        var_32 = (!7);
    }
    #pragma endscop
}
