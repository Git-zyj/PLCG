/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (+-0);
        arr_3 [i_0] = (((((((11024 >> (((arr_1 [i_0] [i_0]) - 146))))))) - (((5 & 14793782011720960308) << 0))));
        var_20 = (max(var_20, 50226));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = ((~(((arr_0 [i_1]) ? 87479651 : (arr_0 [i_1])))));
        var_22 = (min(var_22, (((-(((!(!var_15)))))))));
        var_23 = 2147483647;
        arr_6 [i_1] [i_1] = -87479652;
    }
    var_24 = (((((~((var_14 ? 58 : var_0))))) ? var_14 : ((min(87479651, 87479638)))));
    var_25 = (87479651 ? -87479651 : 87479634);
    var_26 = (min(((var_12 ? ((var_1 ? var_15 : -87479632)) : var_11)), ((-87479650 ? 11083 : 1))));
    var_27 = (min((((((max(32767, (-2147483647 - 1)))) || (!var_18)))), var_3));
    #pragma endscop
}
