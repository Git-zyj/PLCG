/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (((var_10 + 2373108456) ? (max(((max(2373108435, -29032))), var_0)) : var_11));
    var_18 = 9162352974639326661;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((-((max(-29034, (arr_2 [i_1] [i_1])))))) >> ((((3347943264 ? var_7 : (var_15 * var_6))) - 24))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((((arr_10 [i_4] [i_3] [i_1] [i_1]) | 3885236510073110639))) ? (-29032 * var_8) : (arr_2 [i_1] [i_2]))))));
                                var_20 = (((((var_0 ? 1098964392 : (var_8 != -1)))) | ((-1 ? (min(var_5, 119)) : var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
