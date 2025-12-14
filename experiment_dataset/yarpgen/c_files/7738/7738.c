/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [17] [i_2] [i_1] = (min((min(((794254699 ? 89 : (arr_0 [18] [i_1]))), (arr_5 [i_0] [i_1] [i_2]))), (((max(-12744, (arr_2 [i_1] [i_2])))))));
                    var_20 &= max((((~(arr_4 [i_0] [i_1] [i_1])))), (arr_5 [i_0] [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_22 = arr_10 [i_0] [i_0] [i_2] [i_1];
                                var_23 = (min(((((1 & (arr_11 [i_0] [i_1] [4] [4] [15]))) << ((((~(arr_5 [i_3] [i_2] [i_0]))) + 238)))), -101));
                                var_24 = (-(min(var_16, (min(0, (arr_6 [i_0] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_14, 4398046511103));
    var_26 *= (min(var_9, var_2));
    var_27 = var_15;
    #pragma endscop
}
