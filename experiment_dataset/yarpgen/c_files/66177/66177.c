/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((188 & (((7864320 >= ((~(arr_4 [15] [15]))))))));
                var_21 = max((((!(arr_0 [i_0 - 1] [i_1])))), (max((~103), (arr_0 [i_0 + 1] [i_0 + 3]))));
            }
        }
    }
    var_22 = ((((332502961 > 4287102978) ? var_10 : ((var_5 ? var_3 : 4287102975)))));
    #pragma endscop
}
