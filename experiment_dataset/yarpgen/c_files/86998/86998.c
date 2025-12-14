/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_12;
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_3] = ((var_0 - ((((max(-109, (arr_4 [i_1] [i_1])))) ? ((((arr_8 [i_0 + 2] [i_2] [i_3] [i_2]) < 203))) : -109))));
                                var_16 = (arr_5 [i_1]);
                                arr_15 [6] [i_1] [i_3] |= 84;
                            }
                        }
                    }
                }
                arr_16 [i_0] = 428632943;
                var_17 = ((((min(255, var_2))) || (((-(((var_8 && (arr_7 [i_1] [i_1] [i_1] [i_0 - 1])))))))));
            }
        }
    }
    var_18 |= var_1;
    #pragma endscop
}
