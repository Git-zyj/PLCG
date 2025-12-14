/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max((((~9007199250546688) ? 18437736874459004927 : (((18437736874459004934 ? var_9 : 2199023255551))))), ((~(((arr_4 [i_1]) ? 9007199250546676 : 9007199250546695))))));
                    var_17 = (((arr_3 [i_0] [i_1] [i_2 - 4]) ? ((-9007199250546688 | (~2051107713))) : 122));
                }
            }
        }
    }
    var_18 += var_8;
    var_19 |= ((((18 >= var_9) < (~-8779))));
    var_20 = ((max(var_14, var_3)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_21 = 2199023255571;
                var_22 = (min(var_22, (arr_12 [i_4] [i_4])));
                var_23 = (max(var_23, ((-18 != (arr_11 [i_3])))));
                var_24 *= 213;
            }
        }
    }
    #pragma endscop
}
