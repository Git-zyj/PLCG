/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68641
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
    var_17 = ((/* implicit */short) (unsigned short)0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = (unsigned short)5325;
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((/* implicit */int) arr_2 [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) var_2);
                            var_19 = ((/* implicit */short) arr_0 [i_0]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_15 [i_1] [i_5] [i_5] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) 4985805270300251308LL));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned char)255)))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) ((4131167722U) << (((((/* implicit */int) (unsigned short)65535)) - (65535)))));
                            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */short) var_13);
                        }
                        arr_22 [i_1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) + ((~(18446744073709551615ULL)))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_1])) <= (((/* implicit */int) (unsigned short)1024)))) ? (((/* implicit */unsigned long long int) 18700112)) : (4398012956672ULL)));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                            arr_27 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_7] [i_1] [i_1] [i_1]))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_3 [i_0] [i_2]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_30 [17] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_0]))));
                            arr_31 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((2ULL) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)1839))));
                            arr_32 [i_8] [i_3] [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(arr_19 [i_0] [i_0])));
                            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) < (32764LL)))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(arr_34 [10U] [i_9 + 1] [10U]))))));
                            arr_35 [i_1] [i_3] [(short)20] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2566857510231435348ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) arr_16 [i_9 + 2] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_0])) : (((/* implicit */int) arr_9 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9]))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) ^ (((((/* implicit */_Bool) 181454474U)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3] [i_9 + 2])))))));
                            arr_36 [4LL] [4LL] [i_1] = ((/* implicit */long long int) ((((2305280059260272640LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1024))))) ? (((/* implicit */int) arr_4 [i_9 + 1] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_3 [i_9] [i_2]))));
                            arr_37 [i_1] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            arr_42 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                            arr_43 [i_1] [i_1] [i_2] [i_10] [i_10] = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_10))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_48 [i_1] [(signed char)5] [i_2] [(signed char)5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1839)) ? ((-(arr_34 [i_0] [0LL] [i_1]))) : (((arr_44 [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_12)))));
                            arr_49 [i_0] [i_1] [i_1] [i_2] [(short)10] [i_12] = var_16;
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_16))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) % (6753302373414911007ULL)))) ? (arr_40 [i_2] [i_1] [i_2] [i_12] [i_10]) : ((((_Bool)0) ? (((/* implicit */int) var_2)) : (var_15))))))));
                            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_10] [i_12])) : (1737406044))))));
                        }
                        for (short i_13 = 1; i_13 < 21; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (((long long int) arr_18 [i_13] [i_0] [i_2] [i_2] [(unsigned char)19] [13ULL] [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) ^ (min((((/* implicit */unsigned int) (short)-27968)), (4131167722U)))))));
                            var_31 *= ((/* implicit */signed char) ((unsigned short) ((arr_40 [i_10] [i_10] [i_2] [i_0] [i_0]) ^ (((/* implicit */int) arr_28 [(unsigned char)6] [i_10] [i_2] [i_1] [(unsigned char)6])))));
                            arr_52 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)7424)) && (((/* implicit */_Bool) (signed char)71))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 1; i_14 < 23; i_14 += 2) 
                        {
                            arr_56 [12U] [i_1] [i_1] [i_2] [i_10] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)38);
                            arr_57 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) 1159222627);
                            arr_58 [i_1] [i_1] [i_1] [i_10] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_1] [i_14 - 1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_19 [i_2] [i_2]))))));
                        }
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((arr_41 [i_0] [i_0] [i_0] [i_0] [i_10]) <= (min((arr_17 [i_10] [i_2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(arr_28 [i_0] [i_1] [i_2] [i_2] [(unsigned short)14])))))))))));
                        arr_59 [i_10] [i_1] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)7977))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (min((((((/* implicit */_Bool) 8897156745069803682ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) : (11255095814271881562ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(arr_28 [i_0] [i_1] [i_10] [i_10] [(unsigned char)14])))) : (((/* implicit */int) var_1)))))))));
                    }
                    arr_60 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)0)) || ((!(arr_14 [i_0] [i_0] [i_0] [i_1] [i_1]))))) ? ((+((~(((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 720658029)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5784))) : (18446744073709551594ULL)))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) -6487399429877596096LL)))))))));
                    /* LoopSeq 4 */
                    for (short i_15 = 3; i_15 < 20; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            arr_65 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_15] [i_16])) << (((arr_11 [i_0] [i_2] [i_0] [i_0]) - (7161351114581958567ULL)))))))))));
                            var_34 -= ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                            arr_66 [i_0] [i_1] [i_0] [i_1] [i_16] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((11693441700294640609ULL) >> (((/* implicit */int) var_8)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11))))))), (var_13)));
                            arr_67 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */int) (short)2044)) : (((/* implicit */int) var_14))))) & (((((arr_11 [i_16] [i_15] [i_2] [i_1]) - (var_0))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))))));
                            var_35 = ((/* implicit */unsigned char) 8388604LL);
                        }
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-2147483627)))) ? (((/* implicit */int) (signed char)116)) : (31)));
                        arr_68 [i_1] [i_15] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_40 [i_0] [i_1] [i_1] [i_2] [i_15]);
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_18 = 3; i_18 < 20; i_18 += 1) 
                        {
                            arr_75 [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8851)) != (((/* implicit */int) (signed char)-1))))) : (((/* implicit */int) arr_28 [i_17] [i_18 - 3] [i_18 - 1] [i_17] [i_17]))));
                            var_37 *= var_3;
                        }
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
                        {
                            arr_78 [i_17] [i_17] [i_1] [i_17] = ((/* implicit */unsigned char) 8388612LL);
                            arr_79 [i_0] [i_17] [i_17] [i_17] [i_17] [i_19] &= ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) (unsigned char)0)));
                        }
                        for (short i_20 = 2; i_20 < 23; i_20 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (_Bool)0))));
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8851)) + (((/* implicit */int) (signed char)106)))))));
                            arr_82 [i_1] [i_0] [i_2] [i_1] [i_1] = var_1;
                        }
                        for (short i_21 = 2; i_21 < 23; i_21 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_16))))))));
                            var_41 &= ((/* implicit */unsigned char) ((arr_44 [i_2] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_17] [i_21] [i_1]))));
                            var_42 |= ((/* implicit */_Bool) var_10);
                        }
                        var_43 = ((/* implicit */unsigned char) var_3);
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_17] [i_2] [i_0]))) : (((((/* implicit */_Bool) 4131167722U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 3; i_22 < 23; i_22 += 1) 
                        {
                            arr_88 [i_0] [i_1] [i_1] [i_0] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-120)) + (2147483647))) >> (((arr_8 [i_17] [i_17]) - (2461506746U)))))) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (-8388604LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) : (var_10)));
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-5334)) : (((/* implicit */int) arr_24 [i_2] [i_17] [i_2] [i_1] [i_0])))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) (short)25329))) - (25329))))))));
                        }
                        for (long long int i_23 = 3; i_23 < 22; i_23 += 1) 
                        {
                            var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_51 [i_0] [i_1] [i_2] [i_1] [(short)10] [i_23]))));
                            var_47 = ((/* implicit */long long int) arr_54 [i_23] [i_17] [i_17] [i_1] [i_0]);
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [i_2] [i_2] [12] [i_23] [i_23 + 2])) ? (((unsigned long long int) arr_5 [i_23] [i_2] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_23 - 2] [i_23] [i_23 - 3] [i_23 - 3] [i_23])))));
                        }
                    }
                    for (short i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
                    {
                        var_49 *= ((/* implicit */int) var_14);
                        arr_95 [i_0] [i_1] [i_1] [i_24] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-117))));
                        arr_96 [(signed char)10] [i_1] [i_2] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) (unsigned short)14392)) : (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_24]))));
                    }
                    /* vectorizable */
                    for (short i_25 = 0; i_25 < 24; i_25 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_25] [i_2])) ? (arr_19 [i_2] [i_2]) : (arr_91 [i_1])));
                        arr_100 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_25] [i_2] [i_1] [i_0] [i_0])) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_25])) - (13828)))));
                        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (-((~(var_16))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 1; i_26 < 23; i_26 += 1) 
                        {
                            arr_103 [i_0] [i_0] [i_2] [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((arr_71 [i_1]) - (1210395069680007808ULL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((((arr_71 [i_1]) - (1210395069680007808ULL))) - (15893730023312003112ULL))))));
                            arr_104 [i_1] [i_25] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_12);
                            arr_105 [14] [i_25] [i_2] [i_1] [14] [14] &= ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                        }
                    }
                }
            } 
        } 
    } 
}
