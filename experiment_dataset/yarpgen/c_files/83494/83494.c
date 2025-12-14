/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [10] = (min(((min(25, 25))), (min(1, (arr_7 [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3])))));
                                var_16 *= 465231398;
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_0] = (max(((min(var_0, 236))), (min(((min(0, -22704))), (min(17496702727439579835, 85))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 -= var_11;
                                var_18 ^= (min(123, 2812756701416318802));
                                arr_21 [i_1] [i_1] [i_5] [i_6] [i_7] = (min((min(((min(19, -24030))), (min(var_3, (arr_14 [2] [i_1] [i_1] [i_1]))))), (((max(42012, var_2))))));
                                var_19 |= 246112132;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_4, 4398046511103));
    var_21 = 246112130;
    #pragma endscop
}
