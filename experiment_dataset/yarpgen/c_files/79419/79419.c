/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 49344;
    var_17 = (((max(var_2, var_9))));
    var_18 = (((56 ? ((max(var_13, var_7))) : ((min(var_4, 1))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (((+((1 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))));
        arr_2 [20] = -1500943754;

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_20 = (arr_0 [i_1 + 1]);
            var_21 += 18388;
        }
        arr_5 [i_0] [i_0] = (((16173 ? (arr_1 [i_0] [i_0]) : 18388)));
    }
    var_22 = 2497563738;
    #pragma endscop
}
