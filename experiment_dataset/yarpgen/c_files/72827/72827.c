/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((max(var_0, (arr_3 [i_0] [i_1])))) ? (((((max((arr_0 [i_1]), var_18)))) ^ ((var_8 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_1] [10]))))) : ((((!(arr_1 [i_1 - 1] [i_1 - 1]))))));
                var_20 = ((((max((((141863388262170624 ? (arr_5 [i_0]) : (arr_5 [i_1])))), (arr_4 [i_1 + 3] [i_1 + 2])))) ? var_0 : ((max(var_1, 10520939265048426082)))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_21 -= ((-(arr_4 [i_1 + 4] [i_1 - 2])));
                    var_22 = (arr_1 [7] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_23 = ((((((arr_2 [9] [6]) >> (arr_7 [i_3] [i_1] [4])))) ? (((arr_5 [4]) ? (arr_1 [10] [6]) : (arr_5 [i_1]))) : (((var_6 ? var_6 : 577)))));
                    var_24 = (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1]);
                    var_25 = var_2;
                    var_26 += ((var_9 || (arr_7 [i_1] [i_1 + 1] [i_1])));
                }
            }
        }
    }
    var_27 = var_13;
    #pragma endscop
}
