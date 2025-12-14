/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_2] = -2025845241;
                        var_14 |= (~1);
                    }
                    var_15 = (max(var_15, 7300091662930729657));
                    var_16 *= ((1536 ? (2326549723632048595 + 4549453361249354821) : var_5));
                    var_17 = var_1;
                    arr_10 [i_2] [6] [i_2] [i_2] = -2147483632;
                }
            }
        }
    }
    var_18 *= (-7300091662930729667 / ((1516291783 ? 3458764513820540928 : (-1103753287 / 43))));
    #pragma endscop
}
