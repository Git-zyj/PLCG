/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((~((25317 >> (((arr_0 [i_0] [i_0]) - 9246))))))) ? (min(16383, (arr_5 [i_1]))) : (arr_5 [i_0])));
                arr_7 [i_0] [i_0] = ((1 % ((-(((49154 > (arr_0 [i_1] [i_0]))))))));
            }
        }
    }
    var_18 = ((max(((56 ? var_11 : var_13)), (0 - 16128))) - ((((((var_1 ? var_7 : 1))) ? -var_10 : (var_17 + var_15)))));
    #pragma endscop
}
