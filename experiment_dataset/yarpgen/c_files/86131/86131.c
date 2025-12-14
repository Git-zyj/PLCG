/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 <= (((13 ? -758301079 : (13 & var_1))))));
    var_11 = (max(var_11, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = var_5;
                arr_5 [i_0] [8] &= 3324;
                var_13 = (min(var_13, 3366031781498406204));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = (31706 - 4294967275);
                    var_14 = ((((((18446744073709551593 ? var_4 : var_0)) + 2147483647)) >> (13 <= 51)));
                    var_15 = (8870164570744920586 - 1);
                    var_16 = (!-3792024652627160818);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_17 = ((100663296 ? var_3 : (arr_6 [i_3] [i_1] [i_3] [i_0])));
                    arr_11 [i_0] [i_1] [i_3] = (arr_7 [i_1]);
                }
            }
        }
    }
    var_18 = ((var_2 ? (((((-32767 - 1) == var_8)))) : var_9));
    #pragma endscop
}
