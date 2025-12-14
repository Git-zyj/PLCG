/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((-(((!((((arr_2 [i_0] [1]) ? 0 : (arr_3 [i_1] [i_0] [i_0])))))))));
                var_18 = (min(var_18, (arr_3 [i_0] [i_1] [i_0])));
                var_19 = ((!(((max(0, (arr_1 [i_1])))))));
            }
        }
    }
    var_20 |= var_7;
    #pragma endscop
}
