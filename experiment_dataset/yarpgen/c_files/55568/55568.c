/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((-(arr_0 [i_0 + 1])));
                    var_12 = (-(arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0 - 4]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 += (((arr_3 [i_0]) || (-13 - 8)));
                                var_14 = (arr_10 [i_2 - 1] [i_2 - 1] [i_3] [i_2 - 1]);
                            }
                        }
                    }
                }
            }
        }
        var_15 = (arr_3 [i_0 - 1]);
    }
    var_16 = (max(var_10, var_5));
    #pragma endscop
}
