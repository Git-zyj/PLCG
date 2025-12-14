/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((!(((((var_8 ? var_4 : var_2))) || (var_10 && var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (((((((max(3275196240, -19047))) ? 3275196251 : (((min(913, (-127 - 1)))))))) < (3449251295566048002 ^ var_9)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [3] = (arr_5 [i_0] [i_4]);
                                var_13 = 43907;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
