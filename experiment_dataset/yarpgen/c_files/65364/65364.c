/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((-var_11 ? (159 + 1716953099) : var_1))));
    var_17 = ((~((255 ? (-31422 | 58774) : ((98 ? 111 : 98))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_18 ^= (min((~124), (((arr_2 [i_1 + 1] [i_1 - 2]) & ((((arr_2 [i_0] [i_1 + 4]) == var_3)))))));
                var_19 *= ((-(arr_0 [i_1])));
            }
        }
    }
    var_20 -= ((((3889340507133715551 - 165) ? ((var_5 ? var_4 : var_15)) : -var_12)));
    #pragma endscop
}
