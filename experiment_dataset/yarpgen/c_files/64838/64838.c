/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = ((18374372440763073788 ? -22055 : var_8));
        arr_2 [i_0] = -var_8;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = ((-((max((max(2280, (arr_3 [i_1]))), ((max(var_7, (arr_4 [i_1] [i_1])))))))));
        var_21 = 4621061256339942347;
        var_22 = (~0);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_23 = (((arr_7 [i_2] [i_2]) >= ((min(-2103027364, var_6)))));
        var_24 = 22046;
        var_25 = (max(var_15, ((((max(var_10, var_18))) ? var_9 : (~var_0)))));
        var_26 = 22055;
        var_27 = (((((var_2 ? 3422 : var_13)) / 25)));
    }
    var_28 = 22038;
    #pragma endscop
}
