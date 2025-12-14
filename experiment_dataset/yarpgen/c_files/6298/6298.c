/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = var_5;
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (13166027739406994162 && 3683174210);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = (arr_5 [i_1 - 1] [i_1 - 1]);
            var_21 ^= (var_9 * 1);
            arr_7 [i_1] = -var_8;
            var_22 = (max(var_22, (((3683174207 / (arr_5 [i_1 - 1] [i_1 - 1]))))));
        }
    }
    #pragma endscop
}
