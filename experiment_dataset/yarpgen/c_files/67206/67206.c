/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (arr_7 [i_0] [9] [i_2]);
                    arr_10 [i_2] [i_2] = ((var_9 - (arr_7 [i_0] [i_0] [i_0])));
                    var_13 -= var_4;
                    arr_11 [i_2] [i_0] [i_2] [i_2] = (arr_3 [2] [2]);
                    arr_12 [i_0] [i_1] [i_2] = ((!(arr_8 [i_2] [i_1] [i_2])));
                }
            }
        }
    }
    var_14 = ((~(!var_9)));
    #pragma endscop
}
