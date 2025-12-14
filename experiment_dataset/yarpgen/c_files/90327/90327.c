/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((~5229485720511230776) ? ((1897442761 ? 32767 : -32768)) : 32765));
    var_12 = ((var_2 ? (((var_5 ? var_1 : var_7))) : (~var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_13 = (arr_6 [i_0] [i_0] [i_1]);
                        var_14 *= (~(arr_10 [i_0] [i_0] [i_2] [i_0]));
                        var_15 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_16 = (arr_5 [i_0] [i_1] [i_0]);
                    var_17 = ((~(((arr_0 [i_2]) ? (arr_2 [i_2] [i_2]) : (~62)))));
                    var_18 *= (arr_9 [i_0] [i_1] [i_1] [i_2]);
                    arr_11 [i_1] [i_1] = (((-32765 ? 14 : 244)));
                }
            }
        }
    }
    #pragma endscop
}
