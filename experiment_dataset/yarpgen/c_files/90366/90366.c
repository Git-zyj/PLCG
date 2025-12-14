/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_6 ? (((((var_12 ? 3 : 11))) ? (((var_2 ? var_1 : var_12))) : ((var_14 ? var_15 : 65535)))) : (((((var_13 ? 0 : var_11))) ? ((var_3 ? var_4 : 20579)) : ((11 ? var_13 : var_13)))))))));
    var_17 = var_8;
    var_18 = ((var_14 ? var_1 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = ((((((arr_2 [i_1 - 4]) ? 6103 : 0))) ? ((0 ? 1 : 212)) : (((arr_2 [i_1 - 2]) ? var_11 : 235))));
                            var_20 = (((((var_8 ? 45 : (arr_10 [i_0 - 2] [i_1 - 3] [i_2] [i_3 - 1] [2] [i_1 + 2])))) ? (((var_0 ? var_9 : -53))) : ((1 ? 1218498681 : 5350668667217191602))));
                            var_21 = (min(var_21, ((((((var_14 ? 29 : 0))) ? (((((var_12 ? (arr_1 [i_0 + 2] [i_0 + 2]) : (arr_9 [13] [i_1 - 3] [i_1] [i_3 - 1] [i_1] [i_2])))) ? (((73 ? 65517 : var_6))) : (((arr_4 [i_0] [i_3 - 2]) ? var_4 : 502666807)))) : (((var_11 ? (arr_6 [i_0] [i_2] [i_0] [i_2]) : (arr_3 [i_3 + 1] [i_2 + 2] [i_1 - 1])))))))));
                            var_22 = (((((0 ? (arr_0 [i_0 - 1]) : var_1))) ? ((0 ? 3298534883328 : -1)) : (((((((arr_8 [8] [1] [1] [i_3 - 2]) ? var_6 : -74))) ? -11628 : ((-32756 ? 69 : 29)))))));
                        }
                    }
                }
                var_23 = (((((2147483647 ? var_4 : (arr_2 [8])))) ? ((255 ? (arr_5 [i_0] [i_1 - 4] [i_0 + 2] [2]) : var_13)) : (((var_5 ? 1 : (arr_5 [1] [i_1 - 4] [i_0 + 1] [i_0]))))));
            }
        }
    }
    var_24 ^= var_8;
    #pragma endscop
}
