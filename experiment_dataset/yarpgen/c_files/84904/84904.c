/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((13930 ? var_8 : 9724301441753424405)))) ? var_5 : (max((var_10 || 2912801002), ((13936 ? 105 : var_12))))));
    var_16 = (min(var_16, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] &= var_13;
                    arr_10 [i_2] [i_2] [i_2] = (((((227 ? 1410486280456879641 : var_7)) < var_3)) ? (((((2100250460 ? 13934 : var_11))) ? ((var_12 ? var_1 : var_12)) : (((4294967288 ? var_9 : 51601))))) : (((((var_6 ? var_12 : 17))))));
                    arr_11 [1] [i_2] [1] [i_0] = (((((((max(4294967289, var_11))) ? var_8 : (~189)))) ? 122 : ((17 ? var_6 : var_3))));
                }
            }
        }
    }
    #pragma endscop
}
