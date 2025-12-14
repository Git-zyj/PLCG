/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((-var_10 ? ((max(-225, (var_2 * var_11)))) : ((((min(-2048, var_1))) ? 1 : var_0))));
        var_14 = ((((max((~483), ((~(arr_0 [i_0] [i_0])))))) ? ((~(min(1, (arr_1 [12] [i_0]))))) : ((~(~var_8)))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_15 = (min((min(var_12, 152)), (362301753 - -12258)));
        var_16 = (min(((!((!(arr_1 [i_1] [i_1]))))), (!61)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_17 = ((((((min(34488, (arr_3 [i_2]))) * (min(18, 4294967295))))) ? -202 : ((6245424227568102755 ? (arr_7 [i_2] [i_2]) : 1287964832087729167))));
        var_18 = var_11;
    }
    #pragma endscop
}
