/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62294
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)61993)), (0))) - (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_6))))))) ? ((-(max((((/* implicit */int) (signed char)35)), (2147483647))))) : (var_2)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_13 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_4 [i_1] [(signed char)10] [i_0]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [4ULL] [i_0 + 1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1])))))), (((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)3553)))) | (((arr_5 [i_1] [i_1] [(_Bool)1]) + (((/* implicit */int) arr_1 [i_0]))))))));
            /* LoopSeq 3 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (short)-9523)) * (((/* implicit */int) arr_8 [i_1])))) : (max((var_0), (((/* implicit */int) var_11))))))) ? (min((((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_2]) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_6))))), (((unsigned long long int) (signed char)-92)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 2] [i_2] [(_Bool)1]))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned long long int) (!((_Bool)0)));
                            var_16 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_2]);
                            var_17 = var_4;
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)167)) || (((/* implicit */_Bool) 0U))))), ((unsigned short)65535)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 2])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2 + 2])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (var_2)))))) ? (min((((/* implicit */long long int) (unsigned short)3552)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 0U)) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 2] [i_1] [i_0 + 1]))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned short) ((unsigned int) var_7));
                            var_21 = ((/* implicit */unsigned short) ((short) arr_15 [i_7] [i_7] [i_7 + 2] [i_7] [i_5] [i_5 + 1] [i_5 + 1]));
                            var_22 = ((/* implicit */int) ((((_Bool) arr_4 [i_0] [i_1] [i_7])) ? (((arr_19 [i_1] [i_1] [i_5] [i_1] [(short)3]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) : (((/* implicit */long long int) ((3145728U) | (arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]))))));
                            var_23 += ((/* implicit */signed char) ((unsigned short) arr_22 [i_7 + 1] [i_0 + 1] [i_5 - 1] [i_6] [(unsigned char)0] [i_5 + 2]));
                            var_24 = ((/* implicit */_Bool) ((unsigned char) arr_24 [(unsigned short)7] [i_1] [i_1] [i_5] [i_1] [i_1] [i_1]));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_5])))))) ? (((((/* implicit */_Bool) (unsigned short)42599)) ? (-3583877897481718285LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) : (((((/* implicit */long long int) -621994096)) / (var_9))))))));
                var_26 = ((/* implicit */unsigned int) ((arr_19 [i_0] [i_1] [i_0] [i_1] [i_0]) || (((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0]))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_5 + 2])) > (((/* implicit */int) arr_1 [i_5 + 2]))));
            }
            for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                var_28 = ((/* implicit */short) var_1);
                var_29 *= (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_1] [i_8] [i_1] [6ULL]))))));
            }
            var_30 = ((/* implicit */int) (!(((((/* implicit */int) ((unsigned char) arr_26 [i_0 + 1] [i_0] [i_0 + 1] [i_1]))) > (((arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) var_11))))))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) || (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)60), ((unsigned char)125))))) == (((((/* implicit */_Bool) (short)-2946)) ? (arr_10 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534)))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */int) var_6);
            var_33 = (!(((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_34 += ((/* implicit */unsigned char) max(((+(var_10))), (max((((/* implicit */int) (signed char)16)), (2147483647)))));
        var_35 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_24 [(_Bool)1] [i_10] [i_10] [i_10] [i_10] [i_10] [(_Bool)1])))) / (((arr_26 [i_10] [i_10] [i_10] [(_Bool)1]) - (var_10)))))), (((long long int) min((((/* implicit */short) (_Bool)1)), ((short)-11705))))));
        /* LoopSeq 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((short) min((((/* implicit */int) (signed char)-17)), ((+(((/* implicit */int) (unsigned short)65534))))))))));
            var_37 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((arr_9 [i_10] [i_10] [i_11]), (((/* implicit */unsigned char) arr_4 [i_10] [i_11] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_9 [i_10] [i_10] [i_11]))))) : (var_8))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_39 = ((/* implicit */int) var_6);
                var_40 = ((/* implicit */short) ((((/* implicit */int) (short)-32752)) < (((/* implicit */int) (_Bool)0))));
            }
            var_41 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) arr_25 [i_10] [i_10] [i_10] [i_10] [i_12] [i_12] [i_12]))), (((int) ((int) arr_5 [i_10] [i_12] [i_12])))));
        }
        for (unsigned char i_14 = 2; i_14 < 9; i_14 += 2) 
        {
            var_42 = ((/* implicit */unsigned char) (((((+(-28645940))) == (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_31 [i_10] [i_10])))))) ? (((((/* implicit */_Bool) ((int) arr_26 [(short)8] [i_10] [i_14] [i_14]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : ((+(247721353U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_27 [i_14] [i_14 + 1] [i_14 - 2] [i_14 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_14 - 2])))))))));
            var_43 = ((/* implicit */unsigned long long int) (unsigned short)2044);
            var_44 *= ((/* implicit */unsigned short) (+(min((((/* implicit */int) (unsigned char)198)), (2147483647)))));
            var_45 = ((/* implicit */unsigned char) ((unsigned short) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) max((var_0), (((/* implicit */int) arr_12 [i_14] [i_14 - 2] [i_14 - 2] [i_10] [i_14 - 1] [(unsigned char)10]))))))));
        }
    }
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        var_46 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)248)) ? (3145724U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        var_47 = max((max((((long long int) var_0)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)56))))))), (((/* implicit */long long int) ((int) (unsigned short)6945))));
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 19; i_16 += 2) 
    {
        var_48 = ((/* implicit */long long int) arr_46 [i_16] [(_Bool)1]);
        /* LoopSeq 4 */
        for (unsigned int i_17 = 1; i_17 < 20; i_17 += 2) 
        {
            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((-2147483647) - (-2147483621))) + (47)))))) : (arr_48 [i_16] [i_16 - 3])));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    {
                        var_50 = ((/* implicit */signed char) ((unsigned int) var_9));
                        var_51 = ((/* implicit */unsigned char) ((arr_46 [i_17 + 1] [i_16 - 1]) * (((/* implicit */unsigned long long int) arr_50 [i_16 + 1]))));
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-122)) ^ (var_2)));
                        var_53 = ((/* implicit */int) ((signed char) arr_51 [i_17] [i_16]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    {
                        var_54 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)252))));
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2147483647)))))) | (((arr_48 [i_16] [i_16]) >> (((-1782855497) + (1782855532)))))));
                        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_4))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    }
                } 
            } 
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_57 = ((/* implicit */_Bool) max((var_57), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26163))) % (var_8)))) || (((/* implicit */_Bool) arr_58 [i_16 - 2] [i_16] [i_16] [i_16 - 3]))))));
            var_58 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_16 - 3]))) ^ (var_8)));
            var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) ((arr_52 [i_16] [i_22] [i_16] [i_22]) >> (((arr_54 [i_16 - 3] [i_16 + 2] [i_16 + 2]) - (1973236484U))))))));
            /* LoopNest 2 */
            for (unsigned short i_23 = 1; i_23 < 19; i_23 += 1) 
            {
                for (unsigned char i_24 = 1; i_24 < 20; i_24 += 3) 
                {
                    {
                        var_60 = ((/* implicit */unsigned char) arr_65 [i_16 - 3] [i_22] [i_16 - 3]);
                        /* LoopSeq 3 */
                        for (unsigned short i_25 = 0; i_25 < 21; i_25 += 2) 
                        {
                            var_61 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                            var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) ((signed char) arr_50 [i_16 - 2])))));
                            var_63 = ((/* implicit */unsigned int) ((short) arr_53 [i_16 - 3] [i_22] [i_23] [i_24 + 1] [i_25] [i_25]));
                            var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (3848516079U) : (148679249U)));
                        }
                        for (unsigned short i_26 = 0; i_26 < 21; i_26 += 2) /* same iter space */
                        {
                            var_65 = ((/* implicit */signed char) -1782855483);
                            var_66 = ((/* implicit */unsigned long long int) ((signed char) 820370475));
                            var_67 = ((/* implicit */unsigned long long int) ((((arr_48 [i_23] [i_23]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39372)) ? (arr_57 [i_16] [12LL] [i_23 + 2] [i_24 - 1] [i_16]) : (((/* implicit */int) (_Bool)1)))))));
                            var_68 = ((signed char) (unsigned char)253);
                        }
                        for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) /* same iter space */
                        {
                            var_69 = (+(arr_54 [i_24 + 1] [i_22] [i_16]));
                            var_70 = ((/* implicit */short) ((((/* implicit */int) ((var_2) >= (((/* implicit */int) arr_59 [i_22] [i_23] [i_24]))))) << (((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_47 [(unsigned char)12] [i_22] [i_22]))) - (4294967255U)))));
                        }
                    }
                } 
            } 
        }
        for (int i_28 = 0; i_28 < 21; i_28 += 2) 
        {
            var_71 = ((/* implicit */unsigned char) max((var_71), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))));
            var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) - (arr_64 [i_16] [i_16] [i_16 - 2] [i_28] [i_28]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_66 [i_16] [i_28] [i_16] [i_28] [i_16 - 3]) < (((/* implicit */unsigned int) arr_76 [i_28])))))))))));
            var_73 = ((/* implicit */int) ((((/* implicit */_Bool) -1782855494)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3848516081U)));
        }
        for (int i_29 = 0; i_29 < 21; i_29 += 2) 
        {
            var_74 = ((/* implicit */_Bool) ((arr_45 [i_16 - 3]) ? (((/* implicit */int) arr_45 [i_16 - 3])) : (((/* implicit */int) arr_45 [i_16 + 2]))));
            var_75 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 446451217U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_49 [i_16] [i_16] [i_16])))));
        }
        var_76 = ((((/* implicit */_Bool) (short)32256)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)66)));
        /* LoopNest 2 */
        for (unsigned int i_30 = 0; i_30 < 21; i_30 += 2) 
        {
            for (unsigned int i_31 = 2; i_31 < 19; i_31 += 2) 
            {
                {
                    var_77 = ((/* implicit */_Bool) ((int) ((unsigned char) arr_70 [i_16] [i_16] [i_16 + 2] [i_16 + 2] [i_31])));
                    var_78 = ((/* implicit */unsigned int) (+(var_1)));
                    var_79 = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_68 [15] [15] [i_30] [i_30] [i_31])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_32 = 0; i_32 < 21; i_32 += 3) 
        {
            for (unsigned long long int i_33 = 0; i_33 < 21; i_33 += 4) 
            {
                {
                    var_80 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_59 [i_16] [i_16] [i_16 - 3])) >> (((((/* implicit */int) var_6)) - (6414))))));
                    var_81 -= ((/* implicit */unsigned long long int) ((short) arr_57 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 - 2]));
                    /* LoopNest 2 */
                    for (unsigned int i_34 = 0; i_34 < 21; i_34 += 4) 
                    {
                        for (unsigned char i_35 = 0; i_35 < 21; i_35 += 2) 
                        {
                            {
                                var_82 = ((/* implicit */unsigned char) max((var_82), (((/* implicit */unsigned char) ((unsigned int) arr_55 [i_16 - 2])))));
                                var_83 = ((/* implicit */long long int) max((var_83), (((/* implicit */long long int) (~(((/* implicit */int) (!(arr_59 [i_34] [i_34] [i_33])))))))));
                                var_84 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) 18446744073709551613ULL)));
                                var_85 = ((/* implicit */unsigned char) (-(arr_66 [i_32] [8ULL] [i_16 - 2] [i_33] [i_33])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_86 = ((/* implicit */long long int) ((short) ((short) max((((/* implicit */int) var_4)), (var_0)))));
    var_87 = ((/* implicit */unsigned long long int) var_3);
}
