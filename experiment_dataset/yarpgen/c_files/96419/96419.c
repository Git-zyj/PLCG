/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((max(((var_6 ? var_0 : 1968806430)), var_2)), ((var_1 ? (max(var_8, 2326160886)) : (2326160853 && var_3))));
    var_14 = (((((var_9 ? ((2326160891 ? var_0 : 1968806410)) : (~var_5)))) ? (max((!2326160886), ((var_6 ? var_5 : var_9)))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((max(var_3, (arr_5 [i_1] [i_1]))));
                arr_7 [i_1] = (max(((max(-1, -var_3))), (max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 4])))));
                var_16 = (-(arr_5 [i_1] [i_1]));
                var_17 = ((((max(var_0, (arr_4 [i_0 - 1] [i_1] [i_0 + 1])))) ? ((-(((arr_4 [i_0 - 2] [i_0] [i_1]) ? (arr_2 [i_0 - 1]) : var_0)))) : 1968806405));
            }
        }
    }
    var_18 = (max(-11, var_9));
    var_19 = 1968806397;
    #pragma endscop
}
