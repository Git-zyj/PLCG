/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((var_13 >= var_10), ((-1 ? var_6 : var_18))))) & var_15));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [4] &= 1842736098;
        var_21 = (max(var_8, (max((min(37073, -3485739682790588968)), (((arr_1 [i_0]) ? var_12 : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = ((((min(((-113 ? 1 : var_14)), ((max((arr_4 [i_1] [i_1]), 1379610176)))))) ? ((~(max(var_4, var_18)))) : (min(6760698014503049311, var_0))));
        var_23 = (arr_3 [i_1]);
    }
    var_24 = max(((((min(341016472, 0))) ? ((min(255, var_0))) : ((19525 ? var_9 : var_6)))), (((!var_18) ? var_7 : (!var_15))));
    var_25 = ((1 ? 3953950828 : -1842736070));
    var_26 = ((((32256 ? 16085194102284204572 : 20401)) + ((max((((var_4 ? var_3 : 120))), ((0 ? 4762322798509568887 : 8265307170542209547)))))));
    #pragma endscop
}
