/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~(~-5847488790380997908))) - var_11));
    var_18 = (((~var_0) ? 1 : ((((min(var_1, var_14))) ? var_1 : (var_14 / var_3)))));
    var_19 = (var_1 - var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [7] = (arr_2 [i_0 + 3] [i_0 + 3] [i_0]);
                arr_5 [i_0 + 3] [1] = ((((var_7 < (min((arr_2 [i_1] [i_0] [i_0]), 2045538695)))) ? ((((134217472 ? -6397803325119291396 : var_7)) | var_14)) : (max((arr_1 [i_0 + 3]), 8509811588583657720))));
                var_20 = (max((arr_0 [i_1]), ((-(max(var_14, -32119))))));
            }
        }
    }
    var_21 = (min(var_21, (((1 ? var_12 : var_3)))));
    #pragma endscop
}
