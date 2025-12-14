/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_1;
    var_20 = (max(var_20, ((max((~9539526192957421531), ((max((~var_0), (-67 | var_7)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (((15343 - 20791) ? var_18 : 50192));
        var_22 |= var_8;
        arr_2 [i_0] = (-118 ? (4294967281 + 0) : (!15343));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_23 = var_14;
                arr_7 [i_1] = (((var_11 & var_3) ? (50195 / 50193) : (!var_10)));
                var_24 = ((-var_2 ? (~var_10) : (var_8 == var_18)));
            }
        }
    }
    #pragma endscop
}
