/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 = var_2;
                            arr_14 [i_0] [i_1] [i_2] = arr_5 [i_0] [i_1] [24];
                            arr_15 [i_0] [i_1] [11] [i_3] = (arr_10 [i_0] [i_0] [7] [i_1] [i_2] [i_3]);
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_3] [20] = (((arr_13 [i_0]) * (max((~1), -173))));
                        }
                    }
                }
                var_15 += (min((((arr_5 [i_0] [i_1] [i_1]) + (arr_5 [i_0] [i_0] [i_0]))), (((arr_5 [i_0] [15] [i_1]) + var_12))));
            }
        }
    }
    var_16 = (((min((-9223372036854775807 - 1), 63)) != 17973));
    var_17 = (max(((((-9103984506766935510 ? var_4 : 47568)) / 24759)), -22036));
    var_18 = var_0;
    #pragma endscop
}
