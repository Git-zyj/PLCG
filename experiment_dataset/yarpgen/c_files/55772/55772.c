/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [8] = 1150088314;
        var_18 -= (-1150088317 - var_11);
        arr_4 [i_0] = var_9;
        var_19 = var_7;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (+((-1150088319 ? (((arr_6 [i_1]) + var_4)) : var_10)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 = 0;
                    arr_17 [i_1] [14] [14] [i_3] &= var_14;
                    arr_18 [11] [i_2] [i_3] = var_10;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                {
                    arr_24 [i_5 + 2] [i_1] = (var_10 * var_8);
                    var_21 += (min(var_7, (min((var_0 & var_7), (min(-1150088298, var_7))))));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_22 |= (((var_10 && ((max((arr_7 [i_1]), 32760))))) ? ((max((arr_25 [i_5 + 2]), var_5))) : var_8);
                        var_23 = (max((min((var_8 * var_1), var_5)), ((1150088314 ? var_8 : ((var_0 ? -1150088316 : -1150088314))))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_30 [i_1] = max((var_12 % var_9), (arr_10 [i_5 + 3] [i_5 - 2] [4]));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_24 = (min(var_24, var_10));
                            var_25 += ((((var_14 ? (arr_7 [i_1]) : (arr_22 [i_1] [i_1]))) / var_4));
                            var_26 = var_16;
                            var_27 *= 1;
                            arr_33 [i_7] [i_7] [i_4] = (arr_10 [i_1] [6] [i_5]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_28 = -var_10;
                            var_29 = (var_11 <= 60);
                            arr_36 [i_1] [i_4] [i_5 - 1] [i_7] [1] = (arr_20 [i_5 + 4] [i_5 - 2]);
                        }
                        var_30 = (max(var_30, -41));
                        var_31 *= var_14;
                    }
                }
            }
        }
    }
    var_32 = var_3;
    #pragma endscop
}
