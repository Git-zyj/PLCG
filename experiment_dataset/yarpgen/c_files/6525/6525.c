/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (min((arr_1 [i_0 + 3]), var_3));
                var_13 = (arr_1 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_14 ^= 7938981306063199970;
                                var_15 = (max((max(15425850709187226690, 7938981306063199970)), ((68 ? 10507762767646351645 : 0))));
                            }
                        }
                    }
                }
                arr_17 [i_2] = (((((var_0 ? var_10 : var_3))) ? (37077244 / -var_1) : (((15410 >= (arr_2 [i_3 - 2] [i_3 - 1] [i_3]))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_16 |= (max((0 != var_2), ((var_8 && (!2113044230)))));
                            var_17 -= var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
