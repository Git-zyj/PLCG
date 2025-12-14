/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60993
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) (-(((var_5) ? (((/* implicit */int) (unsigned char)59)) : ((-(((/* implicit */int) var_4))))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (arr_2 [i_0]) : ((~(((/* implicit */int) var_0))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (3278852107U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((arr_5 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min(((~(((/* implicit */int) arr_3 [i_1] [i_1])))), (((var_5) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
        /* LoopSeq 1 */
        for (short i_2 = 4; i_2 < 17; i_2 += 1) 
        {
            arr_8 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) (-(var_3)));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2 - 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (arr_5 [i_2 - 1]) : (arr_5 [i_2 + 2])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)28)) + (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (min((arr_13 [i_1] [i_1] [i_1] [i_4 - 1]), (arr_13 [i_4] [i_2] [i_3] [i_4 - 1]))))))));
                    var_16 = (unsigned short)41444;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) var_5);
                        var_18 -= ((/* implicit */short) var_1);
                        var_19 = arr_0 [i_5 - 2];
                    }
                    for (short i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_1] [i_2] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6 - 2])), (2147483647)))) ? (36028797018963968ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_4] [i_3] [(short)5] [i_1]))))) ? (((unsigned int) arr_15 [i_3] [i_1])) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))))))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_5))));
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    arr_26 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        var_21 -= ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)35328)) : (((/* implicit */int) arr_12 [i_1] [i_3] [i_3] [i_1])))) ^ (((/* implicit */int) var_7))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 492464519U)) & (9223372036854775807LL)))) ? ((-(((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_8])))))) : (((/* implicit */int) arr_28 [i_1] [i_2] [i_2 - 1] [i_3] [i_3] [i_7] [i_8])));
                        var_23 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */short) 3101670487U);
                        arr_33 [i_2] [14U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)16))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */short) (-(((((arr_34 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2]) + (2147483647))) << (((323438603) - (323438603)))))));
                        var_26 = ((/* implicit */unsigned short) var_7);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_27 -= ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-62)) + (2147483647))) << (((((unsigned long long int) arr_5 [i_1])) - (6283605520843011927ULL)))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 1])) ? (arr_24 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2 - 4]) : (arr_24 [i_1] [i_1] [8ULL] [i_2 - 3] [i_2 + 2])))) ? (arr_24 [i_1] [i_2 - 1] [i_2 - 4] [i_2 - 1] [i_2 - 4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */int) (unsigned short)18728)) : (((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 1])))))));
                    }
                }
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) 1U))));
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
                {
                    var_30 *= ((/* implicit */long long int) var_5);
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_2 - 4] [15LL] [i_12] [i_12] [(short)2] [i_12] [i_12])) ? (((/* implicit */int) arr_28 [i_2 - 2] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) (short)32767))));
                    arr_43 [i_1] [i_2] [i_2] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (arr_2 [i_2 - 4]) : (arr_2 [i_2 - 2])));
                    var_32 &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65524))));
                }
                for (int i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) arr_39 [i_1] [i_2] [i_14]);
                        var_34 *= ((/* implicit */short) (_Bool)0);
                    }
                    arr_49 [i_1] [i_14] [i_2 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) (unsigned char)135);
                    var_35 &= ((((/* implicit */_Bool) 2147483647)) ? (1073709056) : (((((/* implicit */_Bool) 8030734019633969178LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_12] [i_14])))));
                }
                for (int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (0U)))) : (((var_6) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_17] [i_16])))))));
                        var_38 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-7)) + (2147483647))) << (((134217728U) - (134217728U)))));
                    }
                    arr_55 [i_1] [i_2] [i_2] [i_16] [i_12] = ((arr_38 [i_2 + 1]) ^ (var_9));
                }
                arr_56 [i_12] [i_2] [13U] [i_12] = (!(((((/* implicit */_Bool) arr_17 [i_2])) || (((/* implicit */_Bool) arr_35 [i_2])))));
                arr_57 [i_2] [i_2] [10ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_2 - 1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_54 [i_2 - 4] [i_2 - 3] [i_2 - 3])) : (((/* implicit */int) arr_54 [i_2 + 1] [i_2 + 2] [i_2 - 2]))));
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) arr_17 [i_1]))));
            }
        }
    }
    for (short i_18 = 3; i_18 < 22; i_18 += 4) 
    {
        arr_61 [i_18] = ((unsigned long long int) arr_59 [(_Bool)1]);
        /* LoopSeq 2 */
        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 2) 
        {
            var_40 = ((/* implicit */_Bool) max((var_40), ((!(((/* implicit */_Bool) (+((-(arr_2 [i_18]))))))))));
            var_41 = ((/* implicit */unsigned short) arr_62 [i_18 - 3] [i_18 - 1] [i_18 - 3]);
        }
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            var_42 = (i_20 % 2 == 0) ? (((/* implicit */long long int) (~(max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15551))) : (arr_62 [i_20] [i_20] [i_18]))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((arr_66 [i_20] [i_20]) - (2309563854U))))))))))) : (((/* implicit */long long int) (~(max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15551))) : (arr_62 [i_20] [i_20] [i_18]))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((arr_66 [i_20] [i_20]) - (2309563854U))) - (266948129U)))))))))));
            arr_67 [i_18 - 3] [i_20] [i_18] = ((/* implicit */unsigned long long int) arr_64 [i_18]);
            /* LoopSeq 3 */
            for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_22 = 1; i_22 < 21; i_22 += 3) 
                {
                    arr_76 [i_18] [i_18 + 1] [i_18] [i_18] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_22 - 1])) && (((/* implicit */_Bool) (unsigned short)43570))))), (var_0)))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_62 [i_18 + 1] [i_21] [i_22 - 1])))))));
                    var_43 = ((/* implicit */unsigned int) var_7);
                }
                var_44 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1715196242U)));
                arr_77 [i_20] [14U] [i_21] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-58)))) ? (((((/* implicit */_Bool) 3623155114U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30720))) : ((((_Bool)1) ? (2909001744U) : (1917042529U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113)))));
                arr_78 [i_20] [i_18] [i_18] [i_21] = ((/* implicit */signed char) arr_64 [i_21]);
            }
            for (long long int i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    arr_85 [i_24] [i_24] [i_20] [i_20] [i_20] [i_18 - 2] = var_8;
                    var_45 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_18] [i_23] [i_23] [i_18 + 2])) && (((/* implicit */_Bool) arr_72 [i_20] [i_23] [i_23] [i_18 - 1])))))) < (max((9223372036854775807LL), (((/* implicit */long long int) arr_73 [i_18 - 1] [i_23] [i_24] [i_24]))))));
                    var_46 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned char)139)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (signed char)-76)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_8))))));
                }
                for (unsigned int i_25 = 3; i_25 < 23; i_25 += 3) 
                {
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)29882)))), (((/* implicit */int) arr_70 [i_25 - 2] [i_20] [i_23] [i_25 + 1]))))) ? (((/* implicit */int) min(((unsigned char)11), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) max((arr_58 [i_18 - 2]), (((/* implicit */unsigned char) (signed char)95)))))));
                    var_48 *= var_4;
                    arr_89 [i_18] [i_18] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-943156122), (((((/* implicit */int) (signed char)41)) - (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_25 - 2] [i_20] [i_18])) ? (861338003U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) || (((/* implicit */_Bool) arr_72 [i_18] [i_23] [i_20] [i_25]))))))));
                    var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_2 [i_18]), (((/* implicit */int) arr_58 [i_18])))))));
                }
                for (long long int i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_27 = 0; i_27 < 24; i_27 += 3) /* same iter space */
                    {
                        arr_95 [i_18] [i_20] [i_23] [i_20] [i_27] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1036642733U)) ? (1152921470247108608LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967293U)))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_58 [i_18 - 1])) : (((/* implicit */int) arr_58 [i_18 + 2]))))));
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((((/* implicit */int) var_2)) + (2147483647))) >> (((/* implicit */int) arr_74 [i_27] [i_20] [3LL] [i_26])))), (((/* implicit */int) ((var_9) == (var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_90 [i_18 - 3] [i_18 - 3] [i_23] [i_26] [i_27] [i_20]), (((/* implicit */unsigned short) (unsigned char)18)))))) : (5238414899567965306LL)));
                        arr_96 [i_18] [(_Bool)1] [i_23] [i_23] [i_23] [(unsigned short)17] [i_20] = ((/* implicit */int) ((arr_66 [i_20] [i_20]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_18 - 1])))))));
                        var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (1470694446U))))))));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_88 [i_18])))) ? (arr_92 [i_20]) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5))))) * (((/* implicit */int) var_6)))))));
                    }
                    for (signed char i_28 = 0; i_28 < 24; i_28 += 3) /* same iter space */
                    {
                        arr_99 [i_20] = ((/* implicit */unsigned char) (unsigned short)32768);
                        var_53 = ((/* implicit */unsigned char) var_0);
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17562313279434617935ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12449))) - (4611404543450677248LL)))));
                    }
                    var_55 = (-(((/* implicit */int) (unsigned char)89)));
                }
                var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) * (0U)))) ? (((/* implicit */int) arr_90 [i_18] [i_23] [22U] [i_18 + 2] [i_18 + 2] [i_23])) : (((/* implicit */int) (short)-3)))))));
            }
            for (long long int i_29 = 0; i_29 < 24; i_29 += 2) 
            {
                var_57 &= ((/* implicit */unsigned char) min(((signed char)32), ((signed char)-86)));
                arr_102 [i_20] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1275629026)), (var_1)))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4294967295U)))))) >> (((int) (signed char)10))));
                /* LoopSeq 1 */
                for (long long int i_30 = 1; i_30 < 23; i_30 += 1) 
                {
                    arr_105 [i_18] [i_20] [i_20] = ((/* implicit */long long int) (-(((/* implicit */int) arr_84 [i_30 - 1] [i_20] [i_18] [i_30] [i_18 + 1] [i_18]))));
                    arr_106 [i_20] [i_29] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_90 [i_18] [i_18 - 1] [i_18] [i_18 - 1] [i_18 + 1] [i_20])))))) ? (((/* implicit */unsigned int) ((arr_2 [i_18 - 2]) | (arr_2 [i_18])))) : (((((/* implicit */_Bool) arr_69 [i_18] [i_18 - 2] [i_20])) ? (((/* implicit */unsigned int) arr_2 [i_18])) : (var_1)))));
                    arr_107 [i_20] = ((/* implicit */_Bool) var_0);
                }
            }
            arr_108 [i_18] [i_20] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_88 [i_18 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4784438041270975078LL)) ? (544302389U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23)))))) ? (((arr_82 [(short)11] [i_20] [(signed char)1] [i_20] [i_18 + 2] [i_18]) * (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_81 [(unsigned short)14] [i_20] [i_20])))));
        }
    }
    var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) var_2))));
    var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), (max((((((/* implicit */unsigned long long int) var_3)) ^ (2251799813685247ULL))), (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7307008528340360811ULL))))))))));
}
