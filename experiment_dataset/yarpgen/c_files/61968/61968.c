/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((((0 ? var_3 : 0))) ? (min(var_0, var_3)) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_10 [i_3] = (max(((((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) ? 1 : (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))), ((20 ? -31263 : var_5))));
                                var_11 = 0;
                                var_12 = ((arr_0 [i_0] [i_1]) | ((~(arr_9 [i_0] [i_1] [i_4] [i_3 + 1] [i_4]))));
                            }
                        }
                    }
                }
                var_13 += (min((arr_4 [i_0] [i_0] [i_1] [i_1]), ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) % 15943)))));
            }
        }
    }
    #pragma endscop
}
