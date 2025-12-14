/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97248
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
    var_12 = ((var_7) - (var_5));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? ((+(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) (unsigned short)11081))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                                arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [(unsigned short)5] [i_1] [i_3 - 1] [i_3] [7ULL])) ? (arr_12 [i_1] [i_1] [i_3 - 1] [i_1] [2ULL]) : (arr_12 [i_0] [(unsigned short)2] [i_3 + 1] [i_3] [i_0])));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) (~(18014398509481983ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 2] [1ULL]);
                                arr_25 [i_5] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (-(var_10)));
                                arr_26 [i_0] [9ULL] [i_5] = arr_5 [i_0] [(unsigned short)9] [i_5 - 1] [i_6];
                                arr_27 [(unsigned short)2] [i_5] = arr_20 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [(unsigned short)3];
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_1] [i_1] [(unsigned short)3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11081))) > (5034115846381604797ULL)))) / (((/* implicit */int) arr_6 [i_0] [i_7] [i_8]))));
                    arr_34 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_7]))) > (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */int) var_2))));
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 2; i_9 < 8; i_9 += 4) 
                    {
                        arr_38 [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                        arr_39 [i_0] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5034115846381604800ULL))));
                        arr_40 [i_9 + 1] = var_6;
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 4) 
                    {
                        arr_44 [i_0] [i_7] [i_8] [(unsigned short)6] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) && (((/* implicit */_Bool) ((unsigned short) var_11)))));
                        arr_45 [i_10 - 2] [i_10 - 3] [i_10 - 2] [i_8] [i_7] [7ULL] = ((/* implicit */unsigned short) arr_22 [0ULL] [i_0] [i_0] [i_7] [i_8] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            arr_48 [(unsigned short)8] [i_7] [(unsigned short)8] [i_10] [i_11] [i_11] = ((((/* implicit */_Bool) arr_36 [i_0] [i_7] [i_10] [i_11])) ? (var_1) : (arr_36 [i_10] [i_10] [i_8] [i_8]));
                            arr_49 [i_11] [i_11] [(unsigned short)7] [i_10] [8ULL] = ((/* implicit */unsigned short) ((arr_12 [i_10 - 3] [i_11] [i_11 - 1] [i_11 + 1] [i_11]) >= (arr_12 [i_10 - 3] [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1])));
                        }
                        arr_50 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50609)) ? (((/* implicit */int) (unsigned short)45484)) : (((/* implicit */int) arr_7 [i_10 - 2] [(unsigned short)1] [(unsigned short)7] [i_10 - 1]))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 6; i_12 += 4) 
                    {
                        arr_53 [(unsigned short)1] [2ULL] [2ULL] [i_8] [i_12 + 2] [i_12 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((11207844241921824340ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11081)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_12 + 2] [i_12 + 2] [i_12 - 1] [i_12 - 1]))) : (arr_22 [i_12 + 1] [i_12] [i_12 + 3] [i_12 + 3] [i_12 + 3] [1ULL])));
                        arr_54 [i_0] [i_0] = arr_6 [i_0] [i_7] [i_12];
                        arr_55 [(unsigned short)3] = ((/* implicit */unsigned short) 761423530786996375ULL);
                    }
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        arr_59 [i_7] [i_7] = (~(((((/* implicit */_Bool) 0ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                        arr_60 [i_0] = (-(arr_2 [i_7]));
                    }
                }
            } 
        } 
        arr_61 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)2))) + (((/* implicit */int) arr_6 [i_0] [3ULL] [i_0]))));
        arr_62 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_1))) > (((/* implicit */int) ((arr_21 [(unsigned short)0] [i_0] [(unsigned short)0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        arr_63 [i_0] = ((unsigned long long int) var_10);
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 4) 
    {
        arr_66 [i_14] = ((arr_64 [i_14 - 2] [i_14 + 1]) - (arr_64 [i_14 - 2] [i_14 - 2]));
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            arr_70 [i_14] [i_15] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_67 [i_15])) ? (arr_64 [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [14ULL] [i_15])))))));
            arr_71 [i_14] = ((/* implicit */unsigned short) (-(761423530786996373ULL)));
        }
        for (unsigned short i_16 = 1; i_16 < 21; i_16 += 3) 
        {
            arr_74 [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_65 [i_14 - 1] [i_16 - 1]);
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                for (unsigned short i_18 = 2; i_18 < 21; i_18 += 4) 
                {
                    {
                        arr_79 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_76 [i_14])));
                        arr_80 [i_14] [(unsigned short)10] [i_17] [(unsigned short)19] [i_16] = var_5;
                        arr_81 [i_16] = ((((/* implicit */_Bool) arr_64 [i_14] [i_14 + 1])) ? (arr_64 [i_14] [i_14 + 1]) : (arr_64 [(unsigned short)3] [i_14 + 1]));
                        /* LoopSeq 2 */
                        for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) 
                        {
                            arr_84 [i_16] [i_16] [i_19 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_18 - 2] [i_14 - 2] [i_16 + 2] [i_16] [i_18 - 2]))) | (5316761199745232798ULL));
                            arr_85 [i_14] [i_14] [i_17] [i_17] [(unsigned short)0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(5034115846381604797ULL))));
                            arr_86 [i_14] [i_18] [i_16] = ((/* implicit */unsigned short) ((arr_72 [i_14 - 1]) * (arr_72 [i_14 - 1])));
                            arr_87 [i_14 - 1] [i_17] [i_14] = arr_64 [i_16 - 1] [i_16 - 1];
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 4) 
                        {
                            arr_90 [i_16] [i_16] [i_17] [i_18] [i_16] [i_20] = ((/* implicit */unsigned short) var_7);
                            arr_91 [i_20 + 2] [i_16] [i_17] [i_16] [i_14] = ((unsigned short) (unsigned short)65535);
                            arr_92 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_89 [i_18 - 1] [i_14 - 2])) : (((/* implicit */int) arr_89 [i_18 + 2] [i_14 - 2]))));
                            arr_93 [i_16] [(unsigned short)17] = ((/* implicit */unsigned short) 2251799813685247ULL);
                            arr_94 [i_18] |= var_10;
                        }
                    }
                } 
            } 
        }
    }
    var_13 = var_9;
}
