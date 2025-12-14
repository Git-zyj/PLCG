/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [16] [i_0 - 1] = 427551762;
        var_14 = 18446744073709551615;
        arr_3 [i_0 + 1] = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((max((arr_6 [i_1]), 32767)) / 2322));
        var_15 = (min(var_15, (arr_1 [i_1] [i_1])));
        var_16 = (min(var_16, ((max((((arr_7 [i_1]) + (arr_5 [i_1]))), (arr_0 [i_1]))))));
    }
    var_17 |= var_6;
    var_18 = (max((((min(0, var_5)) / (max(var_5, var_13)))), var_2));
    #pragma endscop
}
