/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_7;
    var_11 = var_2;
    var_12 = ((max(((max(1, var_8))), -var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(24742, (((((1 ? 57 : 103564626))) ? (5337365789688538682 & 1) : (~255)))));
                var_13 = (((arr_0 [i_1]) > ((59 ? 1 : (arr_0 [i_0 + 2])))));
            }
        }
    }
    var_14 = (!1);
    #pragma endscop
}
