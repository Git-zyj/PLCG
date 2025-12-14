/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 64;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (max(-1, 231));
        arr_4 [i_0] = (~(min(var_1, (~231))));
        var_19 = (max(((((arr_2 [i_0] [i_0]) ? 192 : var_5))), (var_8 + 28702)));
        var_20 = (min(var_5, (var_0 & var_13)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = ((((((var_5 & var_2) | (0 & var_9)))) <= ((-var_3 ? (arr_5 [i_1] [i_1]) : var_13))));
        var_22 = (max(var_22, ((max(((((var_8 ? var_7 : var_10)))), (min(1, var_9)))))));
    }
    #pragma endscop
}
