/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54995
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-16141);
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_1] [i_0]);
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) var_2);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]);
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) var_5);
                }
                /* LoopSeq 1 */
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_3] [i_1] [i_0] = ((/* implicit */short) max((min((arr_17 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_1] [i_4 - 2]), (arr_17 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_1] [i_4]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_1] [i_4])))))));
                                arr_21 [15LL] [i_1 - 1] [i_3 + 1] [i_4] [i_1] [i_1 - 1] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                                arr_22 [i_4] [i_4] [i_4 - 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (short)-16131))) ? (((/* implicit */int) min(((short)-16118), (((/* implicit */short) arr_13 [i_0]))))) : (((/* implicit */int) ((arr_15 [i_0] [i_1] [i_1] [i_4] [i_5]) == (arr_15 [i_1 - 1] [i_4 - 2] [i_3 + 1] [i_0] [i_3 + 1]))))));
                                arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)16111);
                            }
                        } 
                    } 
                    arr_24 [i_1] [i_1] [i_1] = ((var_1) + (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_1 + 1]))))));
                    arr_25 [i_1 - 1] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0])) > (((/* implicit */int) (short)16128))))), (min((((((/* implicit */_Bool) (short)-16105)) ? (((/* implicit */int) (short)16132)) : (((/* implicit */int) (short)16126)))), (((/* implicit */int) (short)-16147))))));
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)16152)) - (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) == (var_1)))) * (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-16157)))))))));
                            arr_31 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) arr_6 [i_0] [(short)3] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_32 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) (short)-16172)), (var_9))), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) var_0))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        arr_35 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16121))) : (arr_27 [i_8] [i_8] [i_8])));
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) ((var_5) < (((/* implicit */unsigned long long int) arr_15 [i_8] [i_8] [(signed char)11] [i_8] [15ULL])))));
        arr_37 [i_8] = ((/* implicit */unsigned int) (short)16143);
        arr_38 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_8])) ? (arr_2 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        arr_39 [i_8] [i_8] = ((/* implicit */long long int) ((arr_1 [i_8] [i_8]) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_14 [i_8] [i_8]))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    arr_48 [i_9] [(signed char)8] [i_9] [4LL] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_9] [i_9 + 1] [i_9] [i_9] [i_9])) ? (var_4) : (var_4))) > (((/* implicit */long long int) ((/* implicit */int) (short)16118)))));
                    arr_49 [i_9] [i_10] [i_11] = arr_4 [i_9];
                }
            } 
        } 
        arr_50 [i_9] [3LL] = ((/* implicit */unsigned int) (short)16129);
    }
    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 2) 
        {
            arr_57 [i_12] = ((/* implicit */signed char) var_7);
            arr_58 [8ULL] = ((/* implicit */long long int) (short)-16161);
            arr_59 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        }
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                {
                    arr_67 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)16114))))), ((short)16121)));
                    arr_68 [(short)15] [i_12] [i_12] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((short)-16122), ((short)-16137)))), (((((/* implicit */unsigned long long int) arr_51 [i_12])) + (var_3)))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 2) 
        {
            arr_72 [i_12] [i_12] = ((/* implicit */long long int) ((int) ((unsigned long long int) arr_65 [i_12] [i_12] [(unsigned char)12] [1LL])));
            arr_73 [i_12] [i_12] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16141)) | (((((/* implicit */int) (short)16126)) >> (((((/* implicit */int) (short)16136)) - (16117)))))));
        }
        for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    {
                        arr_83 [i_18] [i_12] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_80 [i_12])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            arr_86 [i_12] [i_17] [i_18] [i_18] [i_19] [i_19] [i_12] = ((unsigned long long int) ((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_12] [i_12] [i_12]))))) != (((/* implicit */unsigned long long int) arr_51 [i_12]))));
                            arr_87 [17ULL] [1] [i_12] = ((/* implicit */_Bool) var_7);
                            arr_88 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_74 [i_20] [i_17])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_74 [i_12] [i_17])), (arr_79 [i_12] [i_12] [i_12])))) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_18] [i_17])))))));
                        }
                        for (long long int i_21 = 0; i_21 < 22; i_21 += 3) 
                        {
                            arr_92 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) min((arr_75 [i_12] [i_12]), (((/* implicit */int) min(((short)16152), ((short)-16122))))));
                            arr_93 [i_12] [(short)3] [i_18] [i_19] [i_19] [i_21] = ((/* implicit */unsigned long long int) arr_80 [i_18]);
                        }
                        arr_94 [i_19] [i_19] [i_12] [i_19] = (i_12 % 2 == 0) ? (((/* implicit */unsigned char) ((((min((arr_53 [i_12]), (arr_89 [i_12] [i_17] [i_12] [(unsigned char)1] [i_19]))) + (9223372036854775807LL))) >> (((((arr_52 [i_12]) + (arr_52 [i_12]))) - (2935032412723382836LL)))))) : (((/* implicit */unsigned char) ((((min((arr_53 [i_12]), (arr_89 [i_12] [i_17] [i_12] [(unsigned char)1] [i_19]))) + (9223372036854775807LL))) >> (((((((arr_52 [i_12]) - (arr_52 [i_12]))) - (2935032412723382836LL))) + (2935032412723382872LL))))));
                        arr_95 [i_19] [i_12] [i_17] [i_12] [i_12] = ((/* implicit */unsigned int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16110)))));
                        arr_96 [i_12] [(short)12] [1ULL] [i_18] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) (short)16116))), (min((arr_56 [i_17]), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) (short)-16152)), (((signed char) (short)-16127)))))) : ((((!(((/* implicit */_Bool) arr_61 [i_18])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_12] [i_18] [i_12]))) ^ (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)16138))))))));
                    }
                } 
            } 
            arr_97 [i_12] = ((/* implicit */short) arr_60 [i_12] [i_12]);
        }
        for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 2) 
        {
            arr_101 [i_12] = ((/* implicit */signed char) (short)16133);
            arr_102 [i_12] [i_22] [14LL] = max((((/* implicit */unsigned long long int) min((arr_71 [i_22 + 1] [i_12]), (arr_71 [i_22 - 1] [i_12])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16104))) == (var_3)))), (arr_66 [i_22 + 1]))));
        }
        /* vectorizable */
        for (unsigned char i_23 = 1; i_23 < 19; i_23 += 4) 
        {
            arr_105 [i_12] [i_23] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)16137)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [i_12] [i_23]))))) : (((/* implicit */int) (short)-16129))));
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                for (short i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    {
                        arr_112 [i_12] [i_25] |= ((/* implicit */unsigned long long int) ((long long int) var_3));
                        arr_113 [i_12] [14U] [i_24] [i_23] [i_25] [i_12] = ((/* implicit */int) ((signed char) var_7));
                    }
                } 
            } 
            arr_114 [i_12] = ((/* implicit */unsigned long long int) ((long long int) (short)-16133));
            arr_115 [i_23] [i_12] [i_12] = ((/* implicit */unsigned char) ((signed char) arr_82 [10] [i_12]));
            arr_116 [i_12] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16138))))))));
        }
    }
    for (unsigned long long int i_26 = 2; i_26 < 15; i_26 += 1) 
    {
        arr_119 [i_26] = (+(((var_1) / (var_9))));
        arr_120 [i_26] = ((/* implicit */short) min((((/* implicit */signed char) (((-(var_3))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16099)) + (((/* implicit */int) (short)-16142)))))))), (min((arr_70 [i_26 - 2] [i_26 - 1] [i_26]), (var_6)))));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 16; i_27 += 4) 
        {
            for (signed char i_28 = 0; i_28 < 16; i_28 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_29 = 4; i_29 < 14; i_29 += 1) 
                    {
                        for (unsigned long long int i_30 = 1; i_30 < 14; i_30 += 3) 
                        {
                            {
                                arr_132 [i_26] [i_27] [(short)1] [i_26] [i_26] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned char) (short)16149))) ? (((/* implicit */int) (short)-16140)) : (((/* implicit */int) (short)-16100)))), (((/* implicit */int) ((max((var_3), (((/* implicit */unsigned long long int) (short)16123)))) != (var_5))))));
                                arr_133 [i_26] [i_29] [i_26] = (!(((/* implicit */_Bool) max((arr_66 [i_26 - 1]), (arr_66 [i_26 + 1])))));
                            }
                        } 
                    } 
                    arr_134 [i_28] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_27]))));
                }
            } 
        } 
    }
}
