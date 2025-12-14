/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = 1478288356744861265;
        var_19 = ((~((((max((arr_1 [i_0]), (arr_3 [i_0]))) == (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_20 = (max(var_20, (((((((arr_6 [i_1] [10]) + 6421071591487712360)) <= ((max((arr_4 [i_1]), (arr_4 [i_1]))))))))));
            var_21 |= (max(-145391822, (((max((arr_7 [i_2] [i_2] [12]), 2521371168782341672)) ^ (8 & 6078753910843370637)))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_22 = (max(var_22, 6078753910843370637));
            var_23 |= -var_11;
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_13 [11] [11] = (((~(arr_11 [i_4 - 2] [i_4 - 1] [i_4 - 2]))));
            arr_14 [i_1] [i_1] = ((((max((max(var_16, -9)), 6229043140971525754))) ? (((((var_1 ? 6078753910843370637 : 115))) ? (!var_17) : ((684158484 ? -3902056020894459350 : 3515991679)))) : ((var_4 ? var_2 : ((max(787215731, 145391835)))))));
            var_24 += (((max((arr_6 [i_4 + 1] [20]), (arr_5 [i_1] [i_4 - 2]))) ^ -1824949628));
        }
        arr_15 [i_1] = (arr_12 [i_1] [i_1] [i_1]);
        arr_16 [i_1] = (arr_7 [i_1] [i_1] [i_1]);
        var_25 = (((arr_10 [i_1] [i_1]) - 4006863781115315545));
        arr_17 [i_1] [i_1] = (max(var_0, (((!(arr_6 [i_1] [i_1]))))));
    }
    var_26 = (min(var_26, (((((((1386260930091931457 ? var_1 : 2614480250262372085))) ? (1211640147 == var_7) : 28160))))));
    #pragma endscop
}
