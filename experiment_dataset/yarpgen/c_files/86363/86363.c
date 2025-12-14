/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_5 ? ((((min(1, var_9))) ? var_10 : ((var_6 ? var_11 : var_5)))) : ((max(((var_6 / (-32767 - 1))), var_8)))));
    var_14 = (min(var_14, (((((((1 + var_2) + var_10))) ? (((11 - var_4) + 26706)) : ((((max(0, var_3))) ? var_8 : ((1 ? 11 : 166)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = 0;
        var_16 = (((max(11, 1535766399))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_17 = var_2;
        arr_6 [i_1] = ((((((~var_8) ? ((min(var_1, var_0))) : (arr_5 [i_1] [i_1])))) ? ((((!((min(-1372111136, 6604222))))))) : (arr_3 [i_1] [i_1])));
    }
    var_18 = (max((((!32704) / var_12)), var_12));
    #pragma endscop
}
