/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (arr_5 [i_0] [i_0] [i_0] [0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, -8919578572286826063));
                                var_15 = (min(var_15, (!var_5)));
                            }
                        }
                    }
                    var_16 = (max(var_16, (((-(max((max((arr_10 [1] [i_1] [i_2]), (arr_0 [i_0]))), (arr_2 [16] [16]))))))));
                    var_17 = ((!(arr_3 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    var_18 ^= 5267;
    var_19 = (max(-5261, var_1));
    var_20 = (((var_10 ? var_6 : 17170230627711208597)));
    var_21 = (((max(var_11, 1))) >= (((!(!28543)))));
    #pragma endscop
}
