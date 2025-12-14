/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1736642978 % (min(var_2, var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [13] [i_0] = (((min(((max((arr_3 [i_0] [i_0] [i_1]), 255))), (((arr_2 [i_0]) ? var_16 : (arr_1 [i_0])))))) ? ((((max((arr_1 [i_0]), var_1))) ? ((-(arr_1 [i_0]))) : ((var_6 ? 39 : (arr_0 [i_0]))))) : (((arr_2 [i_0]) % ((min(var_1, var_5))))));
                arr_5 [i_0] = var_16;
                var_19 -= ((((min((arr_3 [i_0] [i_0 + 2] [i_0 - 1]), (arr_3 [i_0] [i_0 + 1] [i_0 - 1])))) % (((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? var_5 : -var_5))));
            }
        }
    }
    var_20 -= var_5;
    #pragma endscop
}
