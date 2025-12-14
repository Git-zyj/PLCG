/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+(((-8976 + 2147483647) >> (11215 - 11207)))));
    var_20 = (max((max(((min(var_14, var_13))), ((var_12 ? var_5 : 35993612646875136)))), var_4));
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max(((-2012 ? (max(var_16, var_4)) : 1)), (arr_2 [3])));
                arr_5 [i_1] [i_1] [1] = ((((((max(var_15, var_1))) >= -var_1)) ? -1 : (arr_1 [i_0] [i_1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_6 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_19 [i_4] [i_4] [i_4 + 1] [i_5] [i_6] |= arr_7 [i_3];
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_6] = 12889;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_5] [i_4] |= (((arr_12 [i_3 + 1] [i_4 - 1] [i_4 - 2]) ? (arr_12 [i_3 + 1] [i_4 - 1] [i_4 - 2]) : (arr_12 [i_3 + 1] [i_4 - 1] [i_4 - 2])));
                            arr_25 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4] [i_4] = ((~var_4) ? 898469305973723039 : 14001396440701580726);
                            arr_26 [i_2] [i_4] [i_3] = 25844;
                            arr_27 [i_2] [i_2] [i_3] [i_3] [i_3] [i_5] [i_7] = (44 ? 29521 : (arr_21 [i_3] [i_4] [i_4] [i_4] [i_4]));
                        }
                        for (int i_8 = 4; i_8 < 12;i_8 += 1)
                        {
                            arr_32 [i_3] [i_3 - 1] [i_4 + 2] [i_8] = ((!((max((arr_17 [i_2] [9] [i_3 - 2] [i_4] [9] [i_3] [9]), var_15)))));
                            arr_33 [i_2] [i_3] [i_4] [i_3] [i_3] = (-((var_9 ? (arr_21 [i_2] [i_2] [i_2] [i_3 - 2] [i_4 - 1]) : var_2)));
                            arr_34 [i_3] = (arr_14 [i_2] [i_8] [i_8] [i_8]);
                            arr_35 [i_2] [1] [i_2] [i_5] [i_8] [i_3] = (max(((-((max(var_0, var_14))))), (26955 > 1)));
                        }

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_39 [i_3] [i_3] [i_4] [i_4 - 1] [1] [i_9] [i_4 - 1] = (!((max((arr_16 [i_3 - 1] [i_3]), var_3))));
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_9] = ((((((12889 ? var_0 : var_9)))) ? (((max((arr_37 [1] [i_3] [i_4] [i_5] [i_9]), var_4)))) : (((arr_8 [i_4] [i_9]) ? (max((arr_8 [i_2] [4]), (arr_17 [i_9] [i_3] [3] [i_5] [i_4 - 2] [i_3] [i_2]))) : var_17))));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_44 [i_3] = (((min(0, ((-67 ? (arr_18 [i_3] [i_3]) : 3627116245806011861)))) | ((~(max(11989, 12941145195835887788))))));
                            arr_45 [i_2] [i_3] [8] [i_4 + 2] [i_3] [i_5] [i_10] = -17741;
                        }
                        arr_46 [i_3] = var_16;
                    }
                }
            }
        }
        arr_47 [i_2] = (((13255631566084022808 ? (((var_15 >= (arr_18 [12] [12])))) : (arr_29 [i_2] [2] [i_2]))));
    }
    #pragma endscop
}
