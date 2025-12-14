/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_2 ? 4272 : 4272)) / var_9))) ? (~var_5) : var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 = (60 | var_5);
        arr_2 [i_0] = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = var_3;
        var_21 = ((!(45604 ^ 19921)));
    }
    var_22 = 60;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = 45;
                arr_14 [i_3] [i_2] = (arr_7 [0] [i_3]);
                var_23 = ((255 ? ((max(0, (!34006)))) : 240));
                var_24 = ((~((0 ? 4294967295 : var_15))));
            }
        }
    }
    #pragma endscop
}
