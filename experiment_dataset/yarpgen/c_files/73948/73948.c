/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [8] = (arr_0 [i_0]);
        var_14 = ((~(arr_0 [i_0])));
        var_15 += (max(2147483647, ((2830813383 ? (((var_3 ? var_9 : var_6))) : (((arr_1 [1] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_16 = ((!(arr_1 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] [0] [i_0 - 1] &= ((+((max((arr_5 [i_0 - 1] [i_1 - 1]), (arr_5 [15] [15]))))));
            var_17 *= ((((!((max(-1415246764, -2147483647))))) || 2147483647));
        }
    }
    #pragma endscop
}
