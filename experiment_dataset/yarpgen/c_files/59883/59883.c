/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((64879 << ((((1459 | (min(385620004, -6600620972115631955)))) + 6600620972115630661))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = ((((arr_4 [i_1] [i_1] [i_1]) ? var_11 : -2147483634)));
                            var_15 = (min(var_15, ((((((var_9 & (arr_11 [i_0] [i_1] [i_1] [i_3])))) ? ((((234 + (arr_4 [i_0] [i_0] [i_0]))))) : (((arr_7 [i_0] [i_1] [i_2] [i_3]) | -6600620972115631955)))))));
                            var_16 = ((((((14157843610385800394 | var_3) ? ((min((arr_10 [i_3] [i_3] [i_2] [i_1] [i_0]), 175))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_3])))) ^ (var_6 & 2848842164)));
                        }
                    }
                }
                arr_12 [i_0] [1] = min(3517476383, (((-(arr_8 [i_0] [10] [i_1])))));
            }
        }
    }
    #pragma endscop
}
