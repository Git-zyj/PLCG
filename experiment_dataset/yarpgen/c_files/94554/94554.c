/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((1 ? (arr_2 [i_0]) : 60))) ? (((((arr_5 [i_0] [i_1]) || (arr_2 [i_0]))))) : (max((arr_1 [i_0] [i_1]), (arr_2 [i_0]))))));
                arr_7 [i_0] [i_0] = (arr_4 [i_0] [i_1 + 2]);
                var_19 = ((((((arr_1 [i_1 + 2] [i_1 + 1]) + (arr_1 [i_1 + 2] [i_1 + 2])))) ? ((((4294967295 > (arr_1 [i_1 + 2] [i_1 + 2]))))) : var_15));
            }
        }
    }
    var_20 = (var_11 < 782611448);
    var_21 = (((~var_16) ? var_14 : var_11));
    #pragma endscop
}
