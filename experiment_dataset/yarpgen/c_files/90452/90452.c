/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = ((((arr_2 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : var_7)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] = min((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 1]))), (max((arr_0 [i_0 + 2]), (arr_5 [i_0 - 1] [i_0 - 2]))));
                            arr_10 [i_0] [i_0] [i_0] [0] = ((~(max((arr_8 [i_1 + 3] [i_1 + 3] [2] [i_1 + 2]), var_2))));
                            arr_11 [i_1] [i_1] [i_0] [i_1 - 1] = (max((max((max(210, 18446744073709551615)), ((max(255, 8545442388900560607))))), ((((arr_7 [i_0] [5] [i_0] [i_1] [i_2] [i_3]) && (arr_7 [i_3] [i_3] [i_3] [4] [i_3] [i_3]))))));
                            arr_12 [i_0] [i_0] = (arr_5 [i_0 - 3] [i_0]);
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    var_11 -= (arr_13 [i_4]);
                    arr_22 [i_4] [i_5] = ((+((((((arr_13 [i_6 + 3]) || 255))) << (var_7 - 8478481569112663760)))));
                    arr_23 [i_4] [i_5] [i_4] = ((max((min((arr_19 [i_4] [16] [9] [i_4]), var_4)), (!27))));
                    arr_24 [i_4] [1] [i_6 + 3] = ((((max(((3331855526 ? -163292563970961679 : 14)), (arr_18 [i_4])))) ? (arr_13 [i_4]) : -963111752));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_27 [i_7] [i_4] |= ((arr_21 [0] [i_5] [i_7]) == var_4);
                        var_12 = arr_14 [i_4];
                        arr_28 [i_4] [11] [i_4] [8] = (((var_2 << var_0) == (((~(arr_16 [1] [i_5]))))));
                        arr_29 [i_4] [i_7] = (arr_19 [i_4] [i_5] [i_6 + 1] [i_4]);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_13 = (((arr_19 [i_4] [i_5] [i_5] [i_4]) * ((max((arr_17 [i_4]), ((((arr_13 [8]) == var_9))))))));
                        arr_32 [0] [i_5] [i_4] [i_5] = ((((min((max(-163292563970961679, (arr_15 [i_4]))), 2424742605))) ? var_4 : 2147483647));
                        arr_33 [i_4] [i_4] [i_4] = (arr_20 [i_4] [i_5] [i_6]);
                        var_14 = (max(1, 1383476938));
                    }
                }
            }
        }
        var_15 = (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    #pragma endscop
}
