/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 ? (max(0, var_8)) : ((max(var_6, (-2384402189294679298 < 2912708707))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 -= (((((((65535 ? 36565 : -4386346067230338218))) ? 14 : 2305843009213693696)) << (((!(((4294967295 << (((arr_4 [i_0]) - 1429493489))))))))));
                arr_5 [i_1] = (max(((max(((max(28970, 36565))), (((arr_4 [i_0]) / var_6))))), ((var_4 ? -4386346067230338238 : (((min(var_16, var_10))))))));
                var_21 = var_17;
                var_22 = (arr_3 [i_1]);
                var_23 *= (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_24 = ((((max(163413857, ((32512 ? 32500 : var_14))))) ? ((36565 ? 4386346067230338218 : (!var_11))) : var_1));
    var_25 = var_17;
    var_26 = (max(var_26, (-var_9 * var_11)));
    #pragma endscop
}
