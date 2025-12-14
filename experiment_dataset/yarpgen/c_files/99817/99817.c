/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_9, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = ((((max(-41, ((var_1 ? 545515814 : 9948625714953359952))))) ? (((((max(3629265097811391049, 4183857388577499718))) || (arr_0 [i_1 - 1])))) : (((!(arr_5 [i_0] [i_1 + 2] [i_2] [i_1]))))));
                    arr_7 [i_1] [i_1] [6] = (1449766648264934271 ? ((((12768372600657032551 != (arr_0 [10]))) ? ((((var_6 >= (arr_5 [i_0] [i_1 - 1] [i_0] [i_0]))))) : (((arr_0 [i_2]) / (arr_5 [i_0] [i_0] [16] [2]))))) : (((((arr_1 [i_0] [i_0]) || 4662390805418591396)))));
                    var_15 = (max(var_15, ((max((((4183857388577499740 | (arr_1 [i_0] [i_0])))), (arr_5 [i_0] [10] [i_0] [i_1 + 1]))))));
                }
            }
        }
    }
    var_16 = 18285340355222156959;
    var_17 = ((((((44 ? -545515805 : -187483074))) ? ((10141034849264791281 ? var_10 : var_13)) : (var_3 && var_13))) ^ (max(13071131161056540073, var_6)));
    #pragma endscop
}
