/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_2) | ((var_10 | (min(15338125335026908922, var_2))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((arr_1 [i_0 - 2] [i_0 - 3]) / var_3))), (arr_1 [i_0 - 4] [i_0 - 3])));
        arr_3 [i_0 - 4] = var_7;
    }
    var_13 = (((-var_5 / var_1) ? ((var_10 / ((var_10 ? 65535 : var_1)))) : var_5));
    var_14 = (((max(2178730106893421773, -14))));
    #pragma endscop
}
