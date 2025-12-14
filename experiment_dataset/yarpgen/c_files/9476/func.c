/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9476
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (1350437906U)));
                var_17 ^= max((arr_3 [i_1 - 1]), (((/* implicit */signed char) ((_Bool) ((1142781137U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(var_7))))));
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)10452)) ? (3152186159U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_12))))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((var_12) ? (((/* implicit */unsigned int) var_13)) : (3152186150U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_7))))));
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned char) min(((-((-(-15))))), (((((((/* implicit */int) arr_8 [i_2])) + (2147483647))) << (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_8)))))));
            arr_11 [i_2] [(_Bool)1] [i_3] = ((/* implicit */short) arr_7 [i_2]);
            var_21 += ((/* implicit */signed char) ((max((322370540U), (2944529379U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2] [i_3]) == (arr_1 [i_2] [i_3])))))));
            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_16)))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_23 = var_12;
                        var_24 = ((/* implicit */int) (signed char)-32);
                        var_25 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (arr_10 [i_6] [i_4] [i_2])))) / (((/* implicit */int) arr_9 [i_2] [i_4])));
                        arr_21 [i_2] [i_2] = ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_6])));
                        var_26 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_2]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (long long int i_9 = 3; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_15))));
                            var_28 |= ((/* implicit */int) ((arr_28 [i_4] [i_2] [i_7] [i_9 - 2] [i_9] [i_9 - 1] [i_9]) == (arr_28 [i_4] [i_4] [i_4] [i_9 - 3] [i_9 - 3] [i_9 + 1] [(short)0])));
                            var_29 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_9 + 2] [i_4]))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_26 [i_2] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_2] [i_8])))) : (var_0)));
                            arr_29 [4] [i_8] [i_8] [i_4] [i_2] = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_2] [i_4])) ? (arr_26 [i_4] [i_2]) : (arr_26 [i_7] [i_4])));
            }
        }
        var_32 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (arr_27 [i_2] [14])))));
    }
    for (long long int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (long long int i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        arr_39 [i_10] [i_13] [i_13] [i_13] = ((/* implicit */int) (!(((((/* implicit */_Bool) 3972596752U)) || (((/* implicit */_Bool) arr_34 [i_11] [i_11]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_12 + 2])) ? (3972596756U) : (((/* implicit */unsigned int) arr_2 [i_12 + 2]))));
                            var_34 = ((/* implicit */_Bool) (-(3972596747U)));
                            arr_43 [i_10] [i_13] = ((/* implicit */short) ((((/* implicit */int) var_14)) != (arr_27 [i_13] [i_13])));
                        }
                        /* LoopSeq 4 */
                        for (int i_15 = 4; i_15 < 12; i_15 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_12 + 1] [i_13 - 1] [i_13 + 1] [i_15]))) * (((((/* implicit */_Bool) arr_38 [i_12] [(signed char)13])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) 3972596716U))));
                        }
                        for (int i_16 = 4; i_16 < 12; i_16 += 2) /* same iter space */
                        {
                            arr_48 [i_13 - 1] [i_16] [i_16] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_10] [i_12])) ? (var_4) : (var_10)))) > (((var_8) >> (((arr_30 [i_16]) - (3564605010U)))))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                            arr_49 [i_10] [i_11] [6LL] [i_13] [i_16 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_13] [i_11] [i_13] [i_16])) ? (((/* implicit */int) arr_12 [i_10] [i_11] [i_13])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10] [i_11] [(_Bool)1] [i_16 - 1]))) : ((+(2944529390U)))));
                        }
                        for (int i_17 = 4; i_17 < 12; i_17 += 2) /* same iter space */
                        {
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1142781140U)) ? (arr_50 [i_11] [i_17] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_17 + 1] [i_17] [i_17] [i_17] [i_11]))))))));
                            var_39 -= ((/* implicit */long long int) (~(1980029570)));
                            arr_52 [i_10] [i_11] [i_11] [i_11] [i_13] = ((/* implicit */int) ((unsigned short) arr_16 [i_10] [i_11] [i_12] [i_17 - 3]));
                        }
                        for (short i_18 = 2; i_18 < 12; i_18 += 3) 
                        {
                            var_40 -= ((/* implicit */short) ((322370549U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_18] [i_13] [i_12 - 1] [i_10] [i_10])))));
                            arr_57 [i_13] [i_13] = ((/* implicit */int) ((((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_12 + 2] [i_13 + 1] [i_13 - 1] [i_13])))));
                        }
                    }
                    for (signed char i_19 = 1; i_19 < 13; i_19 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_10])) : (2075060433)))) / (arr_34 [i_12 + 1] [i_19 - 1]))))))));
                        var_42 ^= ((/* implicit */short) var_10);
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) >= (var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_34 [i_10] [i_10])));
                    }
                    arr_60 [i_10] [i_11] [i_10] = ((/* implicit */int) var_1);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 13; i_20 += 2) 
        {
            for (signed char i_21 = 0; i_21 < 15; i_21 += 1) 
            {
                for (short i_22 = 0; i_22 < 15; i_22 += 2) 
                {
                    {
                        var_44 ^= ((/* implicit */short) ((int) ((((/* implicit */int) (signed char)-12)) & (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (long long int i_23 = 1; i_23 < 13; i_23 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_44 [i_22] [i_20] [i_23] [14LL] [(unsigned short)4])), (((arr_10 [i_10] [(_Bool)1] [i_23]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
                            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((arr_70 [i_10] [i_10] [i_21] [i_22]), (((/* implicit */unsigned int) -1268423733))))) ? (((var_2) >> (((((/* implicit */int) arr_41 [i_23] [i_22] [i_10] [i_20] [i_20 + 2] [i_10] [i_20 + 2])) - (47843))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_21] [i_20 - 2] [i_20])))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_24 = 4; i_24 < 14; i_24 += 1) 
        {
            for (long long int i_25 = 1; i_25 < 12; i_25 += 1) 
            {
                for (int i_26 = 0; i_26 < 15; i_26 += 2) 
                {
                    {
                        var_47 = ((unsigned char) min(((signed char)-1), ((signed char)-25)));
                        arr_78 [i_10] [i_24] [i_25] [i_24] [i_24] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_65 [i_25 - 1] [i_24 - 4] [i_24 - 3] [i_24 - 4])) ? (arr_58 [i_24 - 4] [i_24 - 4] [i_24 + 1]) : (arr_58 [i_24 - 1] [i_24 + 1] [i_24 - 1]))));
                        var_48 |= ((/* implicit */signed char) min((min((max((((/* implicit */long long int) arr_59 [i_10] [i_10] [i_10] [i_10] [i_10] [i_24])), (var_11))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (arr_56 [i_10] [i_10] [i_25 - 1])))))), (((/* implicit */long long int) (~(var_8))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_27 = 0; i_27 < 15; i_27 += 1) 
                        {
                            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((unsigned int) arr_80 [i_10] [i_24] [i_25 + 1] [i_10] [i_27])))));
                            var_50 ^= ((/* implicit */signed char) arr_63 [i_24] [i_24] [i_10]);
                            var_51 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_10] [i_10] [i_24] [i_10] [i_26] [i_27] [(unsigned short)4]))) > (var_2)))) <= (((/* implicit */int) ((3152186158U) <= (arr_55 [i_10] [i_24 - 1] [i_24 - 1] [(short)3]))))));
                        }
                        arr_83 [i_25] [i_25] [i_25] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) min((arr_32 [i_25] [i_26]), (((/* implicit */unsigned short) (signed char)7))))) + (((/* implicit */int) arr_61 [i_24 - 3] [i_24 - 2] [i_25 + 3])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_28 = 0; i_28 < 15; i_28 += 1) /* same iter space */
    {
        var_52 ^= ((int) -1268423733);
        /* LoopSeq 2 */
        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
        {
            arr_91 [i_28] [i_29 - 1] [i_29] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)104))));
            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_33 [i_28] [i_28] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_29] [0LL] [0ULL] [0LL] [0ULL]))) : (-3177567571700307462LL))))))));
        }
        for (int i_30 = 0; i_30 < 15; i_30 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 2; i_31 < 12; i_31 += 2) 
            {
                for (long long int i_32 = 0; i_32 < 15; i_32 += 1) 
                {
                    for (unsigned int i_33 = 2; i_33 < 14; i_33 += 1) 
                    {
                        {
                            arr_102 [i_30] [i_31 + 1] [i_30] = ((/* implicit */int) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (arr_92 [i_33 - 2] [i_30] [i_31 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            var_54 ^= (!(((/* implicit */_Bool) ((2075060433) - (((/* implicit */int) arr_90 [i_28] [13U] [i_32]))))));
                        }
                    } 
                } 
            } 
            arr_103 [(signed char)8] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_26 [i_28] [i_30]))));
        }
        /* LoopNest 3 */
        for (signed char i_34 = 4; i_34 < 13; i_34 += 1) 
        {
            for (unsigned short i_35 = 1; i_35 < 14; i_35 += 1) 
            {
                for (unsigned short i_36 = 0; i_36 < 15; i_36 += 4) 
                {
                    {
                        var_55 ^= ((((/* implicit */_Bool) arr_95 [i_36])) ? (((/* implicit */int) arr_95 [i_36])) : (((/* implicit */int) arr_95 [i_36])));
                        /* LoopSeq 4 */
                        for (unsigned char i_37 = 3; i_37 < 11; i_37 += 1) /* same iter space */
                        {
                            var_56 ^= ((/* implicit */signed char) (!((_Bool)0)));
                            arr_115 [i_37] [i_37] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_58 [i_36] [i_34] [i_35])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (short)13073)) : (((((/* implicit */_Bool) (unsigned short)48786)) ? (((/* implicit */int) (signed char)45)) : (2075060433)))));
                            var_57 ^= ((/* implicit */short) arr_17 [i_28] [i_34] [i_36] [i_37]);
                        }
                        for (unsigned char i_38 = 3; i_38 < 11; i_38 += 1) /* same iter space */
                        {
                            var_58 = ((/* implicit */signed char) var_3);
                            arr_118 [i_28] [i_34] [i_34] [i_35] [i_35] [i_36] [(short)4] = ((((arr_88 [i_38]) ? (((/* implicit */int) (signed char)-112)) : (922586802))) == (((/* implicit */int) arr_98 [i_36])));
                            var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -3744634912216732928LL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_59 [i_38] [i_38] [i_36] [i_35] [(unsigned char)5] [(unsigned char)5]))))))))));
                        }
                        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                        {
                            arr_121 [i_28] [i_34] [i_34] [i_39] = ((/* implicit */short) (unsigned char)175);
                            var_60 -= ((/* implicit */unsigned long long int) 2075060433);
                        }
                        for (short i_40 = 2; i_40 < 14; i_40 += 4) 
                        {
                            arr_125 [i_40] [12U] [i_35 - 1] [i_34] [i_28] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-13074)) ? (3114465976532588400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))))) >= (((/* implicit */unsigned long long int) arr_58 [i_34 - 3] [i_40 - 2] [i_35 - 1]))));
                            var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) ((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33699))))))));
                        }
                    }
                } 
            } 
        } 
        arr_126 [i_28] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_28] [i_28])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_32 [i_28] [i_28]))));
    }
    for (signed char i_41 = 2; i_41 < 14; i_41 += 2) 
    {
        arr_129 [i_41] [i_41] = ((/* implicit */short) ((max((((((/* implicit */_Bool) 1610612736)) ? (((/* implicit */long long int) arr_55 [i_41] [i_41] [i_41] [i_41])) : (var_0))), (((/* implicit */long long int) ((((/* implicit */int) (short)806)) / (((/* implicit */int) (short)-19655))))))) / (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) arr_84 [i_41 + 1])))))));
        arr_130 [i_41] |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_44 [i_41] [i_41] [i_41] [i_41] [i_41])), (var_10))))))) < (arr_27 [i_41] [i_41])));
    }
    var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_12)), (var_9))))));
}
