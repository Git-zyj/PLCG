/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 &= (max(9395484767476699329, (((!((((arr_0 [i_0]) ? (arr_0 [i_0]) : 52))))))));
        var_15 = 9051259306232852284;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                arr_7 [i_2] [i_2] [i_2] = (((((((arr_6 [i_1] [i_2] [i_2]) ? -127 : var_11))) ? 204 : ((-(arr_2 [i_1] [i_2]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((!(arr_1 [i_4]))))));
                            var_17 = ((70 ? (~var_0) : -1331324764));

                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_18 = (((((~(arr_12 [i_2])))) ? ((var_4 ? (arr_3 [i_4]) : (((var_2 ? 1 : var_5))))) : ((((arr_10 [i_2] [i_4]) + ((var_8 ? var_3 : var_8)))))));
                                var_19 = (max(var_19, (((-(~32767))))));
                                arr_14 [i_1] [i_2] [i_2] [i_2] [i_2] [i_4] [i_5] = (((180 + 29808) ? (((((max(204, 1446021645))) ? 127 : -1915486513))) : -9051259306232852267));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_20 = -1915486513;
                                var_21 = ((((1915486513 ? -36 : var_0)) / (((arr_15 [i_1] [i_2] [i_3] [i_1] [3]) - var_2))));
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                arr_21 [i_1] [i_3] [i_2] = 9395484767476699329;
                                arr_22 [i_1] [i_1] [i_2] [9] [i_2] [i_4] [i_2] = -1915486515;
                                var_22 = ((-(((arr_4 [i_1]) ? (arr_13 [i_1] [i_2] [i_2] [11] [i_4] [i_7]) : (-127 - 1)))));
                            }
                        }
                    }
                }
                var_23 = ((((max((arr_11 [i_1] [i_1] [i_2] [i_2]), (arr_11 [i_1] [i_1] [i_2] [i_2])))) + ((var_11 ? 189 : (arr_11 [i_1] [11] [i_2] [i_2])))));
                arr_23 [i_2] = 85;
            }
        }
    }
    #pragma endscop
}
