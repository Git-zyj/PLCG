/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~-var_9)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = var_1;
                        var_17 ^= ((10359 ? (~10357) : -10353));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_18 &= var_7;
                                var_19 = var_7;
                                var_20 = (max(var_20, ((max(((max(var_6, (min(-10355, (arr_8 [i_0 + 2] [i_1 - 1] [i_0 + 2] [i_0 + 2] [i_5] [i_2])))))), (~-10353))))));
                                arr_18 [4] [i_1] [i_0] [6] [i_1] [i_1] = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] = -10353;
                                var_21 = (min((!var_11), (arr_16 [i_0 - 1] [i_1 + 3] [i_2] [16])));
                                var_22 = (max(var_22, (!var_1)));
                                var_23 -= var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
