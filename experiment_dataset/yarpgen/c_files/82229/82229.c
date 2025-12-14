/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (0 << (635101235 - 635101221));
    var_19 = (((var_9 ? var_2 : (var_3 >= 635101258))) << (var_16 - 3124228104));
    var_20 = var_9;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_2 [i_0])));
        arr_4 [i_0] = max((max(627382823, (arr_3 [i_0 - 1]))), ((3817254224 << (4266445325 - 4266445318))));
        var_22 &= ((var_12 && var_12) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 + 1]));
    }
    #pragma endscop
}
