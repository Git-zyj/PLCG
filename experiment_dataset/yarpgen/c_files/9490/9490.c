/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-9374 ^ 1) & var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((min(-9395, -2467))) ? ((((var_11 && (arr_1 [i_0] [i_0]))))) : (((var_5 + 9223372036854775807) >> (arr_1 [i_0] [i_1]))))) & ((var_5 ? var_3 : (((max((arr_4 [i_0] [i_1]), -2149))))))));
                arr_6 [i_1] = ((-(max(((max(-2299746926649623361, (arr_4 [i_0] [i_1])))), ((var_4 ? var_11 : (arr_3 [i_0] [9])))))));
                arr_7 [i_0] [15] = (min((((arr_1 [i_0] [i_1]) * (arr_1 [i_0] [i_1]))), (max((arr_1 [13] [i_1]), 527318345))));
            }
        }
    }
    var_13 = ((((((((max(var_9, 1)))) / (min(var_10, 1073741696))))) / (((var_10 / var_5) ? (var_5 & -527318323) : ((1 ? var_2 : var_0))))));
    var_14 = (!var_2);
    #pragma endscop
}
