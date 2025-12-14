/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, -32757));
                                var_11 = (max((((((arr_12 [9] [i_2] [i_4 - 2] [i_4] [i_4] [i_4]) + 2147483647)) << (32750 - 32750))), 213));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (((((32757 - (-1905994250 + var_8)))) ? (((((-32762 + (arr_1 [i_1])))) ? (min((arr_2 [i_1]), var_2)) : (arr_9 [i_0] [i_0] [13] [13] [i_1] [i_1]))) : (var_8 + 32753)));
                var_12 = (var_2 ? (((arr_7 [i_0] [5] [i_0 + 2]) ? -2144459265 : (arr_7 [i_0] [13] [i_0 + 2]))) : -2144459281);
            }
        }
    }
    var_13 = 13264087246533253728;
    var_14 = var_8;
    #pragma endscop
}
