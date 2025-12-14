/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 ^= (max(-10818, 2));
        var_19 = (min(var_19, var_13));
        var_20 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_21 = 0;
            var_22 = (min(var_22, ((min(1, (((arr_3 [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_2 [i_0] [i_0]))))))));
        }
    }
    var_23 = (max(var_16, ((var_1 ? (min(18446744073709551600, var_12)) : -20))));
    #pragma endscop
}
