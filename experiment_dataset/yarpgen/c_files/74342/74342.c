/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_0);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [1] = ((-(max((arr_1 [i_0] [6]), (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (~0);
            var_18 = (arr_4 [i_1] [i_1] [i_0]);
        }
    }
    var_19 = (min(var_11, (min(var_9, (max(var_8, var_2))))));
    var_20 = ((-(max(var_0, -var_11))));
    #pragma endscop
}
