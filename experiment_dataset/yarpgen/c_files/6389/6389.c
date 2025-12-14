/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] = 812324135;
            arr_7 [i_0] [i_1] [i_1] = (min(1073741824, var_10));
            var_15 = (max(var_15, (arr_3 [i_0] [i_0])));
            var_16 = (min(((((arr_1 [i_0]) <= (!var_11)))), (arr_0 [i_0] [0])));
        }
    }
    #pragma endscop
}
