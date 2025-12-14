/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        arr_3 [i_0 - 1] [i_0] = ((((min((arr_0 [i_0]), -2464))) ? (min((-67 - 1536), ((var_0 ? -1 : (arr_1 [13]))))) : (((arr_1 [i_0 + 1]) + (arr_2 [i_0 + 1])))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_1 [i_1 - 2]) > (min((arr_5 [i_1 - 2]), var_6))));
        var_20 = 84;
        var_21 = 3966180951923999941;
        arr_6 [i_1] [i_1] = (max(((((!4) ? var_10 : 1))), 6));
    }
    var_22 = (min(var_8, ((var_0 ? 170 : var_16))));
    var_23 = (max(var_23, ((min(((var_12 << (4172559947 - 4172559935))), (((~(!var_8)))))))));
    #pragma endscop
}
