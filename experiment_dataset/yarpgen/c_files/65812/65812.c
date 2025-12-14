/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_5, var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (min((((arr_0 [i_0 + 1]) - 13376113614822494570)), ((min(1661435902, (arr_1 [i_0]))))));
                                var_17 = var_6;
                            }
                        }
                    }
                }
                var_18 *= ((!(((var_8 ? (((-(arr_0 [i_0])))) : (((arr_4 [i_1] [i_1] [i_1]) ? 5070630458887057053 : 2133909016)))))));
                var_19 = (arr_11 [i_0] [i_0] [i_0] [0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
