/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(((26309 ? var_15 : var_9)), -26310)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0]) ? (((-1181840637 - (arr_1 [i_0])))) : (min(((min(1, var_0))), 1479408417623375072)));
        var_20 |= ((((((!(arr_0 [i_0]))))) | (((arr_0 [i_0]) | 23603))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((3113126658 ? ((min((arr_1 [i_0]), ((-(arr_3 [9] [i_1] [9])))))) : ((min(1, (arr_7 [i_1] [12] [i_2] [i_1]))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_3] = (!var_4);
                        var_21 += (min((arr_10 [i_0] [i_0]), (min((arr_4 [i_3]), ((7069897947241955356 ? 1 : var_1))))));
                        var_22 = 983086253;
                        arr_13 [i_0] [i_0] [i_0] = ((-((min((arr_6 [i_0] [i_2]), (arr_6 [i_1] [i_0]))))));
                    }
                    var_23 = (min(var_23, ((min((min((arr_1 [i_2]), (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2]))), (min(((-(arr_1 [i_1]))), (arr_5 [i_1]))))))));
                    arr_14 [i_0] [i_2] = (((102 | 1) >> (((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2]) + 123))));
                }
            }
        }
    }
    #pragma endscop
}
