/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75446
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((((/* implicit */_Bool) (signed char)119)) ? ((-(16609531457096034406ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))) : (var_6)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = (~(((/* implicit */int) (signed char)123)));
        var_13 = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) 5658957306939422126LL)) & (18446744073709551589ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [0])))))) != (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-((+(arr_5 [i_0])))))), (18446744073709551605ULL)));
                    var_15 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (arr_3 [i_2] [i_0])))) ? (5471004181578127885ULL) : (min((12975739892131423724ULL), (((/* implicit */unsigned long long int) 5658957306939422099LL))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2 + 1] [i_1] [i_2]);
                        arr_11 [(unsigned char)14] [i_1] [i_2] [i_0 + 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (short)-32740)) - (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3]))));
                        var_17 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_0]))));
                        var_18 = 2147483638;
                        arr_12 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_3 - 2]))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned long long int) arr_1 [i_2 - 1] [i_2 - 1]);
                        arr_15 [i_0] [i_1] [i_2 - 1] [i_2] [i_4] = ((/* implicit */short) (+((+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2] [i_4])) >= (((/* implicit */int) var_11)))))))));
                        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_2] [i_1] [12]))));
                        arr_16 [i_1] [i_2] = ((/* implicit */long long int) max((16609531457096034406ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [(unsigned short)2]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_14 [i_0] [i_5] [11] [i_6])), (var_0)))) > (max((((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_6] [i_5] [i_0])), (0ULL)))))), ((+((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    var_21 = ((/* implicit */int) ((((max((3008543936358118092ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) == (((/* implicit */unsigned long long int) min((-5658957306939422100LL), (((/* implicit */long long int) arr_5 [i_6]))))))) || (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (signed char)20)), (31ULL))))))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            arr_27 [i_8] = ((/* implicit */int) min((((/* implicit */long long int) (-(-524295506)))), (max((min((((/* implicit */long long int) arr_4 [i_7])), (-3544241161647994282LL))), (((/* implicit */long long int) arr_13 [i_7] [(unsigned char)14] [i_7] [(signed char)11] [(signed char)4]))))));
            var_22 = ((/* implicit */unsigned char) arr_6 [i_8] [i_8] [i_8]);
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
        {
            var_23 = ((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (short)-27185)) : (((/* implicit */int) (short)9192)))) & (((/* implicit */int) arr_9 [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1])));
            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) arr_23 [i_9 + 3]));
            var_25 = ((/* implicit */long long int) arr_8 [i_7] [i_7]);
            arr_30 [i_7] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_9 + 2] [i_9])) % (((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_9 + 2] [i_9 + 1]))));
            arr_31 [i_7] [i_9 - 2] = ((/* implicit */long long int) arr_4 [i_9]);
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 12; i_10 += 4) /* same iter space */
        {
            arr_35 [i_7] [i_10 - 1] [i_7] &= (~(((/* implicit */int) ((var_10) >= (var_10)))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_10 + 2] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_10] [i_10])) || (((/* implicit */_Bool) (short)32750)))))) : (5471004181578127885ULL)));
            arr_36 [i_7] [i_10] = ((/* implicit */int) (-(arr_18 [i_10 + 1] [i_10 + 1] [i_10])));
        }
        for (int i_11 = 2; i_11 < 12; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                arr_41 [i_7] [i_12] = ((/* implicit */unsigned long long int) -524295506);
                var_27 = ((/* implicit */short) 10059656237035669950ULL);
                arr_42 [i_12] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (_Bool)1))))));
                var_28 |= ((/* implicit */_Bool) ((short) arr_34 [i_7] [i_11 + 3]));
            }
            for (int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
            {
                var_29 *= ((/* implicit */unsigned long long int) var_4);
                arr_45 [i_11 - 2] [i_7] = ((/* implicit */short) 5471004181578127866ULL);
                var_30 ^= arr_25 [i_7];
            }
            for (int i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
            {
                var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_11), (((/* implicit */signed char) arr_43 [i_14] [i_7] [i_7] [i_7]))))), (min((((/* implicit */int) arr_24 [i_7])), (-839317423)))))) || (((/* implicit */_Bool) max((max((((/* implicit */int) (short)(-32767 - 1))), (180474266))), (min((((/* implicit */int) (signed char)-4)), (1356191061))))))));
                var_32 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_11 + 2] [i_11 - 2] [i_7])) / (((/* implicit */int) arr_44 [i_11 + 1] [i_11 + 2] [i_11]))))), (((arr_29 [i_11 + 2] [i_11 - 2] [(signed char)1]) / (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 2])))))));
                var_33 += min((((/* implicit */unsigned long long int) ((long long int) ((arr_21 [i_7] [i_7] [i_11] [i_14]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))))))), (max((((/* implicit */unsigned long long int) arr_6 [i_7] [i_11] [i_14])), (max((((/* implicit */unsigned long long int) arr_5 [i_14])), (9218824986903138576ULL))))));
                var_34 = ((/* implicit */signed char) arr_14 [i_7] [i_7] [i_7] [i_7]);
                var_35 = min((((/* implicit */unsigned long long int) min((arr_8 [i_7] [i_11]), (arr_8 [i_7] [i_14])))), (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26662))) : (0ULL))));
            }
            for (int i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                var_36 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -5658957306939422100LL)), (16599460617842758499ULL)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 2) 
                {
                    var_37 = ((/* implicit */int) ((((arr_51 [i_11]) + (((/* implicit */unsigned long long int) 798786792)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (signed char)119))))))));
                    var_38 = ((/* implicit */unsigned short) arr_48 [i_7] [(signed char)8]);
                    arr_55 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((int) (signed char)-102));
                }
                for (int i_17 = 3; i_17 < 13; i_17 += 1) 
                {
                    var_39 = arr_49 [i_7] [i_7];
                    arr_59 [i_17] [i_11 + 1] [i_15] [i_11] = ((1837212616613517209ULL) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 426924936)), (arr_21 [i_7] [i_11 + 1] [i_15 + 2] [i_17 - 3])))));
                }
                for (int i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    var_40 = ((/* implicit */_Bool) min((min((max((13204193131241301974ULL), (12975739892131423749ULL))), (((/* implicit */unsigned long long int) arr_28 [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)180)))))));
                    var_41 = max(((((+(((/* implicit */int) var_11)))) - ((+(var_3))))), (var_7));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
                {
                    var_42 = arr_32 [i_19] [i_15] [i_11 + 3];
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11]))) * (16609531457096034405ULL)));
                }
                /* vectorizable */
                for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) /* same iter space */
                {
                    var_44 += ((/* implicit */int) ((signed char) 18446744073709551592ULL));
                    var_45 = ((/* implicit */int) arr_64 [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 + 2] [i_15 + 1]);
                    arr_69 [(short)4] = ((/* implicit */signed char) ((-434534135) >= (-1655937107)));
                    arr_70 [i_11] [i_15] [i_11] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 16760832)) > (var_8)))) + (((int) -435207715))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) /* same iter space */
                {
                    var_46 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)39))))) / (((long long int) 2950532360259468659LL))));
                    var_47 -= ((/* implicit */_Bool) min((((unsigned long long int) ((13253655516883166250ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_4 [i_7]) > (((/* implicit */int) arr_67 [i_7] [13ULL] [i_15 - 1] [i_21]))))), ((~(((/* implicit */int) (signed char)111)))))))));
                    var_48 |= ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) arr_24 [i_7])))), (((1695380319) << (((12975739892131423737ULL) - (12975739892131423737ULL))))))) >= (((/* implicit */int) ((short) 2147483638)))));
                    var_49 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_17 [i_15 - 1])) ? (-1627047978) : (((/* implicit */int) arr_7 [i_15] [i_15 + 2] [i_15]))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */long long int) arr_32 [i_7] [(_Bool)1] [i_15]);
                    var_51 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) arr_60 [4LL] [i_11 - 1] [i_11 + 3] [i_22]))), ((+(min((-5658957306939422115LL), (((/* implicit */long long int) (unsigned char)0))))))));
                    arr_76 [i_7] = ((/* implicit */signed char) ((int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_72 [i_7] [13LL] [i_7] [13LL] [i_7] [8ULL])) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_8 [i_11 - 1] [i_15]))))), (((((/* implicit */long long int) arr_3 [i_11] [i_11])) | (arr_62 [i_7] [i_7] [i_7] [i_7] [6]))))));
                }
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                var_52 = ((long long int) (+(17233535471128957671ULL)));
                var_53 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)76)) / (arr_39 [i_7] [i_11] [i_23] [i_7])))) * (((17233535471128957671ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (long long int i_24 = 1; i_24 < 14; i_24 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 15; i_25 += 1) 
                    {
                        arr_86 [7] [i_11] [i_24] [i_23] [i_24 - 1] [7] [5ULL] = (+(((/* implicit */int) arr_58 [i_11 + 3] [i_7])));
                        var_54 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_66 [i_25] [i_24 + 1] [i_23] [i_23] [7] [i_7])) || (((/* implicit */_Bool) arr_8 [i_11 - 2] [i_25]))));
                    }
                    var_55 *= arr_23 [i_7];
                    var_56 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [(signed char)14] [i_24 + 1] [i_11 + 3] [i_24] [i_24]))));
                }
                arr_87 [i_7] [i_11 + 2] [i_23] = (!(((/* implicit */_Bool) (signed char)-124)));
            }
            var_57 *= ((/* implicit */unsigned long long int) -1LL);
        }
        var_58 &= (+((~(min((((/* implicit */int) (signed char)89)), (1800360032))))));
        var_59 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_7] [i_7]), (((/* implicit */int) arr_48 [i_7] [i_7]))))))))) == (max((17233535471128957681ULL), (((/* implicit */unsigned long long int) arr_47 [i_7] [i_7] [i_7]))))));
        var_60 *= ((/* implicit */signed char) (unsigned char)7);
        var_61 += ((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [7ULL] [i_7] [i_7])) << (((((/* implicit */int) arr_47 [i_7] [9] [i_7])) - (251))))))));
    }
    var_62 = ((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) -1))));
    /* LoopSeq 1 */
    for (short i_26 = 3; i_26 < 20; i_26 += 2) 
    {
        arr_92 [i_26] = ((/* implicit */int) max((((/* implicit */long long int) ((((arr_91 [i_26 - 2]) + (2147483647))) >> (((arr_91 [i_26 - 2]) + (1180402327)))))), (min((((1503787782711664064LL) % (((/* implicit */long long int) arr_88 [i_26])))), (((/* implicit */long long int) ((arr_91 [i_26 + 1]) >= (arr_88 [i_26]))))))));
        var_63 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17862))) - (5471004181578127857ULL)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_27 = 0; i_27 < 12; i_27 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 2) 
        {
            for (signed char i_29 = 0; i_29 < 12; i_29 += 2) 
            {
                for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 2) 
                {
                    {
                        var_64 *= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) ((arr_104 [i_27] [i_28] [i_30]) ^ (arr_32 [11LL] [i_28] [i_30])))), (((unsigned long long int) -2147483639)))));
                        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 578324272)) >= (min((((arr_38 [i_28] [i_30]) * (((/* implicit */unsigned long long int) arr_4 [i_27])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_30] [(unsigned char)14] [i_28] [i_27])))))))));
                        arr_105 [11ULL] [i_28] [i_28] [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5471004181578127878ULL)) && (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_9 [7ULL] [i_28] [i_29] [i_30])) != ((-2147483647 - 1))))), (2147483638))))));
                    }
                } 
            } 
        } 
        var_66 |= ((/* implicit */short) max((((arr_65 [i_27]) ^ (((/* implicit */unsigned long long int) -5016257367538723785LL)))), (((((/* implicit */unsigned long long int) 7495853901732684386LL)) * (arr_65 [i_27])))));
    }
}
