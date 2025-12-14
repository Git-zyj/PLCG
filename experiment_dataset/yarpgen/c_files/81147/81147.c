/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((((~(arr_0 [i_0])))) ? (~var_7) : (arr_0 [i_0])));
                var_19 = (min(var_19, (((-(((arr_2 [0]) & var_12)))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (arr_4 [i_1 + 1] [i_0] [i_1 + 1]);
                                var_21 |= ((!((((!247) ? ((((arr_0 [12]) - 1830771417))) : -7427154243438548865)))));
                                var_22 = ((~((~(arr_10 [i_2 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 - 1])))));
                            }
                        }
                    }
                }
                var_23 = (min(-363894361, 2147483647));
                arr_11 [i_0] = ((var_6 ? (((~-7427154243438548865) | (arr_6 [i_1 + 1] [i_1 + 2]))) : (((~(arr_4 [i_0] [i_0] [i_1 + 1]))))));
            }
        }
    }
    var_24 = (((((~(min(-2147483628, var_5))))) ? (min((min(var_14, -11438)), var_0)) : var_4));
    var_25 = var_14;
    #pragma endscop
}
