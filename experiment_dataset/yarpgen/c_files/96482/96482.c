/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_0, ((((((0 ? 240 : 0))) && (~var_16))))));
                var_20 |= ((((((max(var_8, 21))) ? ((0 ? var_0 : var_5)) : (((26 ? (arr_1 [i_0] [i_0]) : (arr_4 [i_1] [i_0])))))) < (arr_3 [i_1])));
                arr_5 [i_0] [i_1] [i_0] = (min(96, -var_11));
                arr_6 [i_0] [i_0] &= ((!((((max(var_15, (arr_0 [i_0])))) != var_16))));
            }
        }
    }
    var_21 = ((var_16 ? (((-102 != (-4 ^ var_12)))) : var_13));
    #pragma endscop
}
