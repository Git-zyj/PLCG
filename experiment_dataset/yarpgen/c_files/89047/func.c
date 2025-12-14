/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89047
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
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_1]);
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))) * (((arr_5 [i_0] [i_0]) ? (arr_2 [i_0] [9]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_2])))))) ? (140737488355327ULL) : (((unsigned long long int) arr_12 [i_2] [i_2] [3ULL]))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_3] [12LL] [i_5] [i_4] [(short)1] = ((unsigned short) (-(max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_17 [i_2] [i_3] [i_4] [i_5] [i_6])))));
                                var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [8] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((min((arr_8 [i_2]), (((/* implicit */unsigned long long int) (unsigned char)0)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7143)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (var_0)))))) : (((/* implicit */unsigned long long int) ((int) arr_17 [i_2] [i_2] [i_4] [i_5] [i_6])))));
                                arr_23 [i_2] [i_4] [i_4] [10ULL] [i_2] [14] = ((/* implicit */unsigned char) ((((long long int) arr_19 [i_2] [i_3] [i_4] [i_5])) ^ (((/* implicit */long long int) arr_19 [i_3] [i_4] [i_5] [i_4]))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_3 - 2] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((arr_14 [i_2] [i_3 - 2] [i_4]) && (arr_14 [(_Bool)1] [i_3 + 1] [i_4])))), ((unsigned char)6)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [(_Bool)1] [i_2] [i_2])) && (((/* implicit */_Bool) arr_16 [i_2]))));
                                var_17 = ((/* implicit */long long int) (_Bool)0);
                                var_18 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_3 - 2] [i_8 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
                                arr_36 [i_7] [i_7] [i_2] = ((/* implicit */unsigned int) 1803967025);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                arr_43 [i_2] [i_3] [i_13] [i_12] [i_13] = ((/* implicit */short) var_7);
                                arr_44 [i_13] [i_13] [i_13] [(short)11] [i_13] = ((/* implicit */int) arr_32 [(short)14] [i_3 + 1] [i_12 - 1] [(unsigned short)16]);
                                arr_45 [i_2] [i_2] [i_7] [i_12 - 1] [i_13] [i_7] = ((/* implicit */unsigned int) arr_12 [i_2] [i_7] [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_14 - 1] [i_15 - 1])) == (((/* implicit */int) var_11))));
                                var_20 |= ((/* implicit */short) ((signed char) arr_34 [i_3 + 1] [i_14 - 1] [i_15 + 1] [(short)11]));
                            }
                        } 
                    } 
                    arr_52 [i_2] [i_2] [(unsigned char)1] [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_50 [i_2] [i_3] [i_7] [i_7] [i_2] [(short)7] [i_2]));
                }
                /* LoopSeq 2 */
                for (signed char i_16 = 1; i_16 < 15; i_16 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 2; i_17 < 15; i_17 += 1) 
                    {
                        for (long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                        {
                            {
                                arr_62 [i_17] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27852))))) ? (arr_60 [i_2] [i_3 - 1] [i_16 + 2] [i_17] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_16])) == (((/* implicit */int) (unsigned char)18))))))))));
                                arr_63 [i_2] [(_Bool)1] [i_2] [i_2] [i_17] [i_2] = max((arr_32 [i_2] [i_3 + 1] [i_16] [i_18]), (arr_32 [i_16] [i_17 - 2] [i_16] [i_17]));
                                arr_64 [i_2] [i_2] [i_16 + 1] [i_17] [i_17] [i_17] [i_17 + 1] = ((/* implicit */_Bool) var_8);
                                arr_65 [i_17] [i_17] [(unsigned char)12] [i_17] [(short)13] = ((/* implicit */unsigned long long int) arr_55 [i_2] [i_16] [i_17 + 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 2; i_19 < 15; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
                        {
                            {
                                arr_71 [i_20] [i_20] [i_19] [i_16] [i_3 - 2] [i_2] = ((/* implicit */unsigned int) arr_16 [i_19]);
                                var_21 += ((/* implicit */unsigned int) arr_57 [i_2] [i_2] [4LL] [(_Bool)1] [i_2] [i_2]);
                                arr_72 [i_2] [i_16] [(unsigned short)14] [i_20] = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    var_22 -= ((/* implicit */short) var_6);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 1; i_22 < 14; i_22 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_2] [i_3] [i_3 - 2] [i_22 + 3] [(signed char)15])) == (((/* implicit */int) var_8))));
                        arr_78 [i_22] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) arr_37 [i_2] [i_3 - 1] [i_22 + 2] [i_22]));
                    }
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_2] [i_3 - 1])) ? (arr_61 [i_21] [i_3 - 2]) : (arr_61 [i_21] [i_3 + 1])));
                }
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    arr_81 [i_23 + 1] [i_23] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_26 [i_2] [i_3 - 2] [i_3]) - (((/* implicit */long long int) arr_19 [i_23 + 1] [i_23 + 1] [i_2] [i_23 + 1])))));
                    var_25 = ((/* implicit */unsigned long long int) arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    arr_82 [i_2] [i_3] [i_23] = ((/* implicit */int) (+(min(((~(var_2))), (arr_77 [i_23 + 1] [(unsigned char)5] [i_2] [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_24 = 2; i_24 < 16; i_24 += 2) 
                    {
                        arr_85 [7U] [i_23] [i_23] [i_24 - 2] [4U] [i_24] = ((/* implicit */signed char) ((unsigned char) (unsigned char)13));
                        arr_86 [i_23] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_84 [i_23 + 1] [i_24 - 1] [i_3 - 2])) && (((/* implicit */_Bool) arr_84 [i_23 + 1] [i_24 - 2] [i_3 - 2])))))));
                        var_26 = ((unsigned int) ((arr_75 [i_2] [i_3 - 2] [9ULL] [i_3] [i_23] [i_23 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))));
                    }
                    for (signed char i_25 = 4; i_25 < 16; i_25 += 2) 
                    {
                        var_27 |= ((/* implicit */short) 4294967295U);
                        arr_91 [i_23] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((1065541199U) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) * (((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2])))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)114)) == (((/* implicit */int) arr_90 [i_23] [i_3] [i_23] [i_25])))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_2] [i_2] [i_2] [i_2]))) * (8642203291978912906ULL))))))));
                    }
                }
            }
        } 
    } 
}
