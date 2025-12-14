/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        arr_2 [i_0] = (((var_2 || (arr_0 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_20 = min(((-(arr_1 [i_1]))), (((arr_1 [i_1]) - (arr_1 [i_1]))));
        var_21 = (((min((min((arr_0 [10]), var_11)), var_1)) <= (arr_3 [i_1 + 1] [i_1])));
        arr_5 [i_1] = min(var_0, (min(var_11, (max((arr_4 [i_1 - 3] [i_1]), (arr_1 [i_1]))))));
        var_22 = (max((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 4]))), (((!(arr_1 [i_1 + 4]))))));
        arr_6 [i_1] [i_1 + 3] &= (max((max((((-(arr_4 [1] [1])))), (max((arr_0 [i_1 - 2]), var_1)))), ((-(arr_0 [i_1])))));
    }
    var_23 = ((((((max(var_11, var_12))) ? var_3 : var_4)) < var_10));
    #pragma endscop
}
