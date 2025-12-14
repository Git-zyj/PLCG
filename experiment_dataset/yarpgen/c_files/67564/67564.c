/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = (min(var_18, var_16));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((((((min(-7277683756007751799, var_14)) ^ (arr_3 [i_0])))) ? (max((arr_2 [1]), 1)) : (((arr_2 [i_0]) ^ (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (((arr_2 [i_1 + 2]) + var_8));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1 - 1] [i_2] = ((~(((~-107) ^ var_13))));
                        var_20 |= (min(-64, 1));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_21 = (max(((-((((arr_1 [i_0]) < 2))))), (((arr_0 [i_2]) ? ((var_14 << (var_0 - 12496140222312263516))) : var_3))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (max((((((arr_3 [i_2]) ? 4993442262834319041 : var_2)) + var_7)), (((!(arr_14 [i_4 + 1] [i_4 + 1] [13] [i_4 - 2] [i_4]))))));
                            arr_18 [i_3] [i_4] = 36614;
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] [i_4] = -var_16;
                            var_22 -= (max(0, (min(var_15, (arr_5 [i_1 + 2] [1] [i_4 - 1])))));
                        }
                        var_23 = (((!((max(var_5, (arr_12 [i_0] [i_0] [i_2] [i_2] [i_3])))))));
                    }
                    var_24 = (min(var_24, ((max(((22708 ? (arr_3 [i_1]) : ((-493577740538210369 ? 8162301886340874341 : 0)))), (arr_14 [i_1 - 1] [i_1 - 3] [22] [i_1 - 1] [i_0]))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = ((!(((min(1048575, 39974))))));
        arr_23 [i_5] = var_14;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    arr_31 [i_6] [i_6] = (max(-8336374483990397217, ((((((arr_10 [i_7] [i_5] [i_5]) ? (arr_24 [i_6] [i_6] [i_6]) : var_0)) == var_0)))));
                    var_25 = (arr_20 [i_6] [i_7]);
                    var_26 = (max(var_26, var_3));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    {
                        var_27 = ((var_9 ? var_14 : (arr_29 [i_5] [i_10])));

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_28 = ((-var_5 + ((-(arr_12 [i_11] [i_8 + 1] [1] [i_8 + 1] [1])))));
                            var_29 = (((((+((4503599627370464 ? (arr_20 [i_9] [i_5]) : var_0))))) ? var_12 : var_3));
                            arr_42 [i_5] [i_8] [5] [i_10] [i_8] [i_11] [i_11] = (min((((arr_10 [i_8 - 1] [i_8 - 1] [i_8 + 1]) ? var_1 : (arr_37 [i_8 - 1] [i_10 + 2] [i_10 - 2]))), (((!(arr_15 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_10 + 1]))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 15;i_12 += 1)
                        {
                            arr_46 [i_5] [i_5] [13] [i_8] [i_12] = (((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]) ? ((var_10 * (arr_14 [i_5] [i_8 + 1] [i_8 + 1] [i_10 - 1] [i_8]))) : (arr_38 [i_8] [i_8] [i_9] [i_10] [i_12] [i_12 + 3])));
                            arr_47 [i_8] [i_10] [i_9] [i_8 + 1] [i_8] = ((14 << (13453301810875232554 - 13453301810875232531)));
                            var_30 = (-5794918868057088919 ? -7277683756007751789 : 1);
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 24;i_13 += 1)
    {
        var_31 ^= (min(var_9, (arr_2 [i_13])));
        var_32 = (min((arr_12 [i_13] [i_13 - 2] [i_13] [i_13 - 2] [i_13]), (min((arr_16 [i_13] [i_13 - 2] [i_13 - 3] [i_13] [i_13 - 2]), (arr_16 [i_13] [i_13 - 3] [i_13 - 3] [i_13] [i_13 - 2])))));
    }
    #pragma endscop
}
