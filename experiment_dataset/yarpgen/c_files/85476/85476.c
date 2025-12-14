/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((~(((!(((0 - (arr_3 [i_0] [i_0])))))))));
        var_17 = 4294967295;
        arr_5 [i_0] = (arr_2 [i_0]);
        arr_6 [2] = var_13;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_19 *= min(var_0, var_12);
        arr_9 [i_1] = 8323072;
        arr_10 [i_1] = ((-((((arr_8 [i_1 + 1] [i_1]) || (arr_8 [i_1] [i_1]))))));
    }
    #pragma endscop
}
