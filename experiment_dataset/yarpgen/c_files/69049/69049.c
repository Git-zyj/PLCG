/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((!var_13) ? var_8 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = ((((min(-var_0, ((min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_0]))))))) ? (min(var_12, ((3794298322 ? 30 : var_13)))) : (((!((max((arr_1 [i_0] [13]), 7838787536416879537))))))));
                arr_5 [i_0] [i_0] = (min(-29336, (min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
