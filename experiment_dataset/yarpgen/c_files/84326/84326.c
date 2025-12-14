/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = 6613357570644596012;
                var_14 -= (min((min((((7668461380032569935 ? var_0 : var_11))), var_5)), (((((7668461380032569937 ? 49430 : var_10)) > var_2)))));
            }
        }
    }
    var_15 = (var_1 > var_5);
    #pragma endscop
}
