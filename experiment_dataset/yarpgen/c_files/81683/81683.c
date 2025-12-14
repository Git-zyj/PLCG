/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_6;
    var_16 += var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = (((var_8 * -34856) ? (min(((max(var_8, 88))), (((arr_0 [i_0]) / (arr_1 [i_0]))))) : -12167));
        var_18 = (min(-var_2, (max((~2142715684268380068), ((var_0 ? 1146374952720636801 : 0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_19 = ((-3057 ? var_13 : 0));
            arr_6 [i_1] [i_1] = ((arr_0 [i_2]) ? var_10 : 1146374952720636801);
        }
        var_20 = (((arr_5 [i_1]) + (arr_5 [i_1])));
    }
    var_21 = ((((var_5 ? (((var_10 + 9223372036854775807) << (var_14 - 1206))) : ((var_4 ? var_4 : var_9)))) << (((var_6 + 130) - 8))));
    var_22 = var_0;
    #pragma endscop
}
