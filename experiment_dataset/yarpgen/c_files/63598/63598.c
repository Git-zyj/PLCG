/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((((262080 ? var_10 : var_2)) >> (!1284333231447572742))))));
    var_17 = ((((((28290 ? 12730 : 28298)))) ? ((min((!100), var_14))) : (!-25867)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] [11] = (+((-(((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0] [i_1 + 1]))))));
                arr_8 [i_0] [i_0] [i_0] = ((!((((-905771687763125494 + 9223372036854775807) >> (((arr_2 [i_0] [i_0]) - 27962)))))));
            }
        }
    }
    #pragma endscop
}
