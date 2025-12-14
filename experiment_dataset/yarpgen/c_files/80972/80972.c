/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_0] = (((arr_8 [i_0] [i_0] [i_3 - 1]) ? (arr_1 [i_2 + 1]) : 15));
                        arr_12 [i_0] [i_1] [i_1] [13] = (arr_8 [i_3] [i_1] [i_0]);
                        var_18 = (arr_6 [i_2 - 1] [i_3] [i_3 - 1]);
                        arr_13 [i_0] [i_0] [i_1] [7] [i_1] = -1228865525;
                    }
                    arr_14 [i_1] [i_1] = (max(-22840, var_11));
                    arr_15 [i_1] = ((~(18446744073709551614 == -11168)));
                    arr_16 [i_1] [i_1] [1] [i_1] = ((-(!1)));
                    arr_17 [i_1] [i_1] [10] [i_2] = (((!26443) ? ((7543859700877895822 ? (~18446744073709551594) : -1726597726)) : 1887396151));
                }
                var_19 = ((20 < (32767 && 9647)));
                arr_18 [i_1] [7] [i_1] = ((((((arr_9 [i_0] [i_0] [5] [i_1]) >= var_13))) + (-2105454214 == var_7)));
            }
        }
    }
    var_20 = var_2;
    var_21 = (min(var_15, ((var_11 ? (max(var_13, 18446744073709551594)) : 1))));
    #pragma endscop
}
