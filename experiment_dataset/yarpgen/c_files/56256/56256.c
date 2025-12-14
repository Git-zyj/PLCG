/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (arr_2 [i_1] [i_0] [i_0]);
                arr_5 [i_0] = (max((arr_3 [i_0] [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 22187))));
            }
        }
    }
    var_13 = ((173 ? 0 : 255));
    var_14 = ((~(min((max(9015451100393931953, var_0)), var_1))));
    var_15 = ((var_4 ? var_8 : var_1));
    #pragma endscop
}
