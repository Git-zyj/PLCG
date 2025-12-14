/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max(var_12, var_7));
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = var_12;
        arr_2 [i_0] [i_0] = ((3840 ? 134 : 125));
        arr_3 [i_0] = (((26615 ? (arr_1 [14] [0]) : (arr_1 [i_0] [14]))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_20 |= ((-69 || 1729382256910270464) ? ((min((arr_4 [i_1 - 2]), (48 >= -11669)))) : 3341754643941281628);
    }
    #pragma endscop
}
