/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_13 = 4294967279;
        arr_2 [i_0] [4] |= (((arr_1 [0]) ? (arr_1 [6]) : -80));
    }
    var_14 -= ((~(var_0 & var_10)));
    var_15 = (min(var_15, ((max((max((max(2147483647, 17188950439890371633)), (((3710095177 ? -435744693 : 3710095179))))), (((3748267687 ? 584872137 : 4294967295))))))));
    var_16 *= var_12;
    #pragma endscop
}
