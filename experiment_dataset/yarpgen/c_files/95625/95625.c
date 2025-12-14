/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 -= ((max((max(131, 4204059740)), ((min(var_19, var_11))))));
                                var_21 = (min(var_2, (((var_5 && (arr_8 [i_4 + 4] [i_2 - 3] [i_2 - 1]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_22 = (max((arr_1 [i_0]), (((!(var_2 || var_5))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_18 [i_1] [i_0] [i_1] [i_1] [i_6] [i_7] = ((((max(65533, 16))) ^ var_12));
                                arr_19 [i_0] [i_1] [i_5] [i_5] = ((var_13 >> (-var_4 - 211)));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_1] [i_8] = ((((arr_16 [i_0] [i_0] [i_8] [i_1] [i_0]) + var_2)) | (min((var_8 / var_1), (arr_11 [i_0] [i_1] [i_1]))));
                    arr_24 [i_0] [i_1] [i_8] = (((min((!var_15), (max(var_15, (arr_15 [i_0] [i_0] [i_0] [i_1] [i_8] [i_8]))))) >= ((511 >> (219 - 213)))));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_23 = (max(var_13, (min((((var_17 ? (arr_10 [1] [i_1] [i_1] [i_1] [i_1]) : var_19))), (~var_17)))));
                    var_24 = max((((~((var_9 ? var_8 : (arr_22 [i_1])))))), (max(var_5, (min((arr_7 [i_0] [i_0] [i_1] [i_1] [i_9]), (arr_8 [i_0] [i_0] [i_9]))))));
                    var_25 = (max((min(4294967295, (arr_11 [i_0] [i_1] [i_1]))), ((min((min(40, -2608)), -107)))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, ((max((max((!var_10), ((var_8 ? (arr_6 [i_10] [i_10] [i_10] [i_1] [i_0]) : (arr_27 [i_0] [i_1] [i_0]))))), var_19)))));
                    var_27 = (min(var_27, ((min(((max(var_13, (arr_15 [i_0] [i_0] [i_0] [i_1] [i_10] [i_10])))), (min((((var_11 ? var_18 : var_6))), var_13)))))));
                }
                arr_31 [i_0] [i_0] [i_1] = ((-((~(((arr_2 [i_0] [i_0] [i_1]) ^ var_18))))));
                var_28 -= ((-((var_4 ? var_2 : 160))));
            }
        }
    }
    var_29 = var_18;
    var_30 = 124;
    #pragma endscop
}
