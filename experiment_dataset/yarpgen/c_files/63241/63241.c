/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = ((var_12 ? (min(((min(var_5, var_6))), var_11)) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((var_1 >> (((arr_2 [i_0 + 1]) - 2464168195))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_3] [1] [i_2] [i_0] = 5059871401505757572;
                                arr_16 [i_0] [i_1] [1] [1] [0] [i_4] &= (arr_14 [10]);
                                var_17 *= var_2;
                                arr_17 [i_2] = 1;
                                arr_18 [i_0] [i_1] [i_2] [i_1] = ((1 ? 1 : (arr_14 [i_2])));
                            }
                        }
                    }
                    var_18 = (((((-(arr_10 [1] [i_1 + 1] [i_2] [i_1])))) ? var_10 : 8799646799628613145));
                }
            }
        }
    }
    var_19 = (min(var_19, (~var_8)));
    #pragma endscop
}
