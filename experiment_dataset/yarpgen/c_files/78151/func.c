/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78151
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 |= ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */long long int) 134217727)) : (503316480LL))))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_1))))) ? (var_9) : (var_9))) + (1221805233))) - (49)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_19 &= (~((-(0U))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            var_20 = (-(9137208034259078191LL));
                            arr_12 [i_4 - 2] [i_4] [i_3] = (-((-(1884612146U))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_16 [i_3] [0] = ((/* implicit */unsigned short) (-((+(17944029765304320LL)))));
                            var_21 &= ((/* implicit */unsigned short) arr_3 [i_1]);
                            var_22 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]);
                        }
                        for (int i_6 = 4; i_6 < 7; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_17 [1LL] [i_3] [i_6 - 1] [i_3] [i_6 - 1])) ? (((/* implicit */unsigned int) arr_11 [i_6] [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 - 1])) : (arr_17 [i_6] [i_3] [i_6 + 3] [i_3] [i_6 + 1])))));
                            arr_20 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) var_13);
                        }
                        arr_21 [i_3] [i_3] [4U] [i_2] = (-(var_11));
                    }
                    var_24 = ((/* implicit */unsigned int) (+(min((max((var_0), (var_9))), (((/* implicit */int) arr_3 [i_2]))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((arr_0 [i_2]), (arr_0 [i_0]))))))));
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : ((+(-5909476161934345470LL)))));
    }
    /* LoopSeq 4 */
    for (long long int i_7 = 1; i_7 < 8; i_7 += 2) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */unsigned int) (-(((arr_23 [i_7 + 2]) / (var_15)))));
        var_27 = ((/* implicit */long long int) min((var_27), (min((((/* implicit */long long int) 2025139493)), (503316480LL)))));
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 10; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                {
                    arr_30 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4168322168U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19))) : (503316480LL)));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        for (signed char i_11 = 2; i_11 < 8; i_11 += 4) 
                        {
                            {
                                var_28 = (~((-((~(var_5))))));
                                var_29 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_12)))) ? (var_8) : (var_5)))));
                                var_30 = ((/* implicit */unsigned int) (+(arr_27 [i_11] [i_8])));
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) max((arr_34 [8LL] [i_8] [8U] [(short)0] [(short)6] [i_8] [i_8 - 1]), (((((/* implicit */_Bool) var_6)) ? (var_17) : (var_5))))))));
                }
            } 
        } 
    }
    for (long long int i_12 = 1; i_12 < 8; i_12 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_13 = 3; i_13 < 8; i_13 += 1) 
        {
            var_32 = ((/* implicit */signed char) arr_35 [5LL] [i_12]);
            arr_39 [i_13 - 3] [i_13] [8] = ((/* implicit */unsigned long long int) arr_22 [i_12 + 2]);
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            arr_42 [i_14 + 1] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            var_33 = ((/* implicit */signed char) ((arr_32 [i_14 + 1] [i_14 - 2] [i_12 + 1] [i_12 + 3] [i_12 + 3] [i_12 + 1]) >= (((/* implicit */unsigned int) (-(var_17))))));
            arr_43 [i_14] [4ULL] = var_15;
        }
        for (long long int i_15 = 3; i_15 < 7; i_15 += 1) 
        {
            arr_46 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4194272U)) + (23ULL)))) ? (((/* implicit */unsigned int) (+(arr_40 [i_15 - 1] [i_15 + 1])))) : ((-(835255066U)))));
            /* LoopSeq 4 */
            for (unsigned short i_16 = 1; i_16 < 9; i_16 += 1) 
            {
                arr_50 [4U] [i_15] [0U] [i_16] |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(arr_32 [i_15 - 3] [i_15] [i_15] [(signed char)0] [i_15 + 2] [8ULL])))) : ((~((+(var_2)))))));
                /* LoopNest 2 */
                for (long long int i_17 = 4; i_17 < 10; i_17 += 4) 
                {
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)31592)) ? (((/* implicit */long long int) 34919579U)) : (-3092476852752940454LL)))));
                            arr_57 [i_15 + 1] [i_15] [(short)7] [i_15] [i_15] = var_12;
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_7)) ? (var_17) : (var_0)))))) ? ((+(-1514248450))) : (var_9)))));
                arr_58 [0] [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)81)), (4294967278U)));
            }
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                var_36 = (~(min((arr_36 [i_12 + 2]), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                arr_63 [i_12 + 1] [i_15] [5U] = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */long long int) 67108864U)) | (17944029765304320LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (long long int i_20 = 2; i_20 < 10; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        {
                            arr_70 [i_12 - 1] [i_15] [i_15] [i_20 - 2] [i_20 - 2] = ((/* implicit */short) var_7);
                            arr_71 [i_15] [i_19] [i_15] [(signed char)10] &= ((/* implicit */int) var_3);
                            var_37 = (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-90)), ((unsigned short)17203)))));
                        }
                    } 
                } 
                arr_72 [i_19] [i_15] = (+((+(var_9))));
                arr_73 [i_15] = ((/* implicit */short) (((~(((/* implicit */int) var_14)))) + ((+(arr_52 [i_15] [i_19] [i_15] [i_15])))));
            }
            for (unsigned int i_22 = 2; i_22 < 9; i_22 += 2) /* same iter space */
            {
                arr_77 [i_22] [i_22] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1590944642)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_13)))))))) : ((~(max((((/* implicit */long long int) var_6)), (arr_54 [i_22] [6U] [i_12] [i_12] [i_22])))))));
                /* LoopNest 2 */
                for (long long int i_23 = 2; i_23 < 10; i_23 += 1) 
                {
                    for (long long int i_24 = 1; i_24 < 10; i_24 += 1) 
                    {
                        {
                            arr_83 [i_15] [9] [i_15] [i_15] = ((/* implicit */short) (~(((arr_65 [i_15] [i_12] [i_12 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_12] [i_23] [i_15 + 4] [i_15])))))));
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            }
            for (unsigned int i_25 = 2; i_25 < 9; i_25 += 2) /* same iter space */
            {
                arr_86 [i_15] [i_12 - 1] [i_15] [i_12] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_62 [i_25] [i_25] [3U])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_25] [i_25 + 2] [i_25 - 1])))))));
                arr_87 [2ULL] [i_15] [i_12] = ((((((/* implicit */_Bool) arr_61 [i_15] [i_25 + 2] [i_15] [i_15])) ? (arr_75 [i_12]) : (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) arr_47 [i_15] [i_15 + 4] [6U] [i_15])));
            }
        }
        var_39 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_78 [i_12 + 3] [i_12] [i_12 + 2] [i_12 + 1] [10] [i_12]))))));
    }
    for (long long int i_26 = 1; i_26 < 8; i_26 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 4) /* same iter space */
        {
            var_40 = var_7;
            var_41 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_26 + 2]))));
            var_42 = ((/* implicit */long long int) max((((((/* implicit */_Bool) -1350250909)) ? (4730969746589435496ULL) : (((/* implicit */unsigned long long int) 34919579U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) -1184731135)) : (3092476852752940454LL))))));
        }
        for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 4) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_67 [i_26] [i_26] [10U] [i_28] [i_28]))));
            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_26 + 3] [3U] [4] [i_26 - 1] [i_26] [i_26]))) : (var_12)))) ? (((/* implicit */long long int) (-(arr_37 [i_28])))) : (var_15))))))));
            /* LoopSeq 1 */
            for (short i_29 = 0; i_29 < 11; i_29 += 4) 
            {
                arr_99 [i_26] [i_26] [i_26] [(signed char)3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_94 [i_26 - 1] [i_26 - 1])) ? (arr_66 [i_26 + 3]) : (arr_66 [i_26 + 3])))), (((((/* implicit */_Bool) arr_95 [i_26 - 1] [i_26 - 1] [i_26 + 1])) ? (((/* implicit */long long int) -1224615291)) : (-3092476852752940455LL)))));
                /* LoopNest 2 */
                for (unsigned int i_30 = 1; i_30 < 10; i_30 += 1) 
                {
                    for (short i_31 = 3; i_31 < 8; i_31 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */long long int) var_6);
                            arr_106 [i_26] [9ULL] [i_28] [i_29] [i_26] [5U] = ((/* implicit */int) arr_62 [7U] [i_28] [i_29]);
                            var_46 = ((/* implicit */short) arr_56 [i_26 + 3] [i_26] [i_26] [i_26 - 1] [i_26]);
                            arr_107 [i_26] [i_28] [i_29] [i_30] [i_31] = ((/* implicit */unsigned short) arr_48 [i_26]);
                        }
                    } 
                } 
            }
        }
        for (int i_32 = 0; i_32 < 11; i_32 += 4) 
        {
            arr_112 [i_26] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (arr_37 [i_32]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_26] [7LL] [i_32]))))))))));
            arr_113 [i_26] [1] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)3571)) : (((/* implicit */int) (signed char)27)))) : ((-(var_0)))))) >= (var_7)));
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (arr_84 [i_26])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_9)) : (var_4))) : (((/* implicit */unsigned int) arr_40 [i_26] [i_26 + 3]))))) ? (((((/* implicit */_Bool) arr_78 [i_26] [i_26] [i_26] [i_26 + 1] [i_26 + 2] [i_26 + 2])) ? (((/* implicit */int) arr_78 [1ULL] [i_26 + 3] [7LL] [i_26 + 2] [i_26 + 3] [i_26 - 1])) : (((/* implicit */int) arr_78 [i_26] [i_26] [i_26] [i_26 + 1] [i_26 + 1] [i_26 + 2])))) : (var_0)));
            /* LoopNest 2 */
            for (signed char i_33 = 0; i_33 < 11; i_33 += 4) 
            {
                for (int i_34 = 0; i_34 < 11; i_34 += 1) 
                {
                    {
                        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((arr_40 [i_26 + 1] [i_26 - 1]), (arr_40 [i_26 + 1] [i_26 + 2])))) : (var_2))))));
                        arr_118 [i_26] [4] [i_26] [i_34] = ((/* implicit */unsigned long long int) (-(var_1)));
                    }
                } 
            } 
        }
        arr_119 [i_26] [i_26 + 3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 3221342260U)) ? (((/* implicit */unsigned long long int) 4294967290U)) : (18446744073709551615ULL)))));
        arr_120 [i_26 + 3] [i_26] = max(((-(var_15))), (((((/* implicit */_Bool) arr_92 [i_26 + 1] [i_26])) ? (arr_92 [i_26 + 3] [i_26]) : (arr_92 [i_26 + 2] [i_26]))));
    }
    for (long long int i_35 = 1; i_35 < 8; i_35 += 2) /* same iter space */
    {
        arr_123 [i_35] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(arr_38 [i_35] [i_35 + 2] [6ULL])))) ? (var_12) : (((/* implicit */unsigned long long int) arr_37 [i_35 + 1]))))));
        arr_124 [i_35] = ((/* implicit */unsigned int) ((arr_122 [i_35]) == (max((var_3), (((/* implicit */long long int) arr_80 [(short)2] [(short)8] [(short)2]))))));
        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_89 [2LL])) : (((/* implicit */int) arr_89 [4LL]))))) ? ((+(((/* implicit */int) arr_89 [0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_35] [(unsigned short)10] [i_35 + 3] [i_35] [i_35]))))))))));
    }
    var_51 = ((/* implicit */long long int) var_11);
    var_52 = ((/* implicit */int) var_10);
}
