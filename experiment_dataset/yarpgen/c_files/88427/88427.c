/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((max(var_14, ((var_18 ? 8796025913344 : (arr_1 [i_0]))))));
        var_19 = (--63);
        var_20 = 1;
    }
    var_21 = var_15;
    var_22 = var_14;
    var_23 = var_2;
    #pragma endscop
}
