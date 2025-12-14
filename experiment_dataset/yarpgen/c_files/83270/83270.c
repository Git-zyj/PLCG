/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((~var_0) | ((min(var_4, 2001587366))))) | (((((max(var_2, var_6))) & (~var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((~((max((arr_3 [18] [i_1] [18]), var_6))))) != 29410);
                    arr_8 [i_0] [i_0] = ((!((255 || (arr_2 [i_2] [5])))));
                }
            }
        }
    }
    var_14 = ((~(min(var_2, ((255 ? var_7 : var_0))))));
    var_15 = (max(var_0, ((((var_4 + 2147483647) << (((var_12 / var_11) - 1)))))));
    #pragma endscop
}
