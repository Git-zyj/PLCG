/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((((var_3 ? var_7 : var_5))) ? (var_7 <= var_9) : var_7)), (((~(~var_2))))));
    var_11 = (max(var_11, var_8));
    var_12 = (min(var_5, -33));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_13 = ((((((arr_0 [i_0] [i_0]) ? ((-(arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0 - 1])))) ? (((min((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_0] [i_0 - 2]))))) : (min((max((arr_1 [i_0]), var_5)), (arr_0 [i_0] [i_0 - 1])))));
        arr_2 [i_0] [4] |= (((21 ? 11416 : 156)));
        var_14 = (max((max((min((arr_0 [1] [i_0]), (arr_1 [8]))), (((~(arr_0 [0] [i_0 - 2])))))), (((((arr_1 [12]) ? (arr_1 [8]) : var_2)) ^ (arr_1 [8])))));
        var_15 = ((((min(-var_2, (arr_0 [i_0] [i_0])))) + ((((var_4 - (arr_0 [i_0] [i_0]))) - -var_8))));
    }
    var_16 = (((((var_9 - var_5) >= (var_7 ^ var_9))) ? var_1 : var_3));
    #pragma endscop
}
