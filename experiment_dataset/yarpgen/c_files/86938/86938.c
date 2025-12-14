/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (((min((((arr_2 [i_0] [i_1] [i_2]) << (arr_5 [i_2] [i_1] [i_1] [i_1]))), 1))) ? 1 : ((~(~var_2))));
                    var_14 = min((min((arr_5 [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_5 [i_2] [i_0] [i_0] [i_0]))), (arr_7 [i_1 - 1] [i_2]));
                    var_15 = (+((2 ? (arr_4 [i_0] [i_0]) : (arr_5 [i_2] [i_1 - 1] [i_1 - 1] [i_2]))));
                    var_16 *= var_4;
                    arr_8 [1] [i_2] [i_0] = ((~(arr_7 [i_1 - 1] [i_2 + 3])));
                }
            }
        }
    }
    #pragma endscop
}
