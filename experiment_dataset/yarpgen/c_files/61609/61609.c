/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (min((((((min(-194262305, 102))) - (min(19, 1702964393))))), var_3));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (min(var_19, ((max(-5923266277806188491, -9020841814777896354)))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0 + 1] [i_0] = var_1;
    }
    var_20 = ((var_13 ? (((var_13 + 2147483647) >> (var_17 - 43897))) : var_13));
    var_21 = (min((((((var_14 >> (var_9 - 5217950531502047495))) / var_4))), (var_3 && var_7)));
    #pragma endscop
}
