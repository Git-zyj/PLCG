/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 66;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((var_11 ? var_12 : (arr_0 [i_0])));
        arr_2 [i_0] = (((!var_12) ? ((var_13 ? 114 : 65512)) : 65512));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (((arr_7 [i_2] [i_2 - 3] [i_2]) || 1));
                    var_18 -= (((((22 ? 192 : -24))) >= -3072));
                    var_19 = 18446744073709548522;
                }
            }
        }
        arr_9 [i_0] [i_0] = ((66 ? -55 : (arr_8 [i_0] [i_0] [i_0])));
        arr_10 [i_0] = (!108);
    }
    var_20 = (min(var_20, (((var_4 <= (13 <= 1008))))));
    #pragma endscop
}
