/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1796492594 | var_19);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (max(((min((arr_0 [i_1 + 1]), 53996))), ((var_13 ? ((min(var_13, -3461606537537238042))) : (min(var_9, var_0))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (min(62, (((arr_5 [i_0]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (((arr_5 [i_0]) ? -7466048761185426042 : 6428))))));
                }
            }
        }
        arr_9 [1] = (((!1) || (arr_6 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_14 [13] = (min((((((20 ? 126 : 16454))) ? ((var_16 + (arr_7 [i_3] [i_3] [i_3]))) : (!var_2))), ((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (254 - 254)))) ? -3291269987284344391 : (min(17, var_11))))));
        var_22 = ((var_18 ? var_7 : var_3));
        var_23 = (65535 ? 2147483647 : -6623915169843045373);
    }
    var_24 = 55444;
    var_25 = ((var_3 ? -30093 : 19));
    #pragma endscop
}
