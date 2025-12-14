/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((-32532 ? 31302 : -43));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 = (arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (~var_5);
                            var_15 = (5347 == 1);
                            var_16 = (max(var_16, -1482455908));
                        }
                    }
                }
            }
        }
    }
    var_17 = (636 && 638);

    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_18 = (max(var_18, 854932000));
        var_19 = (((arr_3 [i_4] [i_4]) ? (arr_6 [i_4 + 2] [i_4]) : (arr_3 [i_4] [i_4 - 1])));
        arr_12 [i_4] = (!var_5);
        arr_13 [i_4] = 252;
    }
    #pragma endscop
}
