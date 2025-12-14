/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_2;
    var_15 -= ((var_5 << (var_9 + 7671239696115589406)));
    var_16 = (((((max(var_10, var_12))) || (var_9 & var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(9425121502323240166, ((max((arr_8 [i_0] [i_1] [i_2]), 9223372036854775807)))));
                    var_18 ^= -107;
                }
            }
        }
    }
    var_19 = ((var_5 ? var_8 : ((max(var_9, (~-57))))));
    #pragma endscop
}
