/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 *= (min(-30462, 3128857665));
                var_15 = (min(var_15, ((((((-(arr_0 [i_0] [i_0 + 2])))) ? ((~(((arr_0 [i_0 + 2] [i_0 + 2]) >> (var_13 - 16992))))) : (7 && -118))))));
                arr_5 [i_0] = (min((var_1 && 1), ((((((-88 + 2147483647) >> (-54 + 54)))) ? var_1 : var_11))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_5] [7] [i_5] [i_6] = var_3;
                                var_16 = var_10;
                                arr_21 [i_2] [i_2] [i_4] [i_5 + 1] [i_6] = ((var_11 ? var_0 : ((~(arr_13 [i_3] [11] [i_5 + 2] [i_5 + 2])))));
                                var_17 = (min(var_17, -32416));
                            }
                        }
                    }
                }
                var_18 = ((((var_7 != ((min(-32416, var_13))))) ? 7 : (arr_12 [i_2 + 1] [i_3])));
            }
        }
    }
    var_19 = var_3;
    var_20 = var_10;
    #pragma endscop
}
