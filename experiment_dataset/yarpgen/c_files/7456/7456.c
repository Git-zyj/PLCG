/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((72057594037927936 ^ 180) - ((((min(var_4, 9225758859615677443))) ? (739185536 || var_4) : (max(var_3, var_9)))));
    var_11 -= ((((min((!var_9), var_8))) && (((var_9 & (min(var_9, 1068153604309143033)))))));
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 ^= (((-1 ? ((max((arr_2 [i_0] [i_0]), 0))) : (min((arr_4 [0]), (arr_5 [i_0] [i_2] [i_1]))))));
                    var_14 = (min(var_14, ((((!225) ? ((((min((arr_3 [4] [i_1 + 1] [i_2]), 1))) ? ((((!(arr_8 [12] [12] [i_2 + 1] [i_2]))))) : -var_1)) : (min((arr_6 [i_0] [12]), (arr_5 [i_2 + 1] [i_2] [i_1 - 3]))))))));
                    var_15 = (min(var_15, ((min((((arr_7 [i_1] [i_1 + 1] [i_2 + 1] [i_2]) & 2013265920)), ((~(arr_6 [i_1] [4]))))))));
                }
            }
        }
    }
    var_16 |= var_7;
    #pragma endscop
}
