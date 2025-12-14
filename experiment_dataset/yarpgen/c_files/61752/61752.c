/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_1;
    var_12 = ((((((min(63, 115))))) - var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(var_2, ((~((-21264 ? -32753 : -21))))));
                arr_6 [i_1] = ((((max((arr_4 [i_1]), (arr_2 [i_0 + 1] [i_0 - 1])))) ? (arr_1 [i_0 + 1]) : ((25611 | (9678 | 15)))));
            }
        }
    }
    var_13 = (max(246, 0));
    var_14 = -3468869135601538547;
    #pragma endscop
}
