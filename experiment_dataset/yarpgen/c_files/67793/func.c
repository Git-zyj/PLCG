/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67793
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
    var_14 += ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) (unsigned char)8)), (18446744073709551600ULL))), (var_7))) >> (((var_13) - (3759647278U)))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_1)))))) * (((/* implicit */int) ((((/* implicit */_Bool) 2296835809958952960ULL)) && (((/* implicit */_Bool) (unsigned short)10)))))));
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */short) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) 16149908263750598654ULL)) && (((/* implicit */_Bool) 1185397210))))) : (var_0))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned int) 1521857355);
        var_19 = ((/* implicit */unsigned char) min((var_19), (var_8)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_11))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 - 1] [i_4] = ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_20 [i_3] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) var_0);
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned char)255))));
                        arr_21 [i_0] [(unsigned short)1] [i_3] [(unsigned char)11] [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_22 = ((/* implicit */unsigned char) var_4);
                    }
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        arr_26 [i_6] [9] [i_2] [(unsigned char)11] [i_2] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (5840194760588809097ULL)));
                        arr_27 [i_6 + 4] [i_4 - 1] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (signed char)-9));
                    }
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                {
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0])) ? (var_4) : (((/* implicit */int) arr_19 [i_0] [i_2]))));
                    arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) var_11));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned char)247))));
                }
                for (short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) arr_3 [i_8])) | (arr_8 [i_2]))))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (unsigned char)242))));
                }
                arr_36 [i_0] [i_2] [i_3] &= ((/* implicit */int) ((unsigned int) var_5));
                arr_37 [i_0] [i_2] [i_3] [i_0] = ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)102)))))));
            }
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                arr_41 [i_0] [i_2] [i_9] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_10 [i_0] [i_0] [(short)3] [(short)3]));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)(-127 - 1)))));
                arr_42 [i_0] [i_2] [i_9] [i_9] = ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (signed char)-47)));
            }
            for (short i_10 = 3; i_10 < 11; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (unsigned short i_12 = 4; i_12 < 9; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            arr_49 [i_0] [i_2] [i_10] [i_10] [11U] [i_12 - 2] = arr_47 [i_10] [i_2] [i_10] [i_11] [(unsigned char)2];
                            arr_50 [i_0] [i_2] [i_10 - 1] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_12 + 3]))))) < (((((/* implicit */_Bool) arr_13 [i_0] [(signed char)7])) ? (-531724895) : (var_0)))));
                            var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_2] [i_10] [i_11])) : (((/* implicit */int) (unsigned short)59169)))))));
                            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_12 [i_12] [i_11] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_11] [i_10 + 1] [i_2])))))) : (var_7)));
                        }
                    } 
                } 
                arr_51 [i_0] [i_0] [i_2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)174))));
            }
            for (short i_13 = 3; i_13 < 11; i_13 += 2) /* same iter space */
            {
                arr_55 [i_13 - 2] [i_2] [i_2] [i_0] = var_9;
                arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_14] [i_15] [i_0] &= ((/* implicit */unsigned short) -531724883);
                            arr_63 [i_0] [i_2] [i_2] [(short)4] [i_2] [i_0] [i_15] &= ((/* implicit */unsigned short) ((unsigned int) 2296835809958952962ULL));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (short i_16 = 2; i_16 < 11; i_16 += 2) 
            {
                arr_68 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (455584988175732354ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_16] [i_16 - 2])))));
                arr_69 [i_0] = ((/* implicit */unsigned char) var_12);
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 2; i_18 < 9; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) min((16149908263750598656ULL), (((/* implicit */unsigned long long int) (short)32640))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_20 = 4; i_20 < 9; i_20 += 1) 
                        {
                            arr_81 [i_17] [1] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                            var_31 = ((/* implicit */int) var_5);
                        }
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            arr_86 [i_17] [9ULL] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13ULL)) || (((/* implicit */_Bool) arr_12 [i_17] [i_18] [i_19] [i_18]))));
                            arr_87 [i_17] [i_17] [i_18 + 2] [i_18 + 2] [i_21] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) == (2146959360U)))), (arr_34 [i_0] [i_17] [i_18] [(unsigned char)10] [i_19] [i_21])));
                        }
                        arr_88 [(short)3] [(short)3] [(short)3] [i_17] [i_19] = var_9;
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                arr_91 [i_17] [i_17] [i_22] = ((/* implicit */int) var_5);
                arr_92 [i_0] [i_17] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) | (((/* implicit */int) arr_1 [i_0]))));
            }
            for (int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                arr_97 [i_0] [i_17] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1277000959U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? (var_3) : (((/* implicit */int) min((arr_40 [i_17] [i_0]), (arr_83 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned char i_24 = 2; i_24 < 9; i_24 += 4) 
                {
                    arr_101 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)30455))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
                    var_32 = ((/* implicit */short) var_3);
                }
                for (short i_25 = 1; i_25 < 11; i_25 += 3) 
                {
                    var_33 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_8))))))));
                    var_34 = ((/* implicit */short) arr_84 [i_17] [i_17]);
                    arr_105 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_25 - 1])) ? (((/* implicit */int) var_1)) : (arr_2 [i_25 - 1]))));
                    arr_106 [i_17] [i_23] [i_25] = ((/* implicit */signed char) ((((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_23] [i_17] [i_23] [i_0]))))) ? (((((var_0) + (2147483647))) >> (((var_2) + (1182967292))))) : (((/* implicit */int) arr_44 [(unsigned char)9] [i_17] [i_17] [(unsigned char)9]))));
                }
            }
            for (unsigned short i_26 = 1; i_26 < 11; i_26 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_27 = 0; i_27 < 12; i_27 += 3) 
                {
                    arr_113 [i_0] [i_0] [i_0] [6U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_52 [i_0] [i_0] [i_26 - 1] [i_27])))))) ? ((-(min((((/* implicit */unsigned long long int) arr_0 [i_17])), (2296835809958952960ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (min((((/* implicit */unsigned int) var_11)), (4294967295U))) : (var_10)))) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (arr_45 [i_0] [i_17] [i_17] [i_26] [i_27] [i_27]) : (((/* implicit */int) (short)-9322)))) : (((((/* implicit */_Bool) (short)28361)) ? (531724891) : ((-(((/* implicit */int) var_8))))))));
                }
                for (int i_28 = 0; i_28 < 12; i_28 += 2) 
                {
                    var_36 = var_2;
                    arr_116 [i_0] [i_17] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25152)) ? (((/* implicit */int) arr_57 [i_0] [(short)7] [i_0] [i_0] [i_0] [(unsigned short)8])) : (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_4 [i_17] [i_17]))))))) ? (((16149908263750598680ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_28] [i_26 - 1] [i_26 - 1] [i_26 + 1]))))) : (((/* implicit */unsigned long long int) (~(-1974982911))))));
                }
                var_37 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_26 - 1] [i_26 + 1]))) : (507579181741966188ULL))));
            }
        }
    }
}
