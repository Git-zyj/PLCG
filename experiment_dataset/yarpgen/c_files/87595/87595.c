/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = var_10;
                arr_5 [i_1] [i_1] = (max((arr_1 [i_0] [i_1]), (~-6)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_0] = min(11445814134552489917, 9223372036854775807);
                            var_19 = (((arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) ? (1 / -22916) : ((min((arr_8 [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_20 += (min((~-1), -0));
    var_21 = (max(var_21, (((~((-65 & (!var_1))))))));
    var_22 = var_13;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_23 = (min(-8, 11));
                            var_24 = (min(var_24, var_0));
                            var_25 ^= ((0 ? ((((max((arr_14 [i_7]), 46))) ? (min(var_0, var_4)) : (((var_3 ? 1 : 2695369996877504922))))) : (arr_21 [i_7] [i_6] [i_5] [i_4] [i_4])));
                        }
                    }
                }
                var_26 = var_1;
            }
        }
    }
    #pragma endscop
}
