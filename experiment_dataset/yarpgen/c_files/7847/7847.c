/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = ((((-2147483647 - 1) & 2147483647)));
                var_11 = (((0 ? 203841259 : 0)) != (min((-2147483647 - 1), 524160)));
                var_12 -= (3230 != 40537);
                arr_6 [i_0] = 11188947300408237554;
                var_13 = (min(var_13, (min(((26 ? 10494525427446398343 : 25027)), 0))));
            }
        }
    }
    var_14 = 10494525427446398343;
    var_15 |= ((-13628 >> (4333685962941704851 && 185)));
    #pragma endscop
}
