/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (4294967295 ? 268433408 : 4294967286);
    var_12 -= (var_9 < 12);
    var_13 = (max(var_13, (((~(((var_7 < 1190785396) ? ((562949953421311 ? 1068154186610809096 : var_0)) : 1068154186610809096)))))));
    var_14 = (min((32766 / 3754), (min(var_10, (max(-3932227849621357125, var_0))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [8] |= ((6 ? ((var_0 ? (arr_1 [i_0 - 1]) : 3932227849621357127)) : (!-32757)));
        var_15 = (max(var_15, 4308255296404706804));
        arr_3 [6] |= (~-22296);
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
