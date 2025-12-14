/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(1166577012, 3318379813));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [7] [i_2] = ((+((((arr_11 [i_2] [5] [5] [i_2 + 1]) == (arr_7 [i_2] [i_2 + 1]))))));
                            var_13 = (min(var_13, var_5));

                            for (int i_4 = 1; i_4 < 8;i_4 += 1)
                            {
                                var_14 = (((((!((!(arr_1 [i_1] [i_0])))))) * (arr_8 [i_0] [i_4 + 2] [i_2])));
                                arr_15 [i_2] [i_1] = (arr_6 [i_0]);
                                var_15 = (((arr_2 [i_3]) * (arr_2 [i_1 + 1])));
                                var_16 ^= (!((((arr_4 [i_0] [i_0] [i_0]) ? (((arr_4 [i_3] [i_1] [i_1]) ? 3318379804 : -1166577013)) : 3318379813))));
                            }

                            for (int i_5 = 2; i_5 < 10;i_5 += 1)
                            {
                                arr_18 [2] [i_1] [1] [i_2] [10] = var_2;
                                arr_19 [i_0] [i_0] [i_2 - 2] [i_5] [i_2] = ((~(((!(arr_3 [0] [i_1]))))));
                                arr_20 [1] [1] [3] [i_2] [10] [i_2] [1] = (((arr_4 [i_2 - 2] [i_2 - 1] [9]) && (arr_7 [i_2] [i_1])));
                                var_17 = 725947334;
                                arr_21 [i_0] [i_1 - 3] [i_5] [i_1 - 3] [0] &= ((-(((!(arr_4 [i_0] [i_1 - 4] [i_2 + 1]))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_18 = ((976587482 - (((0 ? var_8 : 1)))));
                                var_19 -= var_8;
                                var_20 = (((((arr_6 [i_1]) > 8435))) == -1166577013);
                                arr_25 [i_0] [i_0] [0] [i_3] [i_2] [i_6] = (((arr_16 [i_0] [i_0] [i_1 - 3] [3] [i_3] [i_6] [i_2]) ? var_3 : (((7403611378350508885 ? 1 : (arr_10 [i_1] [i_1] [i_3] [i_6]))))));
                            }
                        }
                    }
                }
                var_21 = (((((((arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]) | (arr_0 [i_0]))) | var_5)) - (min(3162046927, ((-(arr_17 [i_1] [i_1 - 2] [i_1] [i_1] [i_0] [i_0] [i_0])))))));
                arr_26 [i_1] [i_0] = var_7;
            }
        }
    }
    var_22 = (max(var_22, var_3));
    #pragma endscop
}
