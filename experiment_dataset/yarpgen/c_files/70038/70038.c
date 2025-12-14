/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [9] [i_3] [i_0] [i_1] [i_0] = var_13;
                            var_16 = (min((~0), (min(0, var_4))));
                            var_17 = var_2;
                        }
                    }
                }
                arr_13 [11] [i_1] [i_0] = (min(756369209, -756369209));
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [7] = var_1;
                                var_18 = ((max(-34703707, 756369209)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
