/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] = ((!(((((8 < (arr_4 [i_0] [i_1])))) != (var_12 > -2147483645)))));
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] = var_8;
                                var_14 = (min(var_14, var_7));
                            }
                        }
                    }
                    arr_14 [i_2] [i_1] = -2147483645;
                }
            }
        }
    }
    var_15 = ((var_1 ? ((((2147483645 / 2147483644) / var_6))) : (((-2147483645 < 69818988363776) ? (var_1 - 4294967290) : var_6))));
    var_16 = max(((-2147483644 ? (var_12 * var_9) : var_3)), (var_0 / 1238));
    #pragma endscop
}
