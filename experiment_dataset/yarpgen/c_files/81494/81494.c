/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_3 ? var_7 : var_2))) ? (max(var_0, var_10)) : ((18446744073709551609 ? var_4 : var_8)))) + ((~(min(3480177771442246599, 32792))))));
    var_18 = (max((max((max(18446744073709551615, 234)), var_15)), (234 - 0)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 46;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = 0;
            arr_7 [i_1] [i_1] [i_1] = ((min(-15409, (max(0, 18446744073709551609)))) / (((max((arr_1 [i_0 + 3]), var_13)))));
            var_19 = (arr_4 [i_0] [17]);
            var_20 *= ((var_14 ? ((max(var_6, 4221819869))) : 17800328654979698807));
            var_21 = (min((arr_1 [i_0]), (((var_14 ? 22 : (arr_1 [19]))))));
        }
    }
    var_22 = (max(var_0, (((37659 - 73) ? var_2 : var_12))));
    #pragma endscop
}
