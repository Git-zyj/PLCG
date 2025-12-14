/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 += (((var_19 ? 22895 : (arr_10 [7]))));
                                arr_11 [i_0] [i_1] [4] [i_3] [3] [i_4] [6] = (max(var_3, (max(-22895, 10317877893243375330))));
                            }
                        }
                    }
                    var_21 = (~var_12);
                }
            }
        }
    }
    var_22 &= var_6;
    #pragma endscop
}
