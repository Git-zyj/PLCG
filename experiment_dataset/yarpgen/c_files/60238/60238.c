/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((arr_1 [i_0 + 1]) ? (arr_2 [1] [i_0]) : (arr_3 [i_0])));
                var_19 = (~-940620550);
                var_20 = ((((min(((((arr_3 [i_0]) && (arr_2 [i_0 + 1] [i_0])))), (arr_2 [i_0 - 1] [i_0])))) || ((!((min((arr_3 [i_0]), var_5)))))));
            }
        }
    }
    var_21 = (((((556761538 > var_9) == var_0)) ? (((((1 ? var_5 : var_15))) ? var_5 : (min(var_4, 3655944203)))) : var_9));
    #pragma endscop
}
