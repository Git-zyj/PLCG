/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? 116 : ((~(min(var_12, var_0))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((45 ? -42 : -1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (max(-35, 31));
            arr_7 [i_0] [i_1] [i_1] = ((3 + -25) < (min(16053728059175658740, 18195521351104363364)));
            arr_8 [i_1] [i_1] [i_1] = (-97696062 ? 12615176367310703171 : -4);
        }
        arr_9 [i_0] = ((((((arr_5 [i_0]) - var_15))) ? (min((arr_4 [i_0] [i_0] [8]), ((max((arr_3 [1]), var_4))))) : (((45 ? 0 : 1880106138)))));
        var_19 *= (1 < ((1 ? 14004849002980074366 : 127)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_13 [i_2] = ((var_16 ? 119 : (min((arr_10 [i_2]), ((((arr_0 [i_2]) > var_15)))))));
        var_20 = (arr_12 [i_2]);
    }
    #pragma endscop
}
