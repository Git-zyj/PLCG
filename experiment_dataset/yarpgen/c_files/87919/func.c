/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87919
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) arr_0 [i_1]);
                arr_6 [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_16), (((/* implicit */unsigned long long int) min((min((var_13), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                arr_14 [i_3] [i_3 - 2] [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1]))) - (var_13))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3 - 1])) << (((((/* implicit */int) max((var_14), (((/* implicit */unsigned char) arr_2 [i_2] [i_3] [i_3]))))) - (184))))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_17 [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((int) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((arr_13 [i_3] [i_3 - 2]) >= (((/* implicit */int) arr_1 [i_2] [i_2]))))))));
                    arr_18 [i_4] [i_3] [i_4] = max((((((/* implicit */int) arr_16 [i_3] [i_3 - 2] [i_3])) * (((/* implicit */int) arr_9 [i_4])))), (((/* implicit */int) var_19)));
                    arr_19 [(_Bool)1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) arr_3 [i_4])));
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_26 [i_4] = ((/* implicit */unsigned short) max((var_1), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_7)))), (((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) var_13)))))))));
                            arr_27 [i_2] [i_4] [i_4] [i_5] [i_6] = (i_4 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) var_10)), (arr_8 [i_3 + 1])))) << (((((((arr_3 [i_4]) - (((/* implicit */int) arr_24 [i_3 - 1] [i_6] [(unsigned short)10] [i_2 - 2] [i_6] [i_6] [i_5])))) + (695807276))) - (9)))))) : (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) var_10)), (arr_8 [i_3 + 1])))) << (((((((((arr_3 [i_4]) - (((/* implicit */int) arr_24 [i_3 - 1] [i_6] [(unsigned short)10] [i_2 - 2] [i_6] [i_6] [i_5])))) - (695807276))) - (9))) - (796697910))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_31 [i_2] [i_5] [i_4] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) > (((/* implicit */int) arr_8 [i_5]))))) + (((((/* implicit */int) arr_2 [i_5] [i_4] [i_3])) - (var_2)))));
                            arr_32 [i_4] [i_4] [i_4] [i_4] [(short)10] = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_3 - 2] [i_3 + 1] [i_3]));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_35 [i_8] [i_3] [(short)0] [i_4] [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) var_16);
                            arr_36 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))) & (((/* implicit */int) ((((/* implicit */int) ((var_8) <= (var_13)))) != (((/* implicit */int) ((unsigned short) arr_23 [i_5] [i_5] [i_5]))))))));
                            arr_37 [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((((/* implicit */signed char) arr_29 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_3] [i_3] [i_3 - 2] [i_8])), (arr_23 [8] [i_2 - 2] [i_2 - 1])))), (((unsigned short) arr_20 [i_2 + 1] [i_8] [i_3] [i_3]))));
                        }
                        arr_38 [i_2] [i_2] = max((((unsigned char) arr_16 [i_2 - 2] [i_2 + 1] [i_3 - 1])), (((unsigned char) arr_21 [i_2] [i_2] [i_3 + 1] [i_2] [i_4])));
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        arr_41 [i_2] = ((/* implicit */short) arr_15 [i_3] [i_3 + 1] [i_4] [i_9]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4] [i_2 - 2] = ((/* implicit */unsigned short) arr_39 [i_10] [i_4] [(unsigned char)2] [i_9]);
                            arr_45 [i_4] [i_9] [(unsigned char)2] [i_4] = ((((/* implicit */int) arr_10 [i_3 + 1])) & (((/* implicit */int) arr_10 [i_3 - 2])));
                        }
                        arr_46 [i_2 - 2] [i_4] [i_2 - 2] [(short)9] [i_2] [i_2 + 1] = max((min((var_16), (((/* implicit */unsigned long long int) arr_29 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 2] [i_3] [i_4])))), (((/* implicit */unsigned long long int) min((var_18), (((/* implicit */short) var_6))))));
                        arr_47 [i_4] [i_9] = ((/* implicit */unsigned int) arr_22 [i_2 - 2] [i_2] [i_3 - 1] [(unsigned short)8] [i_3] [i_3 + 1] [i_3 + 1]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            arr_52 [7ULL] [i_3] [i_4] [i_9] [i_4] = ((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            arr_53 [i_2] [i_2] [i_4] [(_Bool)1] = ((unsigned long long int) arr_34 [i_4] [i_3] [i_4] [(unsigned char)5] [i_3 + 1]);
                            arr_54 [i_9] [i_9] [i_9] [i_4] [i_9] = ((/* implicit */unsigned char) arr_43 [(unsigned short)9] [i_3 + 1] [i_3] [(unsigned short)9] [i_3 + 1] [i_3 + 1]);
                            arr_55 [i_4] [i_2] [i_3] [i_9] [i_11] [i_11] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_13 [i_2] [i_2 - 1])) >= (var_8)));
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            arr_61 [i_4] [i_3] [(unsigned char)1] [i_12] [i_13] = ((/* implicit */signed char) ((unsigned char) arr_57 [i_2 - 2]));
                            arr_62 [0] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) arr_39 [(short)6] [i_4] [i_12] [i_13]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            arr_65 [i_2] [(signed char)8] [i_3 - 1] [i_12] [i_2] [i_4] [i_14] = ((/* implicit */signed char) ((var_2) != (((/* implicit */int) ((unsigned char) var_9)))));
                            arr_66 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned char)7] [(signed char)4] = ((/* implicit */_Bool) ((short) arr_50 [i_2] [(unsigned short)4] [i_4] [i_12] [i_2 - 1] [i_3 - 1]));
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            arr_70 [i_2] [i_2] [i_2] [(unsigned short)0] [i_2] = ((/* implicit */_Bool) arr_63 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]);
                            arr_71 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((arr_25 [(_Bool)0] [i_15] [3ULL] [i_15] [(_Bool)0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_12] [i_4])))));
                            arr_72 [i_4] = ((/* implicit */unsigned long long int) var_10);
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            arr_76 [i_4] = ((/* implicit */_Bool) min((min((arr_60 [i_3 - 1] [i_3 + 1] [i_3] [i_4] [i_3 - 1] [6ULL] [i_3 - 1]), (((unsigned short) var_10)))), (((/* implicit */unsigned short) arr_48 [i_2] [i_4] [i_2 - 2]))));
                            arr_77 [i_4] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_4] [i_3] [i_4] [(unsigned char)4] [i_16] [i_2])) & (((/* implicit */int) arr_58 [i_2] [i_2] [i_4] [i_12] [i_16]))))) ^ (arr_51 [i_2] [i_2] [i_4] [i_2 + 1] [i_2 + 1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) min((max((var_0), (((/* implicit */int) arr_40 [i_4] [i_12] [i_4] [i_3 - 2] [i_4])))), (((/* implicit */int) arr_43 [i_2] [i_3 - 2] [10ULL] [i_12] [(_Bool)0] [i_2])))))));
                            arr_78 [i_4] [i_12] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2 + 1])), (arr_63 [(short)1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_4] [i_12] [i_4] [i_3 + 1] [i_4])) & (((/* implicit */int) var_9))))), (arr_56 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2])))));
                        }
                        arr_79 [(unsigned short)0] [i_2 - 1] [i_2] [i_3] [i_2] = ((/* implicit */short) min((((/* implicit */int) var_1)), (min((arr_20 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1]), (((/* implicit */int) ((unsigned char) var_1)))))));
                        arr_80 [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) ((unsigned char) arr_60 [i_3 - 2] [i_3 - 2] [(signed char)10] [i_4] [i_2 - 2] [i_12] [i_12]))) && (((/* implicit */_Bool) min((arr_33 [i_3 - 2] [(short)5] [(short)5] [i_12] [i_2 - 2]), (((/* implicit */unsigned char) arr_0 [i_3 - 1]))))));
                    }
                    for (int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        arr_85 [i_4] [(unsigned short)10] = ((unsigned long long int) var_9);
                        arr_86 [i_4] [i_2] [i_4] [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */int) max((arr_9 [i_2 - 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [(unsigned char)9] [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_3 [i_3])))))))) >= (((/* implicit */int) min((arr_24 [i_3] [i_3 - 1] [i_3 + 1] [i_17] [i_17] [i_17] [i_17]), (((/* implicit */unsigned char) var_10)))))));
                        arr_87 [i_2] = ((/* implicit */unsigned char) ((max((arr_82 [i_2] [i_3] [i_4] [i_17]), (min((arr_11 [i_3]), (((/* implicit */unsigned long long int) arr_58 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (arr_57 [i_4])))) == (((/* implicit */int) arr_1 [i_4] [i_17]))))))));
                        arr_88 [i_4] [i_4] [i_4] = ((/* implicit */short) var_16);
                    }
                    arr_89 [(signed char)3] [i_4] [i_4] [(short)10] = ((/* implicit */short) max((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_4] [i_3 + 1] [i_4] [i_2 - 1] [i_4] [i_2 - 2] [i_2]))) <= (arr_83 [i_4] [i_3] [i_2 - 2] [i_4] [i_2 + 1] [i_4]))))));
                }
                for (unsigned char i_18 = 3; i_18 < 10; i_18 += 1) 
                {
                    arr_92 [i_2 + 1] [i_2] [i_2] = ((/* implicit */int) var_3);
                    arr_93 [i_2 - 1] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */int) arr_9 [i_2 - 2])), (var_4))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_19)) << (((min((var_16), (((/* implicit */unsigned long long int) var_9)))) - (39061ULL))))), (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) var_10)), (var_18)))), (max((var_9), (((/* implicit */unsigned short) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_19 = 3; i_19 < 22; i_19 += 1) 
    {
        arr_98 [i_19] = ((/* implicit */short) max((max((((arr_96 [i_19]) ^ (((/* implicit */int) arr_94 [i_19 + 3] [i_19 + 3])))), (var_2))), (max((arr_96 [i_19]), (arr_96 [i_19])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            arr_102 [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_97 [i_19 + 2] [i_19 + 2])) | (((/* implicit */int) var_19))));
            /* LoopNest 2 */
            for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                for (short i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    {
                        arr_110 [i_21] [i_21] [i_21] [i_21] [(short)22] [i_21] = ((/* implicit */unsigned short) arr_101 [7] [i_20] [i_19]);
                        arr_111 [i_19] [i_20] [i_21] [i_22] [i_22] = ((/* implicit */unsigned char) ((int) ((signed char) var_17)));
                        arr_112 [i_19] [i_21] [(unsigned short)0] [i_19] = ((/* implicit */unsigned long long int) ((short) arr_106 [i_19 + 2]));
                        arr_113 [i_19] [i_20] [i_19] [i_20] [i_20] = ((/* implicit */signed char) ((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
            arr_114 [i_19] = arr_103 [i_19] [i_19];
            arr_115 [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_99 [i_19] [i_19])) * (((/* implicit */int) var_18))));
        }
        /* vectorizable */
        for (short i_23 = 0; i_23 < 25; i_23 += 4) 
        {
            arr_118 [i_23] [i_23] = ((/* implicit */signed char) ((arr_104 [i_19 + 2] [i_19] [i_19 + 1]) & (arr_104 [i_19 + 3] [i_19 - 1] [i_19 - 2])));
            arr_119 [i_19] [i_19] = ((/* implicit */unsigned char) arr_103 [i_19 + 1] [i_19 + 3]);
        }
        for (unsigned long long int i_24 = 2; i_24 < 21; i_24 += 4) 
        {
            arr_122 [i_24] [i_24] = ((/* implicit */unsigned short) max((((arr_101 [i_19 - 2] [i_24 + 2] [i_24 + 3]) & (arr_101 [i_19 + 3] [(unsigned short)21] [i_24 + 4]))), (max((arr_101 [i_19 + 3] [i_24] [i_24 + 2]), (arr_101 [i_19 - 3] [i_24] [i_24 + 2])))));
            /* LoopNest 2 */
            for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 25; i_26 += 1) 
                {
                    {
                        arr_129 [i_19] = max((((unsigned long long int) max((arr_120 [i_25]), (((/* implicit */unsigned long long int) var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) arr_116 [i_25] [i_24]))))) == (min((((/* implicit */unsigned long long int) var_1)), (arr_121 [i_19 - 1])))))));
                        arr_130 [i_24] = ((/* implicit */int) var_11);
                    }
                } 
            } 
        }
        arr_131 [i_19] [(unsigned char)4] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_108 [i_19 + 1] [i_19 - 1] [i_19] [i_19] [i_19])), (min((var_17), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) min((arr_117 [i_19 - 2] [i_19 - 3]), (arr_117 [i_19 + 3] [i_19 + 2]))))));
    }
}
