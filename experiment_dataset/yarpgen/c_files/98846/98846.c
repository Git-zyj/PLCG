/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (!var_6);
    var_12 = (max(var_12, var_9));
    var_13 = 16366755753495286038;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] [13] = ((((((arr_1 [i_0]) ? ((max(-483624545, var_9))) : ((483624575 ? 1040420046858017483 : -483624545))))) || ((((var_7 || 6352362431819750210) ? var_0 : ((12 ? (arr_0 [18]) : (arr_1 [i_0]))))))));
        var_14 = (max(((2208496180287813575 ? -483624574 : 27)), (max(32753, var_4))));
        var_15 = (arr_0 [1]);
    }
    #pragma endscop
}
