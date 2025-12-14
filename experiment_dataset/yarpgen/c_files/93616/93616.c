/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (204 >= 34069);
                arr_6 [i_0] [2] = ((~((~(arr_0 [i_0] [i_1])))));
                arr_7 [i_0] = ((~(((var_14 & var_9) << (((562675075514368 ^ 32593) - 562675075546955))))));
                arr_8 [4] [i_1] [1] = ((-(((~20615) * (arr_4 [i_1] [i_0 + 1])))));
            }
        }
    }
    var_18 += var_6;
    #pragma endscop
}
