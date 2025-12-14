/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [1] = (min(110, (((((var_5 ? var_12 : var_7)) <= var_11)))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 = (((min((((arr_1 [i_1]) * (arr_2 [i_0]))), ((114 ? (arr_2 [i_1]) : (arr_5 [i_1] [i_0] [i_1]))))) <= (~var_7)));
            arr_6 [i_0] [i_1] [i_0] = ((((44 ? 145 : 142)) >= (arr_0 [i_0] [i_1])));
        }
    }
    var_14 = var_2;
    var_15 = ((~(~0)));
    #pragma endscop
}
