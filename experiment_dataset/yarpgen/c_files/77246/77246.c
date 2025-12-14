/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_2 [i_0]), (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_12 = (arr_5 [i_0] [i_1 + 1]);
            var_13 = (((arr_5 [i_0] [i_1 + 1]) % (((arr_5 [i_0] [i_1 + 1]) ? (arr_5 [i_1] [i_1 + 1]) : (arr_4 [i_1] [i_1 + 1] [i_0])))));
            arr_6 [i_0] = (((((0 ? (arr_4 [i_0] [i_1 + 1] [i_0]) : var_2)) < (arr_0 [i_1 + 1]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_0] = (((arr_10 [i_2] [i_0]) * var_1));
            var_14 = (((arr_7 [i_0]) == (arr_7 [i_0])));
        }
        arr_12 [i_0] = ((((arr_1 [i_0] [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0]))));
        arr_13 [i_0] [i_0] = ((((((arr_10 [i_0] [i_0]) ? 18250038363306291497 : ((min((arr_0 [i_0]), 1033676268)))))) ? ((max((arr_9 [i_0]), (arr_9 [i_0])))) : ((((arr_8 [i_0]) ? (arr_7 [i_0]) : var_5)))));
        arr_14 [i_0] = (((((((arr_9 [i_0]) >> var_9))) ? var_5 : (min(3261291027, 1061542006)))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        arr_17 [i_3] [i_3 - 1] = ((((min((arr_9 [i_3 - 1]), (arr_16 [i_3 - 2] [i_3 - 2])))) && (arr_0 [i_3])));
        arr_18 [i_3] = (((((((arr_15 [i_3 + 2] [i_3 + 2]) && ((((arr_2 [i_3 - 1]) ? (arr_7 [i_3]) : 569368147))))))) | (((arr_10 [i_3 - 2] [i_3]) ? (min((arr_4 [i_3 - 2] [i_3 + 2] [i_3]), (arr_0 [i_3]))) : ((((!(arr_15 [i_3 + 2] [i_3 + 1])))))))));
    }
    #pragma endscop
}
