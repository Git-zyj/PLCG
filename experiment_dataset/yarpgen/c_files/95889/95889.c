/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 11216));
    var_18 = var_1;
    var_19 = var_6;
    var_20 = ((-((3 ? 0 : (-32767 - 1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
        {
            var_21 = var_9;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_22 = ((var_12 == 5710) * var_13);

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            arr_14 [i_2] [1] |= (((arr_3 [i_1] [i_2 + 1] [i_3]) ? (arr_0 [i_4] [i_4]) : (arr_0 [i_0 - 1] [i_3])));
                            arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] = 43;
                            arr_16 [i_0] = ((-1 ? var_0 : 11216));
                        }
                    }
                }
            }
            arr_17 [i_0] = arr_4 [i_0 - 1] [i_1 + 2];
            var_23 = -var_13;
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_24 -= var_6;
            var_25 |= ((8184 ? 1 : (var_13 ^ var_16)));
        }
        arr_20 [i_0] = (-9223372036854775807 - 1);
        arr_21 [i_0] = ((((~(arr_1 [i_0] [i_0]))) / ((var_7 ? 1 : 49))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_31 [i_0] [i_0] [i_7 - 2] [i_0] [i_8 - 1] = (arr_5 [i_0 + 1] [i_0 + 1]);
                        var_26 = (51 == 737318403);
                        arr_32 [i_0] [7] [i_0] [i_0] [i_7] [i_8] = (((var_0 ? var_4 : var_10)) ^ 255);
                        arr_33 [i_0] [i_6 + 2] [11] [i_6 + 2] [i_6 + 2] [i_6 - 2] = ((var_5 ? 4 : var_2));
                        var_27 = (var_1 % 1);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_28 = (max(var_28, (((((255 ? 18446744073709551615 : -101)) >> (-4779789734457849181 - 13666954339251702417))))));
        var_29 *= (192 ? var_7 : var_10);
    }
    #pragma endscop
}
