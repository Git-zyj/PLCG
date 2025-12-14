/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58367
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
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [7] = (max(var_13, -1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = ((~(max((arr_7 [i_0] [9]), (((~(arr_4 [i_0] [i_3] [i_0] [i_0]))))))));
                                var_19 = (max(var_19, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_0 / var_5) ? (var_0 / var_4) : 1468876283));
    var_21 = (max(var_21, (((-((~(min(1468876287, 0)))))))));
    #pragma endscop
}
