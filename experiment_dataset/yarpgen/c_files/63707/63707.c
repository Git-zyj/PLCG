/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = -26434;
                var_10 |= (max((16276 ^ -26433), (((arr_1 [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : ((1116892707587883008 ? var_0 : 0))))));
            }
        }
    }
    var_11 = (9223372036854775807 != 26445);
    #pragma endscop
}
