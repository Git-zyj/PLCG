/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_2, (min(((var_6 ? var_11 : var_6)), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = (-((var_6 ? (min(-524086250, var_4)) : ((((arr_1 [i_0] [i_0]) && (arr_0 [i_1])))))));
                arr_5 [i_0] [i_0] &= -524086258;
            }
        }
    }
    var_13 = ((-524086253 ? ((1938251226 ? var_5 : var_3)) : (((((1 ^ 1938251226) || -524086252))))));
    var_14 = (2147483647 || 8);
    #pragma endscop
}
