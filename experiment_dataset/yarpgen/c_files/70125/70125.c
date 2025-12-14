/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_1;
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = 64;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [5] [i_1] = (20484 || -519228614);
                                var_19 = (((max(23877, -519228621)) <= ((-51 ? 8 : 65535))));
                                var_20 = (-2 ? (((2147483647 ? (arr_11 [i_0] [i_0] [i_0] [8]) : var_12))) : ((23898 ? 615539267 : (arr_3 [7] [i_2 - 2] [6]))));
                            }
                        }
                    }
                    arr_16 [8] [i_1] [i_0] = ((((min(var_9, 2106890499))) ? (894602680 == 40992) : ((0 ? 18446744073709551615 : -23898))));
                    var_21 = var_13;
                    arr_17 [i_1] = ((31744 ? (arr_9 [9] [i_1] [i_2]) : (arr_9 [i_2 - 2] [i_1] [i_2])));
                }
            }
        }
    }
    var_22 = ((var_1 ? var_0 : ((((((711790510 ? var_2 : var_8))) ? 16256 : ((var_4 ? 112351706 : 23908)))))));
    #pragma endscop
}
