/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] &= 2920084828;
                                var_14 = (min(var_11, (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_0] [i_3 + 1])));
                                arr_12 [i_0] [i_2] [i_1] [i_0] = 11927007616359558794;
                            }
                        }
                    }
                    var_15 = var_10;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_16 = (arr_18 [i_0] [i_0] [i_5] [i_6] [i_7]);
                                arr_20 [i_0] [i_1] [i_5] [i_6] = (arr_15 [i_0]);
                                var_17 = (max(var_17, (((min(((6519736457349992828 ? 1 : 11927007616359558798)), var_11))))));
                                var_18 = ((((((((~(arr_19 [i_0] [i_0])))) ? (max((arr_17 [i_0]), (arr_4 [i_0]))) : (arr_0 [i_0])))) ? (arr_10 [i_0] [i_5] [i_6] [i_7]) : (((190 % 14766013748956017877) ? var_5 : (((arr_6 [i_0] [i_5] [i_0]) ? 1 : (arr_2 [i_0] [i_1] [i_5])))))));
                                arr_21 [i_0] [i_6] [i_0] = ((max((((-8759106218510211397 ? var_3 : 25))), -8813)));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_5] = ((~((13324219303124281183 ? (min(11927007616359558788, 4294967287)) : (((11927007616359558802 ? 1 : 65533)))))));
                    var_19 = var_0;
                    arr_23 [i_0] [i_0] [i_0] [i_1] |= var_10;
                    var_20 = -5940944277772150221;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_28 [i_1] [i_0] [i_1] [i_8] [i_9] &= var_0;
                            var_21 = (((30 ? (arr_14 [i_0] [i_1] [i_0] [i_9]) : (((arr_25 [i_0] [i_8] [i_9]) ? (arr_24 [i_0] [i_0] [i_0]) : 103)))));
                            arr_29 [i_0] [i_0] [i_8] [i_9] = ((var_2 ? (min((arr_3 [i_0 - 1] [i_0]), (((arr_27 [i_0] [i_8] [i_0] [i_9]) - (arr_15 [i_0]))))) : ((((((1 ? 32768 : var_0))) || (((arr_14 [i_0] [i_0] [i_0] [i_0]) >= var_10)))))));
                        }
                    }
                }
                arr_30 [i_0] [i_1] [i_1] &= (((((var_3 >> (((((arr_17 [i_1]) + var_7)) - 16703249416171448784))))) ? (((((var_1 != (arr_19 [i_0] [i_1])))))) : var_8));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 14;i_11 += 1)
        {
            {
                var_22 = ((arr_34 [i_11 - 2] [i_11 - 3]) && ((max((arr_34 [i_11 - 1] [i_11 - 2]), (arr_34 [i_11 - 2] [i_11 + 1])))));
                var_23 = (((arr_32 [i_10] [i_11]) ? var_3 : ((((((arr_32 [i_10] [i_11]) ? var_4 : (arr_31 [i_10] [i_11])))) & var_9))));
                arr_35 [i_11] [i_10] [i_10] &= (min(((max((arr_33 [i_10] [i_11]), (arr_33 [i_10] [i_11])))), (((arr_33 [i_10] [i_11 - 1]) ? (arr_33 [i_10] [i_10]) : (arr_33 [i_10] [i_10])))));
            }
        }
    }
    var_24 = var_0;
    var_25 |= ((8796093022207 ? 190 : 1));
    var_26 = var_9;
    #pragma endscop
}
