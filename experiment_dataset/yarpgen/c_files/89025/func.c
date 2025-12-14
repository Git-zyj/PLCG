/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89025
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0 - 1] [i_1] = ((/* implicit */unsigned int) var_9);
            var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_1))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 2] [i_0 - 1]);
            arr_11 [i_0 - 1] = ((/* implicit */unsigned long long int) (short)31890);
            var_12 -= ((/* implicit */short) var_1);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_15 [3] = ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-31882)));
            var_13 = ((/* implicit */int) var_6);
        }
        var_14 *= ((/* implicit */_Bool) ((arr_0 [i_0 - 3] [i_0 - 3]) % (arr_0 [i_0 + 1] [i_0])));
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-31886)) ^ (((/* implicit */int) (short)-31914)))) + (arr_7 [i_0] [i_0 + 1] [5U])));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */short) ((unsigned int) var_2));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_4] [i_5] [i_4])) + (((/* implicit */int) arr_21 [i_4] [i_4] [i_5]))));
            var_16 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) != (3730395238761112671LL)));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_4])) ^ (((/* implicit */int) arr_17 [i_5])))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)40))));
            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) / (-3730395238761112648LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [(signed char)8] [i_6]))) : (arr_22 [10U] [10U] [(signed char)12])));
        }
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_20 -= ((/* implicit */unsigned long long int) var_4);
        arr_26 [i_7] = ((/* implicit */int) ((unsigned int) (_Bool)1));
    }
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (signed char i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_21 += ((/* implicit */unsigned char) max((3723612152U), (((/* implicit */unsigned int) (unsigned char)92))));
                        arr_35 [i_8] [i_10] [i_8] [(unsigned char)4] [i_8] = ((/* implicit */short) min((11U), (((/* implicit */unsigned int) (unsigned char)188))));
                    }
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 17; i_12 += 3) 
                    {
                        arr_39 [i_10] [i_10 - 2] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3723612152U)) || (((/* implicit */_Bool) (short)31490))));
                        var_22 = ((((/* implicit */long long int) ((/* implicit */int) (short)-31899))) / (9223372036854775789LL));
                        var_23 = ((/* implicit */long long int) var_6);
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) | (3730395238761112666LL))) | (((/* implicit */long long int) ((arr_29 [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)27898))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_25 = ((min((((/* implicit */unsigned int) ((int) (short)-31350))), (arr_30 [i_9] [(_Bool)1] [(unsigned char)10]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_10 + 1] [i_10 - 2] [i_10 + 1] [i_10 + 1])) && (((/* implicit */_Bool) min((((/* implicit */int) (short)-31892)), (arr_28 [(_Bool)1])))))));
                            arr_46 [i_10] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (arr_45 [i_8] [(signed char)3] [i_10] [i_10 - 2] [(short)16] [i_10] [i_8])))) | (max((((/* implicit */long long int) (_Bool)1)), (6588342818912854684LL)))));
                            var_27 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (short)8191)))) + (2147483647))) << (((((unsigned int) arr_29 [i_10 + 1])) - (879124779U)))));
                        }
                        var_28 = min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-9223372036854775792LL)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31921))))) ? (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_7))))) : ((-(arr_30 [(unsigned char)17] [(unsigned char)17] [i_13]))))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_38 [i_13] [i_8]))));
                        arr_47 [7LL] [i_9] [i_10] [(signed char)8] [i_9] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -203436023)), (arr_40 [i_10 + 1] [(unsigned short)8] [6] [i_10] [i_8])))))));
                    }
                    for (unsigned int i_15 = 2; i_15 < 15; i_15 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (1704469592)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31895))) - (10900430358274014620ULL))))), (((/* implicit */unsigned long long int) (short)31892))));
                            arr_55 [i_16] [i_16] [i_9] [i_10 + 1] [(unsigned short)2] [i_16] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) min(((signed char)-87), (((/* implicit */signed char) arr_49 [i_16] [i_9] [3] [i_10 - 2]))))) & (((/* implicit */int) (signed char)48))))), (((((/* implicit */long long int) (-(-17)))) % (min((((/* implicit */long long int) (short)31883)), (arr_54 [i_15])))))));
                        }
                        for (short i_17 = 2; i_17 < 15; i_17 += 2) 
                        {
                            var_31 += ((((((/* implicit */_Bool) min((496), (((/* implicit */int) arr_24 [i_8]))))) || (((/* implicit */_Bool) ((var_10) - (((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) min((((arr_49 [i_8] [i_8] [i_8] [i_15 + 3]) ? (((/* implicit */int) (short)31902)) : (((/* implicit */int) (signed char)-94)))), (1545547480)))));
                            arr_58 [i_10] = ((/* implicit */short) arr_30 [(_Bool)0] [i_10] [i_17 - 1]);
                            var_32 |= ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((arr_49 [i_8] [i_9] [i_10] [10]) ? (var_5) : (((/* implicit */int) var_9)))))))));
                            arr_59 [i_10] [i_17] [i_15] [i_10 - 2] [i_9] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_54 [i_10 - 1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_17 + 2] [i_10 + 1] [i_10] [i_10 - 2] [(signed char)8] [i_10 + 1]))) : (arr_29 [i_17 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_56 [i_17 - 2] [i_10 - 1] [9LL] [(_Bool)1] [i_10] [i_10]), (arr_56 [i_17 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_8] [(signed char)5])))))));
                            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_33 [i_10 - 2] [i_10] [2] [i_15 - 1] [i_17 + 3])) ^ (1477822753))) - (((/* implicit */int) arr_33 [i_10 + 1] [i_10] [i_10 - 2] [i_15 + 1] [i_17 + 3]))));
                        }
                        arr_60 [i_8] [i_9] [i_10] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -1545547478)), (arr_40 [5] [i_9] [5] [i_10] [(unsigned char)12])));
                    }
                    var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((-268435456) ^ (((/* implicit */int) arr_34 [i_10] [i_10]))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_33 [i_8] [i_10] [i_10 + 1] [i_10] [i_9]))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) var_9))))))) == (-924925519)));
                    arr_61 [i_10] [(unsigned char)12] [10] [i_10] = ((/* implicit */unsigned int) arr_56 [i_10 - 1] [6] [i_8] [i_9] [i_8] [i_8]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                    {
                        arr_65 [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)31911)), (min((((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_9))))), (((2007775039) / (((/* implicit */int) var_4))))))));
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((unsigned int) (-(((/* implicit */int) (short)31884))))) == (((/* implicit */unsigned int) ((int) var_4))))))));
                            var_36 = ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((68134439U) % (3008529004U)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) | (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(short)1] [(short)1] [i_9] [i_8]))) < (4226832861U)))))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((int) 3037882082U))))) > (min((arr_40 [i_8] [i_8] [i_8] [i_10] [i_8]), (min((((/* implicit */unsigned int) arr_28 [i_18])), (3829900825U)))))));
                            arr_68 [i_19] [i_10] [i_10] [i_10] [i_8] = ((/* implicit */signed char) ((14U) << (((1984) - (1961)))));
                            arr_69 [i_18] [i_18] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (-1971891829) : (1642735634)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_20 = 3; i_20 < 17; i_20 += 1) 
                        {
                            arr_73 [i_8] [i_8] [i_10] [2U] [i_8] [i_8] [(short)1] = ((/* implicit */signed char) ((-1996) < (((/* implicit */int) (_Bool)1))));
                            var_38 = ((/* implicit */unsigned char) ((min((((arr_40 [i_20] [i_10] [i_10] [i_10] [i_8]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */int) arr_57 [i_9] [i_9] [i_9] [i_18 + 1] [i_9] [i_20 - 2] [i_9]))))))) << (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)31876)), (11914925669026796932ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18))))))));
                            var_39 = ((/* implicit */unsigned int) ((var_10) | (min(((~(-17))), (((((/* implicit */int) (unsigned char)110)) << (((var_5) - (652420447)))))))));
                            var_40 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_10] [i_18 - 1]))))), (max((((/* implicit */long long int) 0U)), (-4090646470819880023LL)))));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 18; i_21 += 3) 
                        {
                            arr_77 [11LL] [(short)17] [i_10] [i_9] [i_10] = ((((/* implicit */int) (unsigned char)190)) % (((((/* implicit */int) (short)-11833)) * (((/* implicit */int) arr_72 [5] [i_8] [i_9] [i_10 - 2] [i_8] [i_21])))));
                            var_41 = ((/* implicit */_Bool) max((var_41), (((((/* implicit */int) var_8)) < (((/* implicit */int) var_9))))));
                        }
                    }
                    for (int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) ((1987328360) == (((/* implicit */int) arr_75 [i_22] [i_10 - 2] [4LL] [17U] [i_9] [(unsigned char)12]))))), (var_8)))) ^ (((/* implicit */int) var_2))));
                        var_43 = ((/* implicit */int) max((min((min((((/* implicit */unsigned long long int) arr_24 [i_10])), (var_1))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_29 [i_22])))))), (((/* implicit */unsigned long long int) arr_37 [i_9] [i_9] [(_Bool)1] [(_Bool)1]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_23 = 1; i_23 < 16; i_23 += 3) 
    {
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_30 [i_23 + 1] [i_23 + 1] [3U])))))));
        /* LoopSeq 1 */
        for (int i_24 = 0; i_24 < 17; i_24 += 2) 
        {
            var_45 &= ((/* implicit */_Bool) ((unsigned char) 1984));
            /* LoopSeq 3 */
            for (unsigned int i_25 = 0; i_25 < 17; i_25 += 1) /* same iter space */
            {
                var_46 += ((/* implicit */unsigned char) (~(((((/* implicit */int) (short)-31918)) | (16)))));
                /* LoopSeq 3 */
                for (long long int i_26 = 0; i_26 < 17; i_26 += 4) 
                {
                    arr_90 [i_24] [i_24] [i_23] [i_24] [i_24] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) & (((/* implicit */int) var_6))))));
                    arr_91 [i_23] [(signed char)14] [i_23] [i_23] = (-(((/* implicit */int) (unsigned char)18)));
                    arr_92 [i_23 + 1] [i_23 + 1] [i_24] [i_23] [4] = (((+(((/* implicit */int) (short)31900)))) ^ (((((/* implicit */int) (unsigned char)112)) & (((/* implicit */int) (short)31874)))));
                }
                for (int i_27 = 0; i_27 < 17; i_27 += 2) 
                {
                    var_47 = ((/* implicit */long long int) ((int) ((-6576640184740795717LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-4547))))));
                    var_48 = ((/* implicit */long long int) var_7);
                    arr_97 [i_24] [i_23] [i_27] = ((/* implicit */int) ((443454972U) >> (((9223372036854775807LL) - (9223372036854775801LL)))));
                }
                for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                {
                    arr_101 [i_23 + 1] [i_25] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)18083)) < (((/* implicit */int) (unsigned char)203))));
                    var_49 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_86 [i_25] [i_24] [i_24])) | (((/* implicit */int) var_3)))) | ((~(((/* implicit */int) (_Bool)1))))));
                }
                arr_102 [i_23] [i_24] [i_24] [i_24] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-5225544335745899429LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                arr_103 [i_23] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_23] [i_24] [i_23 - 1])) % (((((/* implicit */int) (_Bool)1)) - (2147483647)))));
            }
            for (unsigned int i_29 = 0; i_29 < 17; i_29 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */_Bool) ((13U) << ((((~(((/* implicit */int) (unsigned char)177)))) + (197)))));
                var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-56)) - (((/* implicit */int) arr_24 [i_23 + 1]))));
                var_53 = ((/* implicit */unsigned char) var_6);
            }
            for (unsigned int i_30 = 0; i_30 < 17; i_30 += 1) /* same iter space */
            {
                arr_108 [i_23 + 1] [i_24] [i_23 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) | (var_1)));
                var_54 = ((/* implicit */_Bool) 2147483647);
                var_55 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)18071)))) ^ (((-616267862) & (((/* implicit */int) var_8))))));
                arr_109 [i_23] [i_24] [i_24] [i_30] = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_8)));
            }
        }
    }
}
