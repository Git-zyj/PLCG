/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 |= ((max(var_4, (arr_1 [i_0 + 1]))));
                arr_5 [i_0] [7] [i_0] = (arr_4 [i_1] [i_1] [i_0]);
            }
        }
    }
    var_21 *= ((var_2 ? (max(var_5, -18446744073709551615)) : var_19));
    var_22 |= (max((((((-22729 >= (-2147483647 - 1)))) + var_10)), ((var_13 ? var_0 : (var_10 != 1)))));
    var_23 = max(var_18, (((~(~var_1)))));
    #pragma endscop
}
