/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 > (((max(var_6, 1)) >> (((var_1 | 2777118662648522504) - 3962990331726131132)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((var_5 | (min(var_10, var_9))));
                    var_14 = (arr_4 [6] [6] [4]);
                    var_15 = ((~(((20907 ? var_9 : (arr_7 [i_0] [10] [i_2] [i_2]))))));
                    var_16 = (((((!var_10) ? ((125 ^ (arr_0 [i_2]))) : var_2)) > ((((max(var_8, var_3)) != (!var_10))))));
                }
            }
        }
    }
    var_17 = (((min((!var_10), var_5)) >> (((min(((-1933467599 ? var_2 : 1)), (~var_0))) - 20752))));
    var_18 = (((((1 % var_0) ? (((var_9 ? var_2 : var_6))) : ((var_0 ? 32 : 16735249239689075107)))) == (((max(var_0, (var_4 || -813842437)))))));
    #pragma endscop
}
