/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88080
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) + (((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) < (((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [10ULL] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 65535LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 - 3] [i_2 - 1]))) ? (((((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1])) - (((/* implicit */int) (unsigned char)236)))) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_1 [i_2 - 1])), (3805667856U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1]))))))));
            }
            arr_8 [i_1] [i_2] = ((((((/* implicit */long long int) ((arr_7 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [(unsigned char)10])))))) / (arr_2 [i_1] [i_1]))) >> ((((+(((((/* implicit */int) (unsigned char)176)) - (((/* implicit */int) (unsigned char)19)))))) - (133))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((long long int) (-(((/* implicit */int) (unsigned char)3))))))))));
            arr_12 [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_4 - 1] [i_1 - 2])) > (((/* implicit */int) arr_6 [i_4 - 1] [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_1 - 2])) ? (2510334435U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 - 1] [i_1 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_1 - 3])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_24 |= ((/* implicit */_Bool) arr_0 [i_1 - 4] [i_5 - 1]);
            var_25 = ((/* implicit */int) var_6);
        }
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) (unsigned char)67));
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_26 = ((unsigned long long int) ((_Bool) arr_5 [i_6] [i_6]));
        var_27 = arr_16 [i_6] [(signed char)6];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                {
                    var_28 |= ((/* implicit */unsigned short) (unsigned char)253);
                    var_29 = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_8 + 1] [i_8] [i_8 + 2]))));
                }
            } 
        } 
        arr_25 [i_6] = ((/* implicit */long long int) arr_22 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) ((max((((274877906943LL) / (arr_20 [i_6]))), (((/* implicit */long long int) arr_14 [i_9 - 1] [i_9] [i_9 - 1])))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_17 [i_9 - 1]))))));
                        var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 0U)), (14845698463349629772ULL)));
                    }
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_38 [i_6] [i_6] [i_12] [i_10] [i_10] [i_12] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -810836698)) ? (((/* implicit */int) arr_0 [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_1 [i_9 - 1]))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_19 [i_9 - 1]) ^ (arr_19 [i_9 - 1])))) ? (12321949422967720023ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_9] [(short)9])) ? (((/* implicit */int) arr_14 [i_9 - 1] [i_9] [6LL])) : (((/* implicit */int) arr_14 [i_9 - 1] [i_9] [i_9])))))));
                    }
                    for (signed char i_13 = 3; i_13 < 12; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) (short)26717);
                        var_33 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_9 - 1] [i_13 + 3])) + (2147483647))) >> (((((/* implicit */int) arr_21 [i_9 - 1] [i_13 - 2])) + (5433)))))), ((~(arr_31 [i_9 - 1] [i_9] [i_10] [i_13 - 3])))));
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            var_34 -= ((/* implicit */long long int) (~(17)));
                            var_35 *= ((/* implicit */long long int) arr_4 [i_6]);
                            var_36 = ((/* implicit */signed char) ((arr_41 [i_10] [i_13 - 2] [(unsigned short)0]) < ((-(arr_41 [i_6] [i_10] [i_13 - 3])))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 13; i_15 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(arr_20 [i_6])))))) || (((_Bool) ((int) 274877906943LL)))));
                            arr_50 [i_9] [i_9] [i_9 - 1] [i_9] = ((((/* implicit */int) arr_32 [i_15] [i_15 + 2] [i_15] [6ULL] [i_15])) > ((-(((/* implicit */int) arr_32 [i_6] [i_15 - 1] [i_15 + 1] [i_15] [i_15])))));
                        }
                        for (short i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            arr_53 [i_6] [i_6] [i_9] [i_16] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8102))) > (242159441213399221ULL)))));
                            arr_54 [i_6] [i_9] [i_6] [13ULL] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_10]))));
                            var_38 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_16] [i_13] [6LL] [i_6]))) : (arr_31 [i_6] [i_9 - 1] [i_10] [i_13]))) * (12687560251297195010ULL)))));
                        }
                        var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_9] [i_9 - 1])), (((((/* implicit */_Bool) arr_0 [i_9] [i_9 - 1])) ? (((/* implicit */int) arr_0 [i_9] [i_9 - 1])) : (((/* implicit */int) arr_0 [i_6] [i_9 - 1]))))));
                    }
                    var_40 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_9 - 1] [i_9] [(unsigned short)2] [i_9] [i_9 - 1])) ? (11502928895776473933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9 - 1] [i_9] [7ULL] [i_9] [i_9 - 1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1])))));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned char) (-(((max((arr_4 [i_9]), (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9] [i_10] [i_17])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                        var_42 *= ((/* implicit */int) ((unsigned long long int) ((arr_23 [i_6] [i_6]) > (arr_23 [(short)0] [i_6]))));
                    }
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
                    {
                        var_43 -= ((((/* implicit */_Bool) -1LL)) ? (var_16) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_18] [i_9 - 1] [i_9 - 1] [(signed char)1] [i_9 - 1]))))));
                        var_44 = ((/* implicit */short) arr_1 [i_6]);
                    }
                    var_45 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_47 [i_9] [i_9] [i_9]))), ((-(max((8017832178366920611ULL), (((/* implicit */unsigned long long int) var_12))))))));
                }
            } 
        } 
    }
    for (long long int i_19 = 1; i_19 < 8; i_19 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((((/* implicit */_Bool) ((long long int) ((-62168216) / (((/* implicit */int) (unsigned char)1)))))) ? (max((((/* implicit */unsigned long long int) arr_29 [i_19 + 2])), (max((((/* implicit */unsigned long long int) arr_55 [i_20] [i_19 + 1] [i_19 + 1] [i_19] [i_19])), (0ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */short) (signed char)-36)), (arr_46 [14LL] [i_19] [i_19 + 2] [i_19])))))))));
            /* LoopNest 2 */
            for (signed char i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                for (long long int i_22 = 1; i_22 < 8; i_22 += 1) 
                {
                    {
                        var_47 -= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_27 [i_21]), (0ULL)))) || (((/* implicit */_Bool) (~(-8307466058150969504LL))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned long long int) arr_43 [i_19 + 1] [i_20] [i_21] [i_22] [i_22]);
                            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [(unsigned char)12] [i_19 + 1] [i_22])) ? (arr_47 [i_19] [i_19 + 1] [i_22]) : (arr_7 [13LL])))) ? (max((arr_7 [i_19]), (arr_7 [i_19 + 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)149)))))));
                            var_50 += ((/* implicit */unsigned long long int) -1);
                        }
                        for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
                        {
                            arr_74 [i_22] [i_20] [i_22] [i_20] [i_22] = ((/* implicit */unsigned long long int) (~((-((~(((/* implicit */int) (short)(-32767 - 1)))))))));
                            var_51 = ((/* implicit */long long int) ((signed char) arr_32 [i_20] [i_21] [i_20] [i_21] [i_22 + 1]));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 1) /* same iter space */
                        {
                            var_52 = ((/* implicit */unsigned char) -1599569088);
                            var_53 = ((/* implicit */signed char) arr_55 [i_19 - 1] [(unsigned short)1] [i_21] [i_22 + 2] [i_25]);
                        }
                        arr_77 [i_22] [i_21] [i_21] [9ULL] [i_22] [(signed char)4] = ((/* implicit */unsigned long long int) -7);
                        /* LoopSeq 3 */
                        for (unsigned int i_26 = 1; i_26 < 9; i_26 += 4) 
                        {
                            var_54 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32250)) | (((/* implicit */int) arr_28 [i_22]))))) > (((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_14))))));
                            var_55 = ((/* implicit */unsigned char) max((max((((unsigned long long int) arr_26 [i_20] [i_22 + 1])), (((0ULL) | (((/* implicit */unsigned long long int) -8307466058150969504LL)))))), (((/* implicit */unsigned long long int) 1048575))));
                        }
                        for (unsigned int i_27 = 1; i_27 < 8; i_27 += 4) 
                        {
                            var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) var_6))));
                            var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) (+(arr_64 [i_20]))))));
                        }
                        for (signed char i_28 = 2; i_28 < 6; i_28 += 3) 
                        {
                            var_58 = ((/* implicit */long long int) (-(((max((arr_7 [i_28]), (67108832U))) >> (((((((/* implicit */_Bool) (short)-32251)) ? (-65535LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32280))))) + (65552LL)))))));
                            arr_86 [i_22] = ((/* implicit */int) max(((~(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((arr_63 [i_19] [i_19]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)115)) - (((/* implicit */int) arr_3 [i_19] [i_28])))))))));
                            var_59 = ((/* implicit */signed char) max((18446744073709551605ULL), (((/* implicit */unsigned long long int) max((arr_39 [i_19] [8U] [i_19 - 1] [i_21] [i_22 + 2] [i_28 + 2]), (arr_39 [(unsigned short)13] [i_20] [i_19 + 1] [(_Bool)1] [i_22 + 1] [i_28 - 1]))))));
                        }
                        var_60 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
            var_61 = ((/* implicit */unsigned long long int) arr_65 [i_20] [i_19 - 1] [i_19 + 2] [i_19]);
            var_62 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_19 + 2] [i_19 + 2])) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_19 + 2] [i_20])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_19 + 2] [i_20])) || (((/* implicit */_Bool) arr_6 [i_19 + 2] [i_20]))))) : (((/* implicit */int) max((arr_6 [i_19 + 2] [i_20]), (arr_6 [i_19 + 2] [i_20]))))));
            /* LoopSeq 2 */
            for (short i_29 = 0; i_29 < 10; i_29 += 3) 
            {
                var_63 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_63 [i_19 + 2] [i_19 + 2])) ? (arr_63 [i_19 + 2] [i_19 + 2]) : (13642916903472697177ULL))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_20]))) % (arr_63 [i_19 + 2] [i_19 + 2])))));
                var_64 *= ((/* implicit */short) var_14);
            }
            for (long long int i_30 = 0; i_30 < 10; i_30 += 2) 
            {
                var_65 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_20] [i_20] [i_30])) ? (639612268761978056LL) : (arr_56 [i_20] [i_20] [i_20])))) ? (((/* implicit */long long int) max((4294967295U), (536870911U)))) : ((-(639612268761978056LL)))));
                arr_93 [i_19] [i_20] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_20] [i_30] [i_30] [i_19])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2U] [i_20])) ? (18446744073709551615ULL) : (0ULL))))));
            }
        }
        arr_94 [i_19 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_19] [i_19] [i_19])) ? ((+(((/* implicit */int) arr_62 [i_19])))) : (((/* implicit */int) arr_58 [(_Bool)1] [i_19 - 1] [10] [i_19] [i_19 - 1]))))) - (((((arr_27 [i_19 - 1]) % (5723482110929637019ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_19 + 1])))))));
        var_66 -= ((/* implicit */unsigned int) (-(arr_92 [i_19 + 1] [i_19 + 1] [(signed char)0])));
        var_67 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (18446744073709551601ULL))))) > (((/* implicit */unsigned long long int) (+(((unsigned int) 1048592)))))));
        var_68 = 2093056ULL;
    }
    var_69 = ((/* implicit */long long int) var_17);
    var_70 = ((/* implicit */long long int) var_9);
}
