/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(((var_12 ? var_15 : 21764)), 664))), 9223372036854775807));
    var_17 = var_6;
    var_18 = (max((var_10 <= var_7), (max((max(-9223372036854775807, -9223372036854775786)), (var_1 - var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((!(var_9 && 18446744073709551615))))));
                    var_20 = (((((15654 ? 49879 : 4775201699865734917))) ? var_14 : 14910255815694400616));
                    arr_8 [i_0] [i_0] [10] [1] = (max((max(18446744073709551615, (((4 ? 1715118471627242144 : -4192118962318875783))))), (max((var_12 - var_2), (max(var_10, 383482667021097174))))));
                    var_21 = (max(var_21, var_12));
                }
            }
        }
    }
    var_22 = (var_12 ? var_4 : var_1);
    #pragma endscop
}
