/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((((max(var_14, var_11))) ? ((max(var_8, 0))) : var_5))) > var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((2 > (max(var_10, var_2))));
                var_18 = min(((((44921 ? (arr_1 [i_0]) : var_6)) - ((-123 ? (arr_1 [i_1]) : var_7)))), ((var_4 ? (arr_3 [i_0]) : (((arr_0 [i_1] [i_1]) ? 24 : (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 15;i_6 += 1)
                            {
                                arr_19 [i_3] [i_5] [i_4] [i_3] [i_3] = (((arr_0 [i_3] [i_3]) ? var_1 : ((min(((1203175144 ? 3848540590728259521 : var_3)), 0)))));
                                var_19 = ((!(+-161107445)));
                                arr_20 [i_3] [i_5] [i_4] [i_3] [i_3] = ((var_5 ? (arr_18 [i_6 + 1] [i_6 + 2] [i_6] [i_6 + 3] [i_6] [i_6] [i_6 + 2]) : (((arr_18 [i_6 + 3] [i_6 - 1] [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1]) ? 114 : var_7))));
                            }
                            var_20 -= (~7786763081414784918);

                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_21 &= (min(-33684, (max(var_0, 148))));
                                var_22 = 1;
                                arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_2] [i_7] = ((~((-var_8 ? (((var_13 ? (arr_1 [i_2]) : 120))) : (((arr_8 [i_3] [i_3]) ? (arr_15 [i_2] [i_4] [i_3] [i_7]) : 2476621807))))));
                                var_23 |= arr_6 [i_5];
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 18;i_8 += 1)
                            {
                                var_24 = 3601878059;
                                arr_28 [i_2] [i_5] [i_4] [i_3] [i_2] [i_5] = (arr_21 [i_3] [i_3] [i_4] [i_8] [i_2]);
                            }

                            for (int i_9 = 0; i_9 < 18;i_9 += 1)
                            {
                                var_25 = (max((min(((696355586 | (arr_9 [i_3] [i_2]))), 693089236)), var_9));
                                var_26 = (((((+(((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_2 : 126))))) | (var_8 % 693089237)));
                                var_27 = max((((!(arr_11 [i_3])))), (((arr_11 [i_3]) ? var_4 : var_7)));
                                var_28 &= (((arr_9 [i_5] [i_9]) ? (max((arr_9 [i_2] [i_2]), var_3)) : (((max((arr_9 [i_5] [i_9]), (arr_9 [i_3] [i_5])))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_29 = (856594938572180085 < 114);
                                var_30 = (((((var_8 / ((var_12 ? (arr_35 [i_2] [i_3] [i_10] [i_10] [i_12] [i_12]) : 1))))) ? ((min((arr_35 [i_11 + 2] [i_11 + 1] [i_11] [i_11] [i_10] [i_10]), -19))) : ((98 ? -15 : 204))));
                                var_31 = var_4;
                                var_32 = ((!((min(-130, 1972426868332020204)))));
                                var_33 *= -var_12;
                            }
                        }
                    }
                }
                var_34 += ((((min(((max(10, (arr_31 [i_3] [i_2] [12] [i_3] [12] [i_2] [i_2])))), (max(1328015830, 1))))) ? ((((max(var_4, var_9))) ? var_1 : var_2)) : ((((65533 ? 34711 : 3173726638))))));
                var_35 = (min((max(2960803252, (arr_33 [i_2] [i_3] [i_3]))), ((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_22 [i_3] [i_3] [i_2] [i_2] [i_2]))))));
            }
        }
    }
    #pragma endscop
}
