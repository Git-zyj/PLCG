/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_17 ? var_0 : var_12)))) ? ((-(max(644370343, 4738481814683953961)))) : (((~(max(644370334, -644370344)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 ^= (max((arr_1 [i_0]), (~-5534773180703539686)));
        var_22 = (((max(4294967286, -5534773180703539686)) >= 1));
        var_23 = ((((max(((var_8 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (min((arr_0 [i_0] [i_0]), (~var_4))) : ((((arr_0 [i_0] [i_0]) + ((max(var_0, var_5))))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_24 |= var_17;
            var_25 = (((min((min((arr_3 [i_1 - 1] [i_0]), var_15)), var_12))) ? ((max(((var_16 ? (arr_3 [i_0] [i_1]) : var_15)), (arr_0 [i_1 + 1] [i_1 - 1])))) : (max(-5534773180703539707, 3416854552)));
        }
        var_26 |= ((1 ? 1 : 4294967286));
    }
    var_27 = (~var_16);
    #pragma endscop
}
