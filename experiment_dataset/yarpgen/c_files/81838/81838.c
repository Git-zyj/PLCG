/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(var_5, ((4294967295 ? 12526583289029449656 : 4294967295)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((((min(var_7, var_2))) ? (max(((max(var_12, var_0))), ((var_17 ? var_2 : var_1)))) : (((min(((max(17314, -17308))), 5681))))));
                    arr_8 [i_1 + 1] [i_0] = (min((var_17 & var_4), ((max(var_4, var_6)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_11 [i_3] = ((min(var_9, var_1)));
        var_20 = (max(var_20, ((((var_6 == var_2) || var_13)))));
    }
    for (int i_4 = 1; i_4 < 6;i_4 += 1)
    {
        arr_15 [4] &= ((((min(var_6, ((var_15 ? var_6 : var_6))))) * -var_11));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_21 = ((var_9 ? ((min((max(var_0, var_8)), var_7))) : (min(var_18, (var_7 & var_10)))));
                    arr_21 [i_4] = ((min(var_4, var_5)));
                    arr_22 [i_4 + 4] [i_4] = (max((((((var_0 ? var_9 : var_14))) ? var_15 : var_16)), var_12));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                {
                    arr_29 [i_4 + 2] [i_4 + 2] [i_4] [3] = 96;
                    var_22 = (max((var_12 && var_18), (max(var_16, var_14))));
                    arr_30 [i_4] [i_7] [i_8 - 1] [i_8] = ((!(~31427)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_23 = (var_15 / var_5);
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_24 += var_3;
                    var_25 ^= (!549755813887);
                    arr_39 [i_9] [i_9] [i_9] = var_12;
                }
            }
        }
        var_26 = var_11;
    }
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {

                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        arr_52 [i_12] [i_12 - 2] [i_13] [i_14] [i_15 + 2] [i_15] |= ((32767 ? -144847047 : -20778));
                        arr_53 [i_12] [i_13] [i_14] [i_15] = var_16;
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        arr_57 [i_12 + 1] [i_12] [i_16] [i_16 + 1] = (((var_14 + 2147483647) >> (var_15 - 2488686126794297196)));
                        var_27 = (min(var_27, (~var_5)));
                        arr_58 [i_13] [i_14] [i_14] [i_14] |= var_6;
                    }

                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        arr_61 [i_12] [i_13] [i_17] [i_17] [i_14] = var_14;
                        arr_62 [i_17] = (max(-576460752303423488, 18813));
                        arr_63 [i_12] [i_13] [i_13] [i_13] [i_14] [1] |= (max((var_3 + 94), 144847047));
                    }
                    for (int i_18 = 1; i_18 < 20;i_18 += 1)
                    {
                        var_28 = (max(var_28, (((((var_6 ? (31 % -144847039) : -var_13)) > (min(var_17, var_10)))))));
                        var_29 = (max(var_14, (var_18 + var_13)));
                        arr_67 [i_18] [i_14] [i_14] [i_18 - 1] = var_14;
                        arr_68 [i_14] [i_14] [i_13] [i_12] [i_12] [i_14] |= (max(((max(var_6, (var_0 < var_5)))), (max((max(var_13, var_12)), (min(var_11, var_10))))));
                    }
                    var_30 = var_6;
                    var_31 = max(((max(var_6, var_12))), (min(var_15, var_10)));
                    var_32 = (max(-1, 255));
                }
            }
        }
        arr_69 [i_12] |= ((((max(var_3, var_2))) ? ((((var_5 <= (((min(var_9, var_18)))))))) : var_15));
    }
    var_33 = max((-9223372036854775807 - 1), 73);
    #pragma endscop
}
