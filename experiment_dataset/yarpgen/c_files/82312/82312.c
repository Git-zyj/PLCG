/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((2934566327 ? (((~191) ? 1 : (max(0, var_13)))) : ((((!(!679581329132012936)))))));
    var_16 = (6026208908511083452 | var_5);

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, (var_2 - 18446744073709551596)));
        arr_3 [i_0] = (arr_2 [i_0 - 3] [i_0 + 2]);
        arr_4 [i_0] [i_0] = var_5;
        var_18 = (!32735);
        arr_5 [i_0] [i_0] = (~var_10);
    }
    var_19 = ((var_10 ? (~3379664103) : -var_8));
    var_20 = ((1 ? var_6 : var_8));
    #pragma endscop
}
