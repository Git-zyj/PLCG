/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-128);
    var_17 = -var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((var_14 ? (((!(arr_0 [i_2] [i_1])))) : 0))) ? (((!var_8) ? (!var_5) : (min(-2088506984, 1)))) : ((max(65535, ((((arr_1 [i_0] [i_2]) || (arr_3 [i_0] [i_0]))))))))))));
                    arr_8 [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = ((-((((~var_10) || var_11)))));
                                var_20 = ((var_12 ? (arr_12 [i_0] [i_1] [i_4] [i_3] [i_1 + 2] [i_4]) : (((arr_12 [1] [i_1] [i_1] [i_3] [i_1 - 3] [i_4]) % (arr_12 [i_0] [i_2] [i_2] [i_0] [i_1 + 2] [i_3])))));
                                var_21 *= ((-(((arr_12 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_4]) ? var_2 : var_13))));
                                arr_14 [1] [i_0] [1] [i_0] [1] = (((~16) | var_9));
                                arr_15 [i_0] [i_1] [i_0] = 8;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] = ((!(((var_15 ? var_1 : var_1)))));
                        arr_20 [i_0] = 1308157987;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_2] [i_6] = 1;
                        var_22 = (max(((25 ? 65512 : -17107)), (((!24669) ? ((~(-2147483647 - 1))) : ((~(arr_11 [i_0])))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_17 [i_0] [i_0] [i_6]), ((var_4 ? var_13 : var_11))));
                        arr_25 [i_0] [1] [i_2] [15] [i_0] = var_10;
                    }
                }
            }
        }
        var_23 = (max(var_23, var_4));
        var_24 = 2198031989660007813;
        var_25 += var_0;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_26 = var_12;
        var_27 = min((min(var_14, (var_3 == var_11))), (arr_17 [i_7] [8] [i_7]));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] [i_8] = max(((var_15 ? (((arr_12 [5] [i_8] [5] [5] [i_8] [16]) / 1)) : ((min(var_12, -123))))), (((arr_12 [i_8] [9] [i_8] [i_8] [i_8] [i_8]) ? -122 : var_4)));
        arr_32 [i_8] = ((var_7 >> (((arr_27 [1] [1]) >> (var_0 - 8451)))));
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_28 *= ((((8045317313669575580 ? (var_1 * var_1) : var_2)) + -var_7));
                arr_40 [17] [i_10] [1] = ((25112 ? 8192 : 38));
            }
        }
    }
    #pragma endscop
}
