/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_4 ? var_4 : var_13))) ? (((((var_9 ? var_5 : 3521294680))) ? (~var_10) : (min(var_6, 122880)))) : (((((var_9 ? var_10 : var_6)) | (~var_3))))));
    var_16 = ((var_0 >> (122883 - 122881)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((-((((7 ? 35 : 122880)) | 7)))))));
                                var_18 = (min((((arr_4 [i_0 + 3] [i_2 + 1]) ? (arr_1 [i_2 - 1] [i_0 + 2]) : (arr_4 [i_0 - 3] [i_2 - 1]))), ((~((-(arr_6 [i_3] [i_1] [i_2 + 1] [i_2])))))));
                                var_19 = ((((((!(((var_0 ? (arr_4 [i_2] [i_0]) : (arr_1 [i_2] [i_2 - 2])))))))) - ((+(max((arr_12 [i_4] [5] [i_2] [5] [0] [5]), 249))))));
                            }
                        }
                    }
                    var_20 |= ((((249 ? 4294844430 : 7)) * (((-var_10 ? (arr_0 [i_2] [i_1]) : var_10)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_2] [4] [i_2] [i_2] [i_6] = ((max((arr_13 [i_0 + 1] [i_2] [2] [i_5] [i_0 + 1]), (arr_13 [i_0] [i_2] [i_0] [i_5] [i_6]))));
                                var_21 = (min(var_21, var_2));
                                var_22 = ((-(!var_13)));
                            }
                        }
                    }
                    var_23 -= min((arr_2 [i_2 + 1] [i_0 + 3]), (min(122862, 4294844415)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_24 = (arr_2 [i_7] [i_7]);
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_25 = ((!((((arr_30 [i_9 + 1] [i_9 + 3] [i_9 - 1]) ? (arr_30 [i_9 + 1] [i_9 + 3] [i_9 - 1]) : (arr_30 [i_9 + 1] [i_9 + 3] [i_9 - 1]))))));
                                arr_38 [i_10] [i_8] [i_8] [i_8] [i_8] = ((+(((arr_2 [i_9 - 2] [i_9 - 1]) ^ (arr_30 [i_8] [i_8] [10])))));
                                arr_39 [8] [i_8] [i_10] [i_8] [i_8] = ((((((!4294844433) ? (((((arr_18 [i_7] [i_8]) || var_1)))) : (arr_26 [i_10] [i_8])))) ? ((max(((((arr_30 [i_8] [i_8] [i_7]) == var_2))), (arr_16 [i_10])))) : ((((arr_3 [i_7] [i_10] [i_11]) < 4294844455)))));
                            }
                        }
                    }
                }
                var_26 = (min(var_26, (arr_29 [i_7] [i_7] [i_7] [i_8])));
            }
        }
    }
    var_27 = (((4294844430 ? var_10 : ((4294844415 ? 4294844414 : 4294844433)))));
    #pragma endscop
}
