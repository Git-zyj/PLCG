/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 - 1] [i_4] [i_3] [i_4] &= 216;
                                var_19 *= (!(arr_9 [i_0] [i_0] [i_4] [i_2 + 1] [i_2 + 1] [i_4]));
                                var_20 -= ((+(((arr_6 [i_0] [i_0]) & ((((arr_0 [i_4]) ? var_15 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] [i_1] = ((!(!8756)));
                }
            }
        }
    }
    var_21 ^= (min(var_2, (((!var_12) ? var_1 : var_14))));
    var_22 = (min(var_15, (min(var_11, (!var_3)))));
    #pragma endscop
}
