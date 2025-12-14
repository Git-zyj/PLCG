/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((((min(1, var_5))) ? (arr_1 [i_0]) : var_3))) ? (var_3 < var_4) : (((!((!(arr_1 [i_0])))))));
        arr_3 [i_0] = (max(1889554474, var_2));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_12 [i_2] = ((!(((((((arr_11 [7] [i_2] [0]) ? -1468 : (arr_0 [i_1])))) ? (arr_9 [i_1] [i_1] [i_1] [i_1]) : (((var_6 ? var_2 : (arr_10 [i_1] [i_1] [8])))))))));
                    var_14 = (~(arr_7 [i_1] [i_2] [i_3]));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_15 &= (min((((max(var_8, 1889554474)) / var_6)), ((((min(var_2, var_5))) ? 1 : ((var_9 ? var_6 : var_11))))));
                                var_16 = ((!(((~(((!(arr_9 [1] [1] [i_1] [i_4])))))))));
                                arr_19 [i_1] [7] [i_1] [i_2] [i_1] = (((((!(((7404698402789132031 ? (arr_9 [i_1] [i_2] [i_3] [i_3]) : (-9223372036854775807 - 1))))))) == (((min(var_5, (arr_0 [i_1])))))));
                                var_17 = (min(var_17, (((((var_1 == (((arr_10 [i_1] [1] [i_1]) ? (arr_0 [3]) : (arr_7 [i_1] [i_5] [i_1]))))) ? ((-(arr_9 [i_1] [i_2] [i_3] [i_4]))) : (min((var_2 && -1752003510), ((0 ? (arr_9 [5] [5] [i_4] [i_5]) : (arr_0 [i_1]))))))))));
                            }
                        }
                    }
                    var_18 = (max(var_18, (((-(arr_10 [i_3] [i_2] [i_1]))))));
                }
            }
        }
        arr_20 [4] = ((+(((arr_18 [6]) - 1))));
    }
    #pragma endscop
}
