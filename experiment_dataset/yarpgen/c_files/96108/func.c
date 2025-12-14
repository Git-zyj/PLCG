/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96108
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
    var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (((-(var_12))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) var_5)))))))), (var_7)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0]))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_2)))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (arr_0 [i_0 - 1] [i_0])));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */short) (((-(((/* implicit */int) arr_5 [i_1])))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75)))))));
            var_17 = ((/* implicit */_Bool) (signed char)98);
        }
    }
    for (int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_18 |= ((/* implicit */signed char) (((!(arr_9 [i_2 - 1] [i_2]))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2])) != (((/* implicit */int) (signed char)-90))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)65535)))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))))) << (((((/* implicit */_Bool) (+(arr_12 [i_3] [i_4 + 1])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min(((short)-11296), (((/* implicit */short) (signed char)-76)))))))));
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-75)) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-90)) * (((/* implicit */int) (signed char)75)))))));
                        arr_22 [i_2 - 2] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)52824)) ? (((/* implicit */int) (short)21986)) : (((/* implicit */int) (unsigned char)65))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_15 [i_6] [i_5] [18] [i_3])) : (((/* implicit */int) var_4))))))));
                        var_22 = ((/* implicit */unsigned char) (short)-21990);
                        var_23 += ((/* implicit */short) ((arr_12 [i_2] [i_3]) != (5964745375577902287ULL)));
                    }
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10057)))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_2 + 2])) ? (((/* implicit */int) arr_20 [i_3] [5LL] [i_4] [i_4] [i_4 + 2] [(short)19] [i_2 - 2])) : (((/* implicit */int) arr_16 [(signed char)21] [i_2 + 1] [i_2 - 2] [i_4 - 1])))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [18ULL] [i_7])) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10054))))) || (arr_9 [i_7] [i_7]))))));
                        var_28 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_4 - 1]))));
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (3037688288904921228ULL))))) + (arr_26 [i_7])));
                        arr_28 [i_8] [i_3] [i_4] [i_8] [i_2 - 2] = ((/* implicit */unsigned char) var_3);
                    }
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_24 [i_2] [i_2] [i_2] [i_2])) : (arr_26 [i_2 - 2])));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_15 [i_9] [i_9 - 1] [i_9 + 3] [i_9 + 2]))));
                        arr_31 [i_2 - 2] [i_2] [18ULL] [i_7] [i_9] &= ((/* implicit */long long int) arr_20 [i_2] [i_3] [11U] [i_2] [11U] [i_2] [i_9]);
                    }
                    for (short i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_34 [i_2] [i_7] [i_4] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12541)) << (((((((/* implicit */int) (signed char)-52)) + (76))) - (17)))))) ? (((((/* implicit */unsigned int) -1310179615)) / (1411663791U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_10)))))));
                        var_31 |= ((/* implicit */unsigned short) min((arr_12 [i_3] [i_3]), ((~(7201808279066797069ULL)))));
                        var_32 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        var_33 &= ((/* implicit */signed char) 2147483647LL);
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_36 [i_4 - 2] [i_4 - 2] [3LL] [3LL])) ? (((/* implicit */long long int) var_5)) : (2147483647LL)))))) ? (((((/* implicit */_Bool) (short)-21986)) ? (((/* implicit */int) arr_15 [i_3] [i_4 - 2] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_15 [i_4] [i_4 - 2] [i_11] [i_11])))) : (((/* implicit */int) min((arr_30 [i_2 - 2] [i_3] [i_4 + 2] [i_11] [i_4 + 2] [i_3] [i_4]), (arr_30 [i_2 - 2] [i_4] [i_4 + 2] [i_11] [i_11] [i_2 - 2] [i_11]))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_13))))) : (((/* implicit */int) arr_18 [i_2] [(signed char)5] [i_4 + 2] [i_11 + 1]))));
                }
            }
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                var_36 |= ((/* implicit */signed char) min((max((var_5), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (unsigned short)0))));
                var_37 -= ((/* implicit */_Bool) 1390807379);
                var_38 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_5)) ? (arr_26 [(unsigned char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [(short)2]))))), (((/* implicit */unsigned long long int) var_5)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_3]))))) ? (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                var_39 = ((/* implicit */unsigned char) arr_26 [19ULL]);
            }
        }
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    var_40 *= ((/* implicit */unsigned int) var_6);
                    arr_49 [i_2] [(_Bool)1] [i_13] [i_13] [i_14] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6433941502061851322LL)) ? (((/* implicit */int) (short)21986)) : (((/* implicit */int) (unsigned short)50845))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 2; i_17 < 21; i_17 += 2) /* same iter space */
                    {
                        arr_57 [i_2] [i_16] [i_13] [i_13] [i_13] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)35))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)32)) ? (3407926240689587347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33417)))));
                        var_42 = ((/* implicit */int) max((var_42), (-1762627478)));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 2) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (555049016) : (((/* implicit */int) var_1))));
                        var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1802897775U)))) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (unsigned short)54823))));
                    }
                    arr_61 [i_13] [i_14] [i_13] [i_2] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (0ULL)))) ? (((((/* implicit */int) arr_42 [i_13])) - (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_14 [i_2] [i_14])) : (((/* implicit */int) (signed char)87))))));
                    var_45 = ((/* implicit */short) ((arr_11 [i_2 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_56 [i_2] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13])))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_19 = 1; i_19 < 20; i_19 += 4) 
                    {
                        var_46 = arr_13 [(unsigned short)1] [(unsigned short)1];
                        arr_66 [i_13] [i_16] [i_13] [i_13] [i_13] = ((/* implicit */long long int) var_5);
                        var_47 = ((/* implicit */int) (~(-7868037553756062385LL)));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) var_10);
                        var_49 = ((/* implicit */int) var_9);
                    }
                    for (int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) (!(((18446744073709551615ULL) == (((/* implicit */unsigned long long int) -1239786784))))));
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (arr_67 [i_2] [i_2] [i_2] [i_16] [i_21]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73))))))))));
                        arr_74 [i_2] [i_2] [i_13] [i_16] [i_16] = ((/* implicit */int) 9931286919020233470ULL);
                    }
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        var_52 |= ((/* implicit */signed char) var_13);
                        arr_78 [i_13] [i_13] [i_14] [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_60 [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [i_2 - 2]))));
                        arr_79 [i_13] [i_14] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_13] [(unsigned short)9] [i_13] [i_13] [i_13] [i_13] [i_13])))))) ? (arr_71 [i_2] [i_13] [i_2] [i_16] [i_22 + 1]) : ((+(var_12)))));
                    }
                    var_53 = ((/* implicit */int) (short)21969);
                }
                arr_80 [i_2] [i_13] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [1ULL] [i_13] [i_2 - 1] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) 7944257648824089369ULL)) ? (arr_36 [i_14] [i_13] [i_13] [i_2]) : (10502486424885462239ULL)))));
            }
            arr_81 [i_13] [i_13] [i_2] = ((/* implicit */int) (unsigned short)65515);
        }
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 22; i_23 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                var_54 = ((/* implicit */unsigned char) ((arr_82 [i_2] [i_2 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))));
                var_55 = ((/* implicit */unsigned short) arr_40 [3U] [i_23] [3U]);
            }
            /* LoopSeq 1 */
            for (unsigned char i_25 = 0; i_25 < 22; i_25 += 2) 
            {
                arr_89 [i_2] [i_2] [i_25] [i_2] = ((/* implicit */int) var_12);
                arr_90 [i_2] [i_23] [i_25] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_25] [i_2] [i_2 - 1] [i_23] [(unsigned short)15] [i_2] [i_23]))));
                arr_91 [i_2] [i_23] [i_2] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_86 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_19 [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1] [i_2])) : (((/* implicit */int) (short)18036))));
            }
            var_56 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_23] [i_2 - 2] [(_Bool)1] [i_2] [i_2] [i_2])))));
            var_57 = ((/* implicit */unsigned short) var_1);
        }
        arr_92 [i_2] = (+((~(arr_12 [i_2 - 1] [i_2 + 1]))));
    }
    /* vectorizable */
    for (unsigned char i_26 = 0; i_26 < 14; i_26 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            var_58 -= ((/* implicit */signed char) (+(12481998698131649328ULL)));
            var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_26] [(unsigned short)0] [i_27] [i_27])))))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
        {
            var_60 = ((/* implicit */unsigned int) 18446744073709551615ULL);
            var_61 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (arr_56 [i_26] [i_26] [i_26] [i_26] [i_28])));
            /* LoopSeq 1 */
            for (unsigned char i_29 = 0; i_29 < 14; i_29 += 3) 
            {
                arr_103 [i_28] [i_26] [i_26] [i_26] = ((/* implicit */unsigned int) (signed char)-94);
                var_62 = ((/* implicit */unsigned int) ((-7095748937194263406LL) <= (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            }
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
        {
            var_63 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)45)))))));
            var_64 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_101 [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_30]))) : (8135741472251355402ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18030)))));
        }
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
        {
            arr_108 [i_26] [i_26] [i_31] = ((/* implicit */unsigned long long int) (short)-6391);
            var_65 = ((/* implicit */unsigned char) ((unsigned int) arr_83 [i_31]));
            var_66 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_101 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) -7095748937194263406LL)))))) : (((((/* implicit */_Bool) (short)18036)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_32 = 1; i_32 < 12; i_32 += 3) 
            {
                var_67 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                var_68 |= ((/* implicit */short) ((((long long int) var_11)) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201)))));
            }
            for (unsigned long long int i_33 = 4; i_33 < 13; i_33 += 3) 
            {
                var_69 = ((/* implicit */unsigned long long int) max((var_69), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                var_70 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_12) : (1581282690272627824ULL)))) ? (((/* implicit */int) arr_17 [i_26] [i_26] [i_26] [i_26])) : (((/* implicit */int) (unsigned short)25640))));
            }
        }
        var_71 = ((/* implicit */unsigned long long int) ((unsigned short) var_6));
    }
}
