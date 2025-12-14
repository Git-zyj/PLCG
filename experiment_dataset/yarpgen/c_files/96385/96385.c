/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_16;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0] [i_0])));
        var_19 = (((((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (1085751995 / 3209215300) : (max(var_5, (arr_0 [i_0])))))) ? (((17042430230528 ? 8127234881884509078 : (((min(var_9, 1))))))) : (min(((min(var_16, (arr_1 [i_0] [i_0])))), (arr_0 [i_0])))));
        arr_2 [i_0] = ((-((65 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_20 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = ((((((min((arr_4 [i_1]), 3932471085)) * var_2))) ? ((-(arr_3 [i_1] [i_1]))) : var_4));
        arr_6 [i_1] = (-964922457 + 10123180727556911141);
        var_21 = (max(1617164641, (26225 - 964922432)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_22 = (max(var_22, ((max((arr_7 [i_2]), 32765)))));
                arr_12 [i_3] [i_3] [i_3] = (min(((max((arr_4 [i_2]), -1557354494))), ((+(max((arr_0 [i_3]), (arr_4 [i_2])))))));
            }
        }
    }
    var_23 = var_0;
    var_24 = (max(var_24, (var_3 <= var_12)));
    #pragma endscop
}
