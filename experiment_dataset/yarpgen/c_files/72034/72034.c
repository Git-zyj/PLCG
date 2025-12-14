/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((((var_7 ? var_4 : var_7)) % (var_8 < var_7)))) > var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((var_4 > var_2) < var_8)) ? (~var_9) : (((var_5 % var_5) | (45682 | 19853)))));
                var_11 = (max(var_11, ((((var_2 / var_2) ? (((var_0 ? var_6 : var_6))) : ((var_0 ? var_2 : var_4)))))));
                var_12 = ((((((var_2 ? var_6 : var_9))) ? var_9 : var_6)));
                var_13 = ((((((var_4 ? var_2 : var_4)) - var_6))) ? (((((var_6 ? var_9 : var_8))) ? -var_6 : var_9)) : ((((var_7 ? var_5 : var_6)) - (var_8 - var_9))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                var_14 &= ((((19847 ? 1 : 19847))));
                var_15 = ((-27805 ? 45688 : 19853));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_16 = (max(var_16, ((min(((-(max(var_6, var_7)))), (((29348 + -1) - -var_0)))))));
                    arr_15 [2] [i_3] [i_3] = (((max(var_8, var_7))) + ((max(var_2, var_8))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_22 [i_7 - 1] [i_3] [i_3] [i_3] [i_2] = (((min(var_2, (((var_7 ? var_4 : var_7))))) << ((((var_2 ? var_4 : (var_1 - var_6))) - 113))));
                                var_17 = ((((-1263422750784934089 ? 45630 : -82)) < 19853));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_18 = ((!((min(var_6, var_0)))));
                                var_19 -= (((((19906 ? 14556921451839324730 : 18446744073709551612))) ? (min(19854, 1922627253)) : 45682));
                            }
                        }
                    }
                    var_20 = (((var_0 * var_2) != (((~((var_3 ? var_5 : var_9)))))));
                    arr_29 [i_2] [i_2] [i_3] = ((+((((29348 == 45683) == var_1)))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_21 = (max(var_21, ((((-1263422750784934089 | 1) > (((((((var_0 ? var_6 : var_2))) || (var_0 | var_1))))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_38 [i_3] [i_3] [i_10] [i_11] [i_12] [i_10] [i_2] = ((var_7 >= ((var_5 ? var_0 : var_4))));
                                var_22 = (((var_5 || var_4) == (((var_4 != ((var_9 ? var_1 : var_0)))))));
                                arr_39 [i_3] [i_11] [i_10] [10] [4] [i_3] = ((((((max(var_6, var_1)) - (var_3 - var_0)))) ? (var_1 != var_5) : (var_0 & var_7)));
                            }
                        }
                    }
                    arr_40 [i_3] [i_3 - 3] [i_10] = var_8;
                }
                var_23 = (max((var_0 == var_4), 1));
            }
        }
    }
    #pragma endscop
}
