/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (!65280);
        arr_2 [i_0] = (((((arr_0 [i_0]) || var_0)) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = (~(((0 != 51542678) ? 1 : 1051472350)));
        var_18 = (max(var_18, (((((min((max((arr_4 [i_1]), -3216941035429043580)), ((((arr_5 [12] [14]) ? var_9 : (arr_4 [i_1]))))))) + (min(((var_1 ? var_8 : var_4)), -51542677)))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_19 = 3216941035429043579;
        var_20 = (((((+(((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : 0))))) ? var_2 : (arr_7 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = (1610612736 ? 1 : -3216941035429043580);
                    var_22 ^= ((9223372036854775796 ? (min(((11969 ? 18446744073709551603 : 13071)), (3099992139012141377 || 1))) : 65535));
                    var_23 = (((arr_6 [i_2]) ? ((-((3216941035429043580 ? 12711090576115538634 : var_13)))) : (((-(arr_7 [i_2]))))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((((((((-82 ? var_4 : var_12))) && (var_14 && var_1))) ? ((var_14 ? var_7 : ((var_4 ? var_8 : var_13)))) : var_2)))));
    #pragma endscop
}
