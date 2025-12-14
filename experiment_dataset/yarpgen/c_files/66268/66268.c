/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(max((max(3457918302, var_12)), -var_8))));
    var_17 &= (!1228329375);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] &= (max((!837048998), var_2));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = var_10;
            var_18 = (max(var_18, (((+((((!3457918302) != (arr_0 [i_0])))))))));
        }
    }
    var_19 = var_9;
    #pragma endscop
}
