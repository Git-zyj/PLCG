/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((min(1366745071, 1366745083)), (!var_6)))) ? ((max(var_13, (~33)))) : 4294967281));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 76;
        var_18 = (min(var_18, (arr_1 [i_0])));
        arr_3 [i_0] = ((min(((15143840858341808857 ? var_12 : 6890646172492584582)), -4777316720999462550)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_19 = (((arr_4 [i_1 - 1]) != 49887));
        arr_8 [i_1] = var_3;
        var_20 = (!0);
    }
    #pragma endscop
}
