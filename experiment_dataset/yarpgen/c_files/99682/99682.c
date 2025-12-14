/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 += (((((3769437792 || 525529503) ? -var_13 : ((((arr_0 [i_0] [6]) ? (arr_4 [i_1 + 1] [9] [i_1 + 1]) : (arr_1 [i_1] [i_0])))))) > ((-((18446744073709551615 ? 1 : 18446744073709551615))))));
                arr_5 [i_1] [i_0] = ((525529504 && -486142313) ? (min((!-14378), ((var_2 ? 525529503 : (arr_2 [i_0]))))) : (--12922));
            }
        }
    }
    var_16 = ((((var_2 ? var_12 : ((var_5 ? 18446744073709551615 : var_1)))) >> (-14378 + 14385)));
    #pragma endscop
}
