/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 -= 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 -= (arr_2 [i_1 + 1]);
                            var_16 = (((((arr_8 [i_1] [i_1] [i_1]) >> (((arr_5 [i_3] [i_2] [i_2]) - 55)))) >> ((((max(-1, 99))) - 76))));
                            var_17 = (arr_1 [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = (arr_12 [i_1] [14] [i_5]);
                            var_19 = (max(var_19, (((((((99 != 46) < 156))) / (arr_4 [i_0]))))));
                        }
                    }
                }
                var_20 -= (arr_16 [i_1] [i_0] [i_0] [i_1 + 1] [i_1] [10]);
            }
        }
    }
    var_21 = (min(var_21, ((max(var_8, (max(var_13, 105)))))));
    var_22 ^= ((var_1 || (!85)));
    #pragma endscop
}
