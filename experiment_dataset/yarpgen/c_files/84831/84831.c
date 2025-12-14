/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((var_12 - var_13), (min(var_6, 1653132162246018333))));
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [2] [i_1] [i_0] [i_2] = ((var_2 ? ((((arr_6 [i_0]) | (arr_7 [i_0] [i_0] [i_0])))) : (arr_0 [i_0])));
                    arr_11 [i_2] [i_2] [i_2] = (127 ? ((min(47, 0))) : (-2831563910426599321 & 33392));
                }
            }
        }
    }
    #pragma endscop
}
