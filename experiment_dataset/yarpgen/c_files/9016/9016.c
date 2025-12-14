/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_0));
    var_19 = (min(var_19, (!3475997309)));
    var_20 = (((max((~var_9), var_12)) + (var_7 > 537237276)));
    var_21 &= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 -= (arr_2 [15]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (arr_7 [i_4] [i_1]);
                                var_23 -= (min(((min(-1, (min(1818071806, 1))))), ((-2982465129420077952 ? (arr_11 [i_0] [i_0] [i_0] [i_1]) : (arr_11 [4] [i_1] [18] [i_1])))));
                                var_24 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
