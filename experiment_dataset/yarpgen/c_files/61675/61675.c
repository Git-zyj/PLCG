/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (-1700 <= -1893648707);
        var_16 = 1;
        var_17 = ((((((!(((-(arr_1 [i_0] [i_0])))))))) / (max(-6499119786375104329, 6589235412761565132))));
        arr_5 [i_0] = var_15;
    }
    var_18 = min(-3167848115505286351, -1893648707);
    var_19 = 1893648707;
    var_20 = var_4;
    var_21 = ((((15 ? ((min(33, 45891))) : ((min(0, 75))))) * ((((((3869759093304456192 ? 1893648706 : -82))) >= var_12)))));
    #pragma endscop
}
