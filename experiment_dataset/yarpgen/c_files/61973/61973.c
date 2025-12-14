/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (~var_17)));
        arr_2 [3] = (((((var_14 ? var_14 : -var_4))) ? (!var_18) : (((~var_13) ? var_9 : var_1))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_21 = -var_8;
        arr_6 [i_1 - 2] &= (~var_14);
        var_22 = (min(var_22, 385057984));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_23 = (-(~-754021313));
                    var_24 = (max(var_24, (~var_3)));
                }
            }
        }
        var_25 = ((+((var_10 ? (~var_2) : (((var_3 ? var_6 : var_6)))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_26 = ((-1 ? -2196141613482309757 : 754021312));
        var_27 = (((~((var_6 ? var_2 : var_0)))));
        var_28 *= (!var_18);
    }
    var_29 = ((!((((var_5 ? var_1 : var_8))))));
    #pragma endscop
}
