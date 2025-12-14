/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((var_4 ? var_5 : var_17)) % var_13)), -14295));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_19 *= ((~((-15268166358035295214 ? var_4 : var_11))));
        var_20 = var_7;
        arr_2 [0] &= (max((max(-14295, 2)), 47424));
        arr_3 [i_0] [i_0] = (min(-14308, (((((~(arr_1 [i_0])))) * (max((arr_1 [i_0]), (arr_0 [i_0])))))));
        var_21 = (min(14680327171054042423, 0));
    }
    var_22 = (min((max((min(var_0, 14295)), var_10)), var_10));
    var_23 = var_14;
    #pragma endscop
}
