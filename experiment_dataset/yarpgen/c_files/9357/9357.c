/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((-(min(var_11, var_1)))), var_1));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [i_0] = (min((((-(arr_1 [i_0 - 1] [i_0 - 1])))), (arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_14 += (arr_0 [8]);
            arr_6 [i_0] [i_0] [i_1 - 2] = 4116006213;
        }
    }
    var_15 = var_0;
    #pragma endscop
}
