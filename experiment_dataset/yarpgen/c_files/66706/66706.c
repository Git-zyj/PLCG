/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((var_4 == var_3), (max(15424, var_6))))) % var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_0] [7] [i_3] [i_3] [7] = (!var_10);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_15 [i_0] = (+(min((arr_12 [i_0 + 3] [i_0 + 3] [i_1 - 1]), var_1)));
                            arr_16 [i_4] [i_3] [i_2] [i_1] [i_4] = var_4;
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_0] [8] [8] [4] [i_5] = ((~(min((arr_9 [2] [2] [i_1 - 1] [i_1 - 1] [2] [i_5]), (min(2930852560734259433, 907204485603331812))))));
                            arr_20 [i_0] [1] [1] = ((((7463319677646636413 / (min(2930852560734259409, -7463319677646636413)))) & ((((((((arr_6 [i_0] [6]) | (arr_18 [i_0] [i_0] [i_0 - 1] [1] [i_0] [0] [i_0])))) == (((arr_18 [i_0] [i_1 - 1] [3] [i_2] [i_3] [10] [i_1 - 1]) ? var_9 : var_5))))))));
                            arr_21 [i_0] [i_3] [i_0] = ((var_3 ? (((min(-7463319677646636413, 857056274)))) : (arr_7 [1] [9] [9] [i_0 + 1])));
                            arr_22 [i_0] [9] [i_0] [9] [i_5] = ((((((7463319677646636413 ? (min(var_10, var_7)) : ((var_9 & (arr_17 [i_0] [i_0] [i_2] [i_3] [i_5]))))) + 9223372036854775807)) << (arr_13 [i_0] [6] [i_0] [i_0 - 2] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_25 [i_0] = (~(arr_13 [10] [10] [10] [i_3] [i_3] [i_3]));
                            arr_26 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] = ((!(arr_13 [i_0] [i_0 - 2] [i_2] [i_3] [i_3] [i_6])));
                            arr_27 [i_0] [i_3] [i_2] [12] [i_0] = var_0;
                            arr_28 [i_0] [12] [i_6] = ((-(arr_17 [1] [i_3] [i_2] [2] [1])));
                            arr_29 [i_0] [i_1] [i_1] [2] [i_3] [i_0] = var_0;
                        }
                        arr_30 [i_0] [i_1] [i_2] [10] [10] &= (+(max((arr_8 [1]), 7463319677646636409)));
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        arr_33 [i_7] [i_7 - 1] [i_0] [i_0] [i_0] = (var_2 ? (34842 ^ 34843) : ((~(arr_6 [i_0] [i_0]))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_8] = (arr_12 [i_0] [i_0] [i_2]);
                            arr_37 [i_0] [i_1] [i_2] [i_0] [i_8] = ((var_3 ? var_0 : (arr_35 [i_0 - 3] [i_7 - 1] [i_7 - 1])));
                            arr_38 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] = ((var_7 / (arr_35 [i_2] [10] [i_8])));
                            arr_39 [i_0] [5] [i_0 - 3] [i_0 - 3] [i_0] = (arr_2 [i_1 - 1]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_42 [i_0] = 30704;
                        arr_43 [i_0 - 2] [i_0 - 2] [i_0] [i_9] [i_0 - 2] = (~-7463319677646636414);
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        arr_47 [4] = var_4;
                        arr_48 [i_0] [i_1] = var_8;
                        arr_49 [i_0] [i_0] [i_0] [i_0] = (!-var_1);
                        arr_50 [i_0] [i_0 + 1] [3] [i_0] [i_0] = ((-(arr_40 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0])));
                    }
                    arr_51 [i_0] [i_1] [i_1] = var_8;
                    arr_52 [6] [i_0] [i_2] [i_2] = ((~(arr_3 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
