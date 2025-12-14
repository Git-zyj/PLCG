/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((18446744073709551602 ? ((max(481565863, 1283432478))) : 6619677193931049403)), (var_7 + var_2)));
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(2147483647 & 84)));
                var_13 = (!2142697515);
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = (((-1742160659 ? (481565863 - 1741669241) : var_0)));
        arr_11 [i_2] = ((~((-(2011521996 < var_0)))));
        arr_12 [i_2] = ((var_2 ? ((var_6 ? (max((arr_4 [i_2] [i_2] [i_2]), var_2)) : 1741669241)) : (267310347 != -1422161979)));
        arr_13 [i_2] = (max(11570175246735271081, ((max(61982, 6667)))));
    }
    var_14 = ((+(((var_1 != var_10) ? var_3 : var_5))));
    #pragma endscop
}
