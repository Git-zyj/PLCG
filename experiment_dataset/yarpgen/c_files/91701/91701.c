/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((min(1, (min(1, 1)))));
                            arr_11 [i_0] [i_3] [i_0] [i_1] [i_2] [i_3] = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 = 1;
                            var_21 += ((!(4294967295 << 1)));
                            var_22 = (max(var_22, var_18));
                            arr_16 [i_4] = var_9;
                        }
                    }
                }
                arr_17 [0] [0] [i_0] = ((!(~var_6)));
                arr_18 [i_0] [i_1] = var_13;
            }
        }
    }
    var_23 = ((-6918578632424386991 ? 0 : 1));
    #pragma endscop
}
