/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((!(~152383275))) ? var_5 : 1);
    var_14 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_6, (((((arr_1 [i_1]) | var_10))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 -= -0;
                                var_17 = -94;
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] = var_8;
                var_18 = -152383275;
            }
        }
    }
    var_19 = (min(var_19, var_9));
    #pragma endscop
}
