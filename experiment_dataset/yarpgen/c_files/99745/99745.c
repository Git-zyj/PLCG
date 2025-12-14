/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (~46044);
        arr_5 [i_0] = (!var_9);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_10 [8] = 5965773656424796487;
        var_14 = ((-(!var_8)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 |= (!var_12);
        var_16 += (!2796823230643787772);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] = var_7;
        var_17 = -2309372944566334186;
    }
    var_18 = ((-(!-2309372944566334210)));
    #pragma endscop
}
