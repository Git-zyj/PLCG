/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((((var_9 ? 32740 : var_5))) <= var_3));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max((max(785568344306297279, 13381053850357363694)), (arr_0 [i_0])))));
        var_11 *= (min((((!(arr_0 [i_0])))), (((((arr_0 [i_0]) | (arr_1 [i_0] [i_0]))) & var_1))));
    }
    var_12 = ((((max(1, 13381053850357363677) / ((var_8 ? var_8 : var_7))))));
    #pragma endscop
}
