/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61521
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_2] [(signed char)10] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_2)))) * (((/* implicit */int) max((((/* implicit */short) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1])), (max((((/* implicit */short) (unsigned char)159)), (var_9))))))));
                        arr_11 [i_0] [i_0] [(unsigned char)17] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (1ULL)));
                        arr_16 [i_0] [i_1] [i_2 - 1] [i_4] = ((/* implicit */unsigned long long int) var_8);
                        arr_17 [i_0] [i_1] [i_1] [(_Bool)0] [i_4] = ((/* implicit */int) max((25ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (var_9))))));
                    }
                    arr_18 [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(max((var_5), (((/* implicit */long long int) max((var_10), (var_6))))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            arr_34 [i_7] [i_5 + 3] [i_5 + 3] [i_7] [12] [i_0] [i_6] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [i_5] [i_8] [i_8]))))), (var_5)));
                            arr_35 [i_0] [i_0] [2] [i_5] [(signed char)19] = ((/* implicit */int) max((var_11), (((/* implicit */short) var_0))));
                        }
                    } 
                } 
            } 
            arr_36 [i_0] [i_5] [(_Bool)1] = ((/* implicit */signed char) var_9);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 15; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
                        {
                            {
                                arr_50 [i_9] [i_10] [i_10] [i_9] [i_10] = max((var_6), (((/* implicit */unsigned int) arr_41 [i_9 + 1])));
                                arr_51 [(unsigned char)1] [i_9] [12U] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_3 [0]);
                                arr_52 [i_9] [i_9] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_22 [i_11] [i_9] [i_12])) && (((/* implicit */_Bool) arr_12 [i_9 + 1] [i_9 + 1] [(_Bool)1] [i_12 + 1] [i_12] [i_12]))))));
                            }
                        } 
                    } 
                    arr_53 [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        arr_56 [i_9] [i_9] [i_9] [i_9] [(short)8] = ((/* implicit */int) arr_47 [i_9] [i_9] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        arr_57 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_24 [i_9 + 1] [(_Bool)1] [i_9]))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) max((arr_29 [i_9 + 1]), (arr_29 [i_9 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            {
                                arr_63 [i_9] [i_10] [i_11] [i_15] [i_11] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned int) -1108801020)) : (3554681210U))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_41 [i_11])) ? (((/* implicit */int) arr_26 [i_9] [i_10] [(signed char)16])) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)232)))))))));
                                arr_64 [i_9 + 1] [i_9 + 1] [i_15] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_61 [i_9 + 1] [i_9 + 1] [i_9] [(signed char)7] [i_9])), (max((max((((/* implicit */unsigned long long int) var_12)), (25ULL))), (((/* implicit */unsigned long long int) var_13))))));
                                arr_65 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [10U] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_27 [i_9] [i_10])) / (3ULL)));
                                arr_66 [i_9] [16] [i_10] [i_15] &= ((/* implicit */signed char) ((((/* implicit */int) max((var_9), (((/* implicit */short) var_8))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_11] [i_9 + 1])))))));
                                arr_67 [i_9] [12ULL] [i_11] [(unsigned char)12] = ((/* implicit */int) arr_33 [i_16] [i_16] [i_11] [i_16] [i_16]);
                            }
                        } 
                    } 
                    arr_68 [i_9] = ((/* implicit */unsigned int) arr_62 [i_9 + 1] [i_9 + 1] [i_9] [10LL] [i_9 + 1] [i_9 + 1] [i_9]);
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_17 = 1; i_17 < 15; i_17 += 4) 
                {
                    arr_72 [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_39 [i_9] [i_17 - 1]);
                    arr_73 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_9 + 1])) && (((/* implicit */_Bool) arr_3 [i_9 + 1]))));
                }
                /* vectorizable */
                for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    arr_77 [i_9] [i_10] = ((/* implicit */int) (~(((arr_61 [i_9] [8] [i_10] [i_10] [i_18]) >> (((arr_9 [i_9 + 1] [i_10] [i_10] [i_9] [i_18]) - (14059079777849549052ULL)))))));
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        arr_81 [i_9] [i_10] [i_9] [i_10] [i_18] [i_10] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_82 [i_19] [i_9] [i_18] [i_10] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [5] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]))));
                        arr_83 [i_9] [i_9] [i_9] [i_19] = ((/* implicit */signed char) arr_1 [i_10] [i_9]);
                    }
                    arr_84 [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_41 [5U]);
                }
                for (short i_20 = 3; i_20 < 16; i_20 += 3) 
                {
                    arr_87 [i_10] [i_10] [i_10] = max((((/* implicit */int) arr_21 [i_9] [i_9])), (arr_43 [i_9] [i_10] [i_10] [i_9]));
                    arr_88 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) var_4);
                    arr_89 [i_9] [i_9] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_76 [i_20 - 1] [i_10] [i_9 + 1])))), ((-(((/* implicit */int) arr_59 [i_9] [i_9 + 1] [i_20 + 1] [i_20 - 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        arr_93 [i_21] [i_9] [i_9] [i_9 + 1] = ((/* implicit */short) arr_75 [i_9] [i_9]);
                        arr_94 [i_9 + 1] [i_9] [i_9 + 1] [i_21] [i_9 + 1] = ((/* implicit */int) (~(arr_91 [(short)4] [i_20] [i_9])));
                    }
                }
                /* vectorizable */
                for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
                {
                    arr_97 [(_Bool)1] [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_49 [(unsigned char)3] [i_9 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (int i_24 = 0; i_24 < 17; i_24 += 4) 
                        {
                            {
                                arr_102 [i_9] [i_9] = ((/* implicit */int) var_12);
                                arr_103 [i_10] [10] [i_22] [(signed char)16] [i_10] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9 + 1] [i_23] [i_22]))) ^ (arr_49 [i_9 + 1] [i_9 + 1])));
                                arr_104 [i_10] [i_10] [i_22] [(signed char)2] = ((/* implicit */signed char) arr_45 [i_9] [i_10] [i_10] [i_9]);
                                arr_105 [i_9] [i_10] [i_23] = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
}
