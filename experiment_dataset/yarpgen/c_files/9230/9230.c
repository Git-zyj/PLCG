/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775807;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 += var_4;
                    arr_6 [i_0] [i_0] [i_0] [i_1] = min(62, -9);
                    var_12 = (max(((((arr_2 [i_2 + 1] [i_1 - 2]) | 105))), ((var_9 | ((var_0 ? var_0 : -9))))));
                }
            }
        }
        var_13 = (arr_5 [i_0] [i_0]);
    }
    #pragma endscop
}
