/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_10, 48)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (70 & -6498011221900687812);
                    var_14 = ((!((!((min(39, var_6)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [3] = -113;
                                arr_12 [i_0] [i_1] [i_0] [i_0] = 32757;
                                var_15 = (arr_6 [1] [i_1] [1] [i_3]);
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = -30141;
                                var_16 = arr_4 [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
