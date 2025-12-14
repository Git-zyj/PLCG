/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= (((-2120988510 ? 13818939585222790618 : -2120988510)));
                arr_5 [i_0] [i_0] [i_1] = (((arr_1 [i_1 - 1]) ? (arr_3 [15]) : var_10));
                arr_6 [14] = (arr_4 [i_1 + 2] [i_1 + 2]);
                arr_7 [3] = (arr_2 [i_1 + 1]);
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
