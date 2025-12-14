/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 324822499;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] [i_1] = 4625;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0 - 1] [i_3] [i_4] [i_4 + 1] = 2073528630;
                                var_11 = (((((var_0 ? (50382 >= 11994417201707625584) : 324822499))) ? (((((2221438665 ? 2221438661 : var_5))) ? (min(3920789860982155191, var_3)) : 253)) : var_8));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (-64 ? 2073528630 : ((109471843771430811 ? 3920789860982155191 : var_9)));
            }
        }
    }
    #pragma endscop
}
