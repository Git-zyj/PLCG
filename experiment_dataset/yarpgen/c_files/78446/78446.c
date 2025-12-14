/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((3684714680 << (2997029198173283716 - 2997029198173283716)));
    var_14 = ((((((var_11 ? var_1 : var_3)))) ? ((var_5 ? (~10401420513334835432) : ((var_5 ? var_1 : var_8)))) : var_4));
    var_15 = (min(var_15, ((((((17750 ? 9622476584698980361 : var_9))) ? ((1 ? 1 : var_3)) : var_5)))));
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((!(((((max(var_9, (arr_7 [i_1] [i_2])))) ? var_8 : (9223372036854775807 / var_11))))));
                    arr_10 [6] [i_1] [i_2] [6] = 187;
                }
            }
        }
    }
    #pragma endscop
}
