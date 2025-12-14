/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= max((((~(18250 | 48)))), 4294967288);
    var_15 = (min(var_15, var_10));
    var_16 = 812700941;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_1 - 2] [i_1] = (max(var_11, (var_9 + var_10)));
            arr_7 [i_1] [i_1] = 63532;
            var_17 = -40;
        }
        var_18 = (min(var_18, var_4));
    }
    #pragma endscop
}
