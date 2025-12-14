/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-9223372036854775806 / 57) ? var_17 : (var_1 / var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = 174;
                                var_21 = var_15;
                                var_22 = var_9;
                                var_23 = (max(var_23, ((((((2730841255 ? ((var_10 ? var_17 : (arr_4 [i_0] [i_1] [i_1] [0]))) : (arr_6 [i_2 + 1] [i_3 - 1] [i_4 - 4])))) ? ((((max(1564126049, var_0))))) : ((~(max((arr_6 [9] [i_1] [i_2]), var_13)))))))));
                            }
                        }
                    }
                    var_24 = (~16750378346567547290);
                }
            }
        }
    }
    var_25 = (~-84);
    #pragma endscop
}
