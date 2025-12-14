/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((((arr_0 [i_0]) ? 1754417875225587228 : (arr_1 [i_0 - 2]))) * ((-18999 ? var_12 : (min(1754417875225587236, var_12)))));
                arr_5 [6] [0] [6] &= (((!var_12) ? ((((arr_2 [i_0 + 1]) == 16692326198483964372))) : ((~(arr_2 [i_0 + 2])))));
            }
        }
    }
    var_14 -= (max((max(19002, (min(var_2, var_6)))), (((((0 ? -1462189612 : var_1))) ? (max(8312261044365950263, 199)) : (var_8 & 1028257149)))));
    #pragma endscop
}
