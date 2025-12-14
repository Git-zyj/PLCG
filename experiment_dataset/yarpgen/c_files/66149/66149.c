/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 3636987422;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 += -124;
                                arr_13 [i_4] [i_3] [i_1] [i_0] = (!var_5);
                                var_15 = (max(var_15, ((!((var_9 != (arr_9 [i_0] [i_1] [i_4 - 1] [i_3] [i_4] [i_0])))))));
                            }
                        }
                    }
                    var_16 *= arr_0 [i_0] [i_1];
                    arr_14 [i_0] [i_1] [i_2] [i_0] = (((-19636 ? var_6 : -968978251)));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_18 [i_5] = 24799;
        arr_19 [i_5] [i_5] = ((!(arr_15 [i_5])));
        var_17 &= (max(1, ((-(arr_16 [i_5] [i_5])))));
    }
    #pragma endscop
}
