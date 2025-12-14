/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max(((var_11 ? -var_11 : ((202 ? 12423499372607699736 : 8874511819261340318)))), (!var_1)));
    var_20 = (((((((var_14 ? var_13 : var_4))) ? ((var_2 ? var_17 : 18446744073709551594)) : ((min(6213120164219744545, 53)))))) ? var_5 : ((max(((11 ? var_1 : var_9)), (var_16 > var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = ((var_9 ? (((((var_18 ? (arr_1 [i_1]) : (arr_3 [i_1])))) & (arr_0 [i_0] [i_1]))) : ((max((arr_1 [i_1]), var_0)))));
                var_22 = (((arr_4 [i_0] [i_0]) ? ((((var_12 == (arr_1 [i_0]))))) : (max((((arr_3 [i_0]) & (arr_1 [i_0]))), (max((arr_1 [i_0]), 10))))));
            }
        }
    }
    var_23 ^= (((var_16 == var_18) ? 8874511819261340338 : ((((((var_2 ? 1095739933 : var_3))) ? ((max(var_17, var_18))) : ((var_18 ? 202 : var_18)))))));
    #pragma endscop
}
