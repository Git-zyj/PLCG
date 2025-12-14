/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 += (max(((7 ? (arr_2 [i_0] [i_0 + 1] [i_0]) : var_5)), 1));
                arr_5 [i_0] [i_0] = (max((!-458321131), var_13));
                arr_6 [i_0] [i_0] = ((min(((var_2 ? (arr_2 [i_0 + 3] [i_0 + 2] [i_0 - 1]) : var_4)), 288854416)) ^ (~458321141));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (((arr_4 [i_0 + 2]) ^ ((var_10 ? (((arr_3 [i_0] [i_0]) ? 1 : -288854416)) : 1))));
                            var_20 = 8191;
                            var_21 = var_11;
                            arr_13 [i_3] [i_3] [i_0] [i_3] = (((arr_3 [i_0] [i_0]) ? 1 : (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_10;
    var_23 = var_5;
    #pragma endscop
}
