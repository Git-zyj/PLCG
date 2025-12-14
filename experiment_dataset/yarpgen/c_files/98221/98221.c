/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (min(var_3, (min((var_0 + var_5), var_6))));
    var_12 = ((((min(((var_1 ? var_6 : 4377127722131082063)), (((4198262982 ? var_1 : var_0)))))) ? var_3 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [16] [i_1] = (((arr_4 [i_1 + 3] [i_1 + 1] [i_1]) && ((((((arr_2 [i_0 - 2]) + 2147483647)) >> (var_6 - 23420))))));
                arr_6 [i_0 + 1] = (((((var_9 ? (var_8 | 96704310) : ((var_1 ? 4198262982 : (arr_0 [i_0 + 2] [i_0 + 2])))))) ? ((var_6 ? var_7 : (arr_3 [i_0 - 2]))) : (((var_1 ? 1 : (arr_2 [i_1 + 2]))))));
            }
        }
    }
    #pragma endscop
}
