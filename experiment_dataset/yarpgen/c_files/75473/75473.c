/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((0 ? var_6 : 98));
    var_18 = (((min(var_4, var_2))) ? -102 : var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = min((((arr_1 [i_1]) - (arr_1 [i_0]))), (arr_3 [i_0]));
                arr_4 [i_0] [i_0] = (0 ? (((((!3800895621957830552) || (arr_2 [i_0] [i_1]))))) : ((12601143453352726152 | (arr_3 [i_0]))));
                var_20 = (max(var_20, (~var_0)));
            }
        }
    }
    #pragma endscop
}
