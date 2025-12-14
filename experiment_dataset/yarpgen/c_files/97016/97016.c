/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (!var_15);
    var_20 = var_0;
    var_21 += (min(var_4, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((((((arr_5 [i_0] [i_1] [i_1 + 1]) ? var_18 : (arr_5 [20] [i_1] [i_1 + 2]))) >> (((min((arr_3 [i_1]), (arr_3 [i_1 - 1]))) + 1202168954)))));
                var_23 = (min(var_23, ((((arr_2 [i_0] [i_1]) ? (arr_5 [i_1 - 1] [i_0] [i_1 - 1]) : (((var_4 ? (arr_1 [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1 + 2])))))))));
                var_24 = ((1 ? (arr_5 [i_1] [i_1] [i_1]) : (((((arr_0 [i_1]) + (arr_0 [i_0]))) / ((((arr_1 [i_0] [i_1]) ? var_3 : var_3)))))));
                var_25 *= (((arr_4 [i_0]) ? ((~(arr_1 [15] [i_1 + 1]))) : (((((arr_0 [i_0]) ? 1 : (arr_1 [i_0] [i_0])))))));
            }
        }
    }
    var_26 = (min(4667, (min(((var_2 ? -3638564131550324409 : var_16)), var_16))));
    #pragma endscop
}
