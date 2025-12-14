/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = (max((max((max((arr_0 [i_0] [i_0 - 2]), (arr_3 [i_0 - 1]))), ((min((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0] [i_0])))))), ((max(1, 1)))));
        arr_4 [i_0] = (min(((min(4396073614418005416, 224))), (arr_1 [i_0 + 1])));
        arr_5 [i_0] = (((((-(max(224, (arr_3 [i_0])))))) ? (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))) : ((max((arr_3 [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 + 1]))))));
        var_14 = min((min((arr_0 [i_0] [10]), (min((arr_3 [i_0]), (arr_2 [i_0]))))), ((((min(224, 1))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = (min((min(50, 5556039057213516769)), ((min((arr_7 [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 + 1]))))));
        arr_11 [i_1 - 1] [i_1 - 1] = (arr_7 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_15 = (arr_13 [i_2 - 1] [i_2 - 1]);
        var_16 = ((~(arr_7 [i_2 + 1] [i_2])));
    }
    var_17 = var_9;
    #pragma endscop
}
