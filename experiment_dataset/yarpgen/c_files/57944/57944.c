/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((-(((min(var_13, 1)) | (!65518)))));
                var_15 = (min(var_15, ((((+(max((arr_1 [i_1]), (arr_3 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [7] [i_2] [i_0] = var_3;

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = (5 || 1);
                                arr_15 [i_4] [i_4] [6] &= (((max((((arr_7 [i_2]) ^ (arr_7 [i_4]))), (arr_6 [i_4] [i_2] [i_3]))) - var_2));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_2] [i_1] [i_3] = (arr_12 [i_1] [i_4]);
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = arr_0 [i_0];
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] &= (max((((arr_6 [i_2] [i_1] [i_1]) * 65491)), (((max(var_12, (arr_3 [i_0] [i_5]))) * var_8))));
                                var_16 = (min(var_16, ((!((((((var_10 ? var_3 : var_12))) ? ((var_13 ? -1986876929 : (arr_17 [i_3] [i_1] [i_3]))) : ((-(arr_10 [i_1] [i_2] [i_1] [i_0]))))))))));
                            }
                            var_17 = ((((((((arr_3 [i_0] [i_0]) & var_3))) ? ((var_13 ? -1 : var_1)) : ((min(var_1, var_1)))))) ? (max(7818, (((arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2]) ? var_7 : 15455)))) : (((!((((arr_18 [i_3] [i_2] [9] [i_1] [i_0] [i_0]) ? 118 : var_5)))))));
                        }
                    }
                }
                arr_21 [i_0] [i_1] = (arr_18 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
