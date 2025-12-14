/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (min((((arr_2 [i_0]) ? ((~(arr_2 [i_0]))) : ((((!(arr_0 [i_0] [i_0]))))))), (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = arr_2 [i_0];
    }
    var_10 = var_1;
    var_11 = (min((var_7 < var_8), (max(var_9, (max(var_8, var_6))))));
    var_12 *= var_8;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2] = ((!(((+(((arr_6 [i_2]) & (arr_6 [i_1]))))))));

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_14 [i_1] [3] [10] [i_1] = (arr_7 [i_1]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((((max(((((arr_7 [i_1]) < (arr_12 [i_3] [5] [i_3])))), (arr_13 [8] [i_2] [i_2] [i_2])))) ? (((arr_8 [i_1] [i_1] [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_2] [i_2] [i_2]))) : (((((arr_6 [i_1]) + (arr_7 [i_1]))) - (arr_12 [i_1] [i_1] [i_3])))));
                }
                var_13 = arr_8 [i_1] [i_2] [i_2];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_14 = (((arr_19 [i_4]) ? (arr_20 [i_1] [i_4] [i_4] [i_4] [i_4]) : ((((arr_8 [i_4] [i_1] [i_1]) ? (arr_8 [0] [i_2] [i_4]) : (arr_8 [i_1] [i_1] [i_1]))))));
                            var_15 = (arr_17 [i_1]);
                            arr_23 [i_1] [i_2] [i_4] [i_5] = (((arr_6 [i_1]) ? ((((-(arr_8 [i_2] [i_4] [i_5]))) ^ (arr_22 [i_1] [i_1] [i_2] [i_2] [i_4] [i_5]))) : (arr_8 [i_1] [4] [i_5])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
