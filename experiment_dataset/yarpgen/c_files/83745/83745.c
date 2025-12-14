/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = var_6;
                            var_17 = 60625;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = var_0;
                                arr_18 [1] [i_1] [i_4] [12] [3] [8] = ((126 ? ((~(var_0 ^ var_5))) : (max((((arr_3 [i_4] [i_5] [6]) * var_6)), ((var_13 ? (arr_11 [i_6]) : (arr_13 [i_0] [i_0] [i_5] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_32 [i_7] = var_11;
                            var_19 = (min(var_19, (arr_26 [i_8] [i_10])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_39 [i_8] [i_8] [3] = ((var_14 ? (min((arr_20 [i_7]), var_14)) : ((((((min(4910, 61))) || 1))))));
                            arr_40 [i_12] [i_11] [i_7] [i_7] = (min((((-1 ? var_10 : (min(15, 1058227813))))), (max(var_9, var_0))));
                            var_20 = (((((var_2 ? (arr_29 [i_7] [i_7]) : var_12))) ? var_1 : (((arr_29 [i_7] [i_8]) ? var_12 : (arr_29 [i_7] [i_8])))));
                            var_21 &= var_15;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_22 = ((((max((arr_33 [i_7] [i_7] [i_7] [i_7]), var_11))) ? ((1 ? (((min(1, 1)))) : ((var_12 ? 2635884676 : var_15)))) : 1));
                            var_23 = 23031;
                            var_24 = (max((((arr_34 [i_7]) ? var_2 : (arr_34 [i_7]))), ((((arr_34 [i_14]) ? var_8 : 60625)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_25 = ((((min(0, var_2)))) < (arr_49 [i_16] [i_16] [i_15] [i_16] [i_8] [i_16]));
                            var_26 = (((arr_31 [i_8]) ? (arr_31 [i_7]) : (((arr_31 [i_15]) | (arr_31 [i_7])))));
                            arr_52 [i_16] = (((max((var_1 * 3), (max(6631472420818930940, (arr_43 [i_7] [i_7] [13] [i_7])))))) ? ((((((2275551404 ? (arr_49 [i_7] [i_16] [14] [i_15] [i_16] [i_16]) : var_11)) >= (((1 ? 1 : (arr_26 [i_8] [i_8])))))))) : ((((min(var_11, 19))) ? var_15 : (arr_27 [i_7] [i_8]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 20;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            {
                                var_27 = ((-2386489727 ? (min((arr_61 [i_19 + 1] [i_19] [1] [i_19 - 2]), var_9)) : ((18255343434165529773 * (arr_61 [i_19 - 3] [i_19 - 3] [i_19 - 3] [i_19 - 1])))));
                                var_28 = 212;
                                arr_66 [i_17] [i_17] [i_17] [i_17] [i_17] = ((((var_2 <= var_15) ? (((var_11 ? 19611 : 2578621710))) : var_2)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 20;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            {
                                arr_72 [i_17] [i_17] [i_17] [i_17] = (((var_1 ? -189933134 : ((var_14 ? var_1 : (arr_67 [i_17] [i_18] [i_18] [i_18] [i_22] [i_17]))))));
                                var_29 ^= ((((var_3 ? 18446744073709551615 : (((1 ? -1070829198 : 1))))) * var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
