/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((-(5006225374159463347 ^ 383741117)))) ? (((var_11 ? (arr_1 [i_0] [i_0]) : var_4))) : ((~(max(var_9, var_2)))));
                arr_6 [i_0] [i_1] [i_1] = (((arr_4 [i_1] [i_0]) ? var_11 : (((var_1 ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]))))));
                arr_7 [i_0] [i_1] [i_1] = var_0;
                var_17 = (min(var_17, (383741117 == 4294967287)));
            }
        }
    }
    var_18 *= ((((!((min(3911226179, 0))))) ? ((1 ? 3911226193 : 383741105)) : var_15));
    var_19 *= (((min((var_2 || var_10), (!var_7))) && var_11));
    #pragma endscop
}
