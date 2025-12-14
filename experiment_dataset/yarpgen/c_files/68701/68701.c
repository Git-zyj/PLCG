/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 -= (~1);
        var_11 = (var_6 % var_7);
    }
    var_12 = ((var_4 > ((((((-4156 ? var_6 : 18938)) <= (var_4 > var_2)))))));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = (min(var_13, (((max((arr_5 [i_1] [i_1]), 11260092410619433237)) ^ var_4))));
        arr_6 [i_1] [i_1] = var_1;
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
    }
    #pragma endscop
}
