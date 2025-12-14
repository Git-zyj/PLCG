/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [15] [i_1] = (min((max((~var_7), 1)), (((arr_2 [i_1] [9]) ? 1 : ((~(arr_2 [i_1] [i_0])))))));
                var_13 = var_0;
                arr_6 [i_0] [i_1] [i_1] = (arr_3 [i_0 + 3] [i_0 + 3] [i_0]);
                var_14 = (min((min((max(18446744073709551600, 152)), 25530)), ((min(((var_4 ? var_9 : 12)), (0 > 168))))));
            }
        }
    }
    #pragma endscop
}
