/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6859
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_2] [i_1 + 2]))) ? (max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_0 - 1] [i_0] [i_0] [i_0])))), (arr_0 [i_0 - 1] [i_1]))) : (((/* implicit */int) (unsigned char)100))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [(unsigned short)8] [i_3] [i_3] [i_3] [i_0] [(unsigned char)4] |= ((/* implicit */unsigned short) var_16);
                        var_19 = ((/* implicit */short) max((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) ((int) (unsigned short)9131)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_15 [(unsigned short)15] [i_2] [(unsigned short)15] [i_4] = max((((/* implicit */int) arr_3 [(unsigned short)0] [(unsigned short)0] [i_2])), ((-(((/* implicit */int) arr_12 [i_0] [i_2] [i_5])))));
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)9146))));
                                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_5 + 2] [i_2] [i_2 - 1] [i_0 - 1] [i_2] [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((unsigned int) arr_17 [i_6]));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6] [i_7] [i_8])) && (((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [16ULL])) || (arr_13 [i_6] [7] [i_7] [i_8] [i_8])))));
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                    {
                        arr_28 [i_6] [i_7] [(unsigned char)14] = ((/* implicit */short) (-(arr_17 [i_8])));
                        var_25 = var_3;
                        arr_29 [(short)6] [i_8] [i_8] [i_7] [i_6] = ((/* implicit */unsigned int) (!((_Bool)1)));
                    }
                    for (short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned char) arr_32 [i_11 - 4] [i_11 - 4] [i_8] [i_10] [i_11 - 4])))));
                            arr_34 [i_6] [i_7] [i_8] [i_10] [(unsigned char)11] = ((/* implicit */unsigned int) (unsigned short)56380);
                        }
                        arr_35 [i_6] [i_7] = ((int) arr_8 [i_6] [i_7] [i_7]);
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned short) ((unsigned char) arr_11 [2U] [i_7] [(unsigned char)0] [i_10]))))));
                    }
                    for (short i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_28 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [4LL] [i_7] [i_7] [i_7] [i_7]))));
                            arr_41 [i_6] [i_7] [i_8] [i_7] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) arr_18 [i_13]));
                        }
                        for (short i_14 = 2; i_14 < 13; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (short)-21497)) && (((/* implicit */_Bool) 200577648))))));
                            arr_45 [i_7] [i_8] [i_8] [i_12] [15] = ((/* implicit */int) arr_13 [i_6] [i_7] [i_8] [i_12] [i_8]);
                            arr_46 [i_6] [i_6] [(unsigned char)14] [9] [i_14 - 2] = ((/* implicit */_Bool) arr_22 [i_6] [i_7]);
                        }
                        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (unsigned char)100);
                            var_31 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_16 [i_7])))) == ((-(((/* implicit */int) (unsigned short)56386))))));
                            arr_50 [i_6] [i_7] [9U] [9U] [3ULL] [9U] = ((/* implicit */short) ((2147483647) / (((/* implicit */int) (unsigned char)139))));
                            arr_51 [12U] [i_7] [(unsigned short)3] [i_12] [i_7] = ((/* implicit */short) (unsigned char)145);
                        }
                        var_32 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_6] [i_6] [i_7] [i_8] [i_12]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            {
                                arr_58 [i_17] [i_17] [i_17] [10U] [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_55 [i_6] [i_7] [i_8] [i_16] [i_17])) && (((/* implicit */_Bool) (signed char)118)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                var_33 |= ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                                arr_59 [i_6] [i_7] [i_8] [i_16] [i_17] = ((/* implicit */unsigned short) ((unsigned int) var_16));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned short) (+(arr_37 [i_6] [i_7] [(unsigned short)1] [12ULL])));
                        var_35 = ((/* implicit */unsigned long long int) ((arr_57 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (2147483647) : (((/* implicit */int) arr_57 [i_6] [i_6] [i_7] [i_8] [i_18]))));
                        arr_64 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((_Bool) arr_48 [i_8] [i_8] [3ULL] [i_18] [i_7] [(unsigned short)4]));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 2; i_21 < 14; i_21 += 1) 
                    {
                        for (int i_22 = 2; i_22 < 13; i_22 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_6] [i_6] [12ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
                                var_37 = ((/* implicit */unsigned int) ((unsigned char) arr_54 [i_6] [i_6] [i_19] [i_21 - 2] [i_22 + 3] [i_6]));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_23 = 2; i_23 < 12; i_23 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_24 = 0; i_24 < 16; i_24 += 1) 
                        {
                            arr_81 [7U] [i_19] [i_20] [i_24] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_6] [(_Bool)1] [i_20] [i_23] [i_24]))))) >= (((/* implicit */int) var_6))));
                            var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (arr_17 [i_6]) : (arr_17 [i_6])));
                            arr_82 [i_6] [i_6] [i_19] [i_24] [3] [i_23 + 2] [i_24] = ((/* implicit */unsigned long long int) arr_22 [7] [i_19]);
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)56391)) < (((/* implicit */int) var_2))))) : (((/* implicit */int) (unsigned short)9125)))))));
                            arr_83 [i_19] [8] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_47 [i_6] [i_6] [i_6] [i_6] [15LL] [i_6])))) ? (arr_52 [i_23 - 2] [i_23 + 4] [(short)15] [i_23]) : (((/* implicit */unsigned long long int) arr_43 [i_23] [i_23 - 1] [i_23]))));
                        }
                        for (unsigned int i_25 = 0; i_25 < 16; i_25 += 1) 
                        {
                            arr_86 [i_19] [i_19] [i_19] [i_20] [i_23] [i_25] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_23 + 2]))));
                            arr_87 [i_25] [i_25] [i_25] = ((/* implicit */signed char) var_3);
                            arr_88 [i_25] [i_19] [i_20] [i_23] [i_25] = ((/* implicit */short) ((unsigned int) arr_84 [i_25] [i_19] [i_25] [i_20] [i_23 - 2] [i_25]));
                            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) 2668189255U))));
                            var_41 = ((/* implicit */signed char) ((short) arr_39 [i_6] [i_19] [i_23 - 1] [i_23] [i_6]));
                        }
                        var_42 = ((((/* implicit */_Bool) arr_11 [(short)8] [(short)8] [i_23] [i_19])) ? (((134217727LL) / (((/* implicit */long long int) ((/* implicit */int) arr_63 [(_Bool)1] [(signed char)11] [(unsigned short)0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -752322156155469195LL)) ? (((/* implicit */int) arr_10 [i_6] [i_19] [14] [(short)18] [i_23] [14])) : (var_14)))));
                    }
                    for (unsigned int i_26 = 1; i_26 < 15; i_26 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
                        {
                            arr_94 [i_27] [i_26] [i_26] [i_20] [i_26] [i_6] = ((/* implicit */long long int) (+(((unsigned int) arr_25 [i_6] [i_20]))));
                            var_43 = ((/* implicit */long long int) arr_8 [1ULL] [i_19] [i_6]);
                            var_44 = (!(var_7));
                            arr_95 [i_27] [i_26] [i_26] [i_26] = arr_72 [i_6] [i_6] [i_20] [(unsigned char)1] [(unsigned char)1];
                            var_45 = var_15;
                        }
                        var_46 = ((/* implicit */unsigned short) var_14);
                        var_47 = ((/* implicit */_Bool) arr_78 [i_6] [i_6]);
                    }
                    for (unsigned int i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2147483639))));
                        var_49 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_25 [(short)11] [i_28])) : (arr_36 [i_6] [i_19] [(unsigned char)15] [i_6])));
                        /* LoopSeq 2 */
                        for (unsigned short i_29 = 0; i_29 < 16; i_29 += 1) 
                        {
                            arr_100 [(unsigned short)15] [i_28] [i_28] [i_28] [i_29] = ((/* implicit */signed char) ((unsigned char) arr_70 [i_6]));
                            var_50 = ((/* implicit */unsigned short) (~(arr_42 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
                            arr_101 [i_28] [i_29] [i_28] [i_20] [i_19] [i_6] [i_28] = ((/* implicit */short) (+(((/* implicit */int) var_13))));
                        }
                        for (unsigned short i_30 = 0; i_30 < 16; i_30 += 3) 
                        {
                            var_51 = ((/* implicit */_Bool) min((var_51), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)104))) < ((~(1048575LL)))))));
                            arr_105 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_28] = ((((/* implicit */_Bool) var_15)) ? (2147483647) : ((~(((/* implicit */int) arr_65 [i_6] [i_20])))));
                            arr_106 [i_20] [i_19] [i_20] [i_19] [i_28] [i_30] = arr_38 [5ULL] [i_19];
                            arr_107 [i_6] [i_28] [i_6] [i_28] [i_28] = ((/* implicit */unsigned long long int) var_4);
                            var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                        }
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? ((~(-1749947403416683834LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_97 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                    }
                    for (unsigned char i_31 = 0; i_31 < 16; i_31 += 3) 
                    {
                        arr_110 [i_6] [i_19] [i_20] [i_20] = ((/* implicit */int) (unsigned char)209);
                        /* LoopSeq 2 */
                        for (unsigned int i_32 = 0; i_32 < 16; i_32 += 3) 
                        {
                            var_54 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_114 [i_32] [i_32] [(_Bool)1] [i_32] [i_32]))));
                            arr_115 [i_6] [i_19] [i_6] [(unsigned short)15] [i_31] [i_32] = ((/* implicit */long long int) var_2);
                        }
                        for (unsigned short i_33 = 0; i_33 < 16; i_33 += 3) 
                        {
                            var_55 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [15] [i_31] [i_20] [i_6] [i_6])))))));
                            var_56 = ((/* implicit */unsigned short) (+(1174877391U)));
                            arr_118 [i_6] [i_6] [i_6] = (+(1552135734));
                        }
                        var_57 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_84 [i_19] [i_19] [i_20] [i_31] [i_31] [i_19]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_34 = 0; i_34 < 16; i_34 += 1) 
                    {
                        arr_121 [i_6] [i_20] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)113))))) ? (((/* implicit */int) ((unsigned short) 1790183021))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [2ULL] [i_19] [i_19])))))));
                        var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) ((_Bool) arr_65 [i_19] [i_34])))));
                        var_59 = ((/* implicit */int) ((long long int) (unsigned short)26));
                        var_60 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1424888506)))))));
                        var_61 = ((/* implicit */unsigned short) (+(arr_71 [(_Bool)1] [i_19] [i_19] [i_19])));
                    }
                    arr_122 [i_6] [i_19] = ((/* implicit */signed char) var_15);
                    var_62 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_80 [i_19] [i_19] [i_19] [i_19] [1U])) | (((/* implicit */int) arr_63 [i_6] [i_19] [i_20]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            for (unsigned short i_37 = 0; i_37 < 10; i_37 += 2) 
            {
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    {
                        var_63 = ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_108 [i_37])) && (((/* implicit */_Bool) (unsigned char)219)))))) : (min((16829857620083938374ULL), (((/* implicit */unsigned long long int) (unsigned short)9149))))));
                        var_64 = ((/* implicit */unsigned char) (!(var_7)));
                        var_65 = ((short) min(((-(arr_30 [i_38] [i_38] [i_36] [i_36] [i_35]))), ((+(((/* implicit */int) (unsigned short)65535))))));
                        var_66 = ((/* implicit */signed char) var_15);
                    }
                } 
            } 
        } 
        arr_136 [i_35] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((signed char) (_Bool)1)))))));
        var_67 = (-(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)59)) > (((/* implicit */int) arr_134 [i_35] [(unsigned short)0] [0LL] [i_35] [i_35]))))), (max((arr_67 [i_35] [0U]), ((signed char)-79)))))));
    }
    var_68 = ((/* implicit */short) (+((~(((/* implicit */int) ((_Bool) var_1)))))));
}
