/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2775665271329849134;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])));
                    arr_9 [i_1] [9] [i_0] [i_1] = (min((((-761540762 ? 65533 : -2775665271329849121))), (((arr_8 [i_0] [i_0] [i_0 + 1] [i_0 - 1]) + (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
    }
    var_14 = (max(var_7, -2775665271329849128));
    #pragma endscop
}
