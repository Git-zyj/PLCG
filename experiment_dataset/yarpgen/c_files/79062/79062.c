/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] [i_2] = (!16382);
                    var_16 = (((((arr_5 [i_0]) << (((arr_5 [i_2 + 1]) - 3129621652)))) > (arr_5 [i_0])));
                }
                var_17 = (max(var_17, (((max(408664377, (arr_5 [i_1])))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_18 = (288160007407534080 << (((arr_13 [1] [i_3] [i_3 - 1] [1] [i_3 - 1]) - 2584911034)));
                            arr_15 [2] [i_1] [15] [5] [1] [i_4] = ((4070 ? ((max(25581, -1336749219))) : ((7 ? ((var_8 ? (arr_6 [14] [i_4] [i_3 - 1] [4]) : var_6)) : var_15))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, (((((max(var_3, (-5794231668988083707 | 63488)))) ? var_13 : ((max(var_4, ((4294967295 ? var_8 : -25589))))))))));
    var_20 += var_5;
    #pragma endscop
}
