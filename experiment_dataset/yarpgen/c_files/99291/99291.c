/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = 0;
                    var_18 = (-(((!((max((arr_1 [i_0] [i_0]), 107)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_19 = var_6;
                arr_12 [7] = 8;
                var_20 = 37;
            }
        }
    }
    var_21 = (((((((112 ? 99 : 2712345912)) * (94 * -6)))) ? var_3 : ((((!(!0)))))));
    var_22 = ((min(var_11, ((min(99, var_14))))));
    #pragma endscop
}
