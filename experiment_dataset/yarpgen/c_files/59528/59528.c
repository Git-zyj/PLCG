/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((((var_11 ? var_14 : var_3)) < var_18));
        var_21 = (max(var_21, (((((((225 - 13404526231999757716) ? (var_8 + var_4) : 10))) ? (var_15 || 5042217841709793900) : var_15)))));
    }
    var_22 = ((-(var_19 + var_9)));
    var_23 &= (((max(var_19, var_2))) & var_0);
    var_24 = (max(var_12, (var_6 + var_17)));
    #pragma endscop
}
