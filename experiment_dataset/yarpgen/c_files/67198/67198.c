/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((3749033684 ? 932347900 : -4319));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_0] = ((((arr_5 [i_1 - 1] [i_1] [i_1] [i_0]) ? (arr_5 [i_1 + 1] [6] [i_1] [i_0]) : (arr_5 [i_1 - 3] [i_1 - 3] [i_1] [i_0]))));
                    var_14 -= ((((((((arr_5 [i_0] [i_1 + 1] [i_1 - 3] [i_2]) + 9223372036854775807)) >> (((arr_5 [i_0] [i_1 + 1] [i_1 - 2] [i_2]) + 7695699839695616655))))) ? var_12 : (arr_5 [i_0] [i_0] [i_1 - 3] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
