/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [i_0] = (((((var_8 == var_5) ? (arr_0 [i_0 + 1]) : -28)) - (arr_3 [i_1] [i_0 + 1])));
                var_13 = (((((((((arr_0 [i_0 - 1]) << (-9223372036854775792 + 9223372036854775796)))) ? (var_11 && var_1) : (arr_1 [i_0])))) ? (((15883 << ((((48 ^ (arr_3 [i_0 + 2] [i_1]))) - 5866518166198048556))))) : ((+((-63 ? (arr_5 [i_0] [i_1]) : -9223372036854775792))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        var_14 = (max(var_14, ((((((arr_7 [i_2 + 1] [i_2 + 4]) / var_11)))))));
        arr_10 [i_2 - 2] = ((var_3 ? -9223372036854775792 : var_1));
    }
    var_15 = ((((65533 >= -9223372036854775792) ? (!var_9) : var_7)) < (((64189 || (65 && var_5)))));
    #pragma endscop
}
