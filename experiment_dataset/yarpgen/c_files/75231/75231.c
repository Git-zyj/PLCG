/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (arr_1 [i_1])));
                arr_5 [i_0] = (arr_0 [i_1 + 2]);
            }
        }
    }
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {

                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_12 = -2088;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_13 = (((arr_13 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? ((((-1 == (((-(arr_17 [i_4] [i_3])))))))) : (max(-1, (max(198, (arr_18 [i_4] [i_5 + 2])))))));
                                var_14 = (max((max(579479367, 2087)), ((((arr_8 [i_4 - 2]) || (arr_8 [i_4 + 3]))))));
                            }
                        }
                    }
                    arr_20 [i_4] [i_3] [i_4] = 6676;
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    arr_23 [i_2] [i_7] [i_7] = (((((arr_19 [i_3] [i_2 + 1] [i_7] [i_3] [i_2] [i_7]) ? (arr_9 [i_2]) : (arr_12 [i_2]))) + (arr_13 [i_7 + 1] [i_7] [i_7] [i_7 + 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_31 [i_2] [i_8] [i_7 - 1] [i_7 - 1] [18] |= (arr_24 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [18] [i_7]);
                                var_15 = (((arr_25 [i_7 + 1] [i_7] [i_2 + 1] [i_2]) - (1831806193273122792 / 246)));
                                arr_32 [i_2] [i_2] [i_2] [i_7] [i_7] [i_8] [i_8] = 579479356;
                                arr_33 [i_7] = -6677;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_16 = (~182);
                                arr_40 [i_3] [i_3] [i_3] [i_10] [i_11 + 2] [i_2 - 1] [i_7] = 198;
                            }
                        }
                    }
                }
                for (int i_12 = 4; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    var_17 = -579479392;
                    arr_43 [i_2] [i_2] [i_2] = max(((((9391 ? 30127 : 522922564)))), (arr_8 [i_3]));
                    var_18 &= -2088;
                }
                /* vectorizable */
                for (int i_13 = 4; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_19 += -1;
                    var_20 = (min(var_20, ((((arr_34 [i_13 + 2] [i_13 + 2] [i_13 - 2] [i_2 + 1] [i_13 - 1]) && 1)))));
                    var_21 = (arr_29 [i_2] [i_2]);
                    var_22 ^= ((-89 ? (arr_17 [i_13] [i_13 - 1]) : (arr_45 [i_2] [i_13 + 2] [i_2] [i_2])));
                }
                arr_46 [i_2] [i_2] = ((+(min(((min((arr_15 [i_2] [i_3] [i_2] [i_3]), (arr_11 [i_2] [i_2])))), (((arr_36 [i_2] [i_2] [i_2 + 2] [1] [i_3] [i_3]) ? (arr_17 [8] [8]) : 34))))));
                arr_47 [i_3] [i_3] = 34;
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_16 = 3; i_16 < 16;i_16 += 1)
                            {
                                arr_56 [i_2 - 1] [i_3] [i_14 + 2] [i_15] [i_14] = 28;
                                arr_57 [i_2 - 1] [i_14] [i_14 - 1] [i_2 - 1] [i_16] = ((!(arr_39 [i_16 - 2] [i_14] [i_14] [i_14] [i_2 + 2])));
                                arr_58 [i_2 + 2] [i_3] [i_3] [i_15] [i_14] = 36290;
                            }
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 20;i_17 += 1)
                            {
                                var_23 |= ((((-2689929843749937596 <= (arr_18 [i_17] [i_3]))) ? 2689929843749937595 : 579479356));
                                arr_62 [i_17] [i_15] [i_17] [i_17] [i_17] |= (arr_24 [i_17] [i_2 - 1] [i_2] [i_15] [i_17] [i_2]);
                                arr_63 [i_17] [i_17] [i_14] [i_14] [i_15] [i_15] [i_17] |= 174;
                            }
                            /* vectorizable */
                            for (int i_18 = 0; i_18 < 20;i_18 += 1)
                            {
                                arr_66 [i_15] [i_3] [i_14] [i_15] [i_18] = (((arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]) / 1765799449));
                                var_24 = ((~(arr_21 [i_2] [i_2 - 1] [i_14 - 1] [i_14])));
                                arr_67 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_14] [i_18] = (((arr_13 [i_15] [i_2 + 2] [i_2] [i_14 + 1]) << (((arr_13 [i_2] [i_2 + 2] [i_2 + 2] [i_14 - 1]) - 27))));
                                var_25 = (max(var_25, ((~(arr_61 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14] [i_14] [i_14 - 1] [0])))));
                            }
                            arr_68 [i_14] [i_3] [i_14] [i_14] [i_14] = max((arr_34 [i_2 + 1] [i_2 + 1] [i_3] [i_14 + 2] [i_2 + 1]), (((arr_34 [i_2] [i_3] [i_14 - 1] [i_14 + 1] [i_2 + 2]) ^ 1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
