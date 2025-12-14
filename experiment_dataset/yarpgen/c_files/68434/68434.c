/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 1971901291;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (min(((((arr_2 [i_0 + 1] [i_1]) && (arr_2 [i_0 + 3] [i_1])))), var_9));
                var_16 = (((((min(3221225472, (-127 - 1))) + 2147483647)) << (var_11 && 6697810801178744241)));
                var_17 -= 896;
                var_18 |= ((max(-4743688616157301435, 0)));
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
