/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(7, 2147483646));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [3] [1] [18] [18] = (var_9 * 1448119225);
                    var_12 = (!1226898714);
                    var_13 = arr_5 [i_0];
                }
            }
        }
    }
    var_14 = ((~(~var_2)));
    #pragma endscop
}
