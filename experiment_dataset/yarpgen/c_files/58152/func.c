/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58152
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((min(((short)-5011), (arr_1 [i_0]))), (arr_1 [i_0])));
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((max((((/* implicit */unsigned int) (!(var_10)))), (max((((/* implicit */unsigned int) (signed char)-80)), (var_2))))) >= (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-111)) >= (((/* implicit */int) (short)29841))))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) ((4602678819172646912LL) == (((/* implicit */long long int) ((/* implicit */int) (short)29841))))))))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (signed char)71)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) (short)29841)))), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) == (((/* implicit */int) arr_0 [i_0]))))) << (((/* implicit */int) ((((/* implicit */_Bool) 18158513697557839872ULL)) && (((/* implicit */_Bool) (unsigned char)218)))))))));
            var_15 -= ((/* implicit */short) (-(((((/* implicit */int) (signed char)-94)) ^ (((/* implicit */int) var_1))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                arr_12 [i_0] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_0] [i_3] [i_0] [i_0]);
                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) & (arr_4 [i_2 + 1] [i_2 - 2]))), (((/* implicit */unsigned int) ((short) arr_3 [i_3 - 1])))));
                arr_13 [i_3] [(unsigned char)13] [7] = ((/* implicit */short) ((max(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (short)-29840)))) / (min((((/* implicit */int) (unsigned char)50)), (((((/* implicit */_Bool) (short)-29847)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 3] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_3] [i_3 + 1] [i_0]))))))));
                arr_14 [i_3] [(unsigned char)12] [i_3 - 3] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3 - 1])) ^ ((~((-(((/* implicit */int) arr_0 [3]))))))));
                var_17 -= ((/* implicit */short) ((unsigned int) var_3));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                arr_17 [i_4] [i_2] [(signed char)11] [i_0] = ((/* implicit */signed char) (-(2201467450762401000ULL)));
                var_18 += ((/* implicit */short) (+(((((/* implicit */_Bool) -543162531)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_2 + 1] [i_4]))))));
                arr_18 [i_4] = ((/* implicit */long long int) 2201467450762400987ULL);
                arr_19 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) != (((/* implicit */int) (unsigned char)188))));
            }
        }
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-5011)), (arr_3 [i_5]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            arr_26 [i_5] [i_6] = ((/* implicit */signed char) (short)-29842);
            arr_27 [i_6] [i_5] = ((/* implicit */short) (signed char)-80);
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_5]))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_4))));
        }
        for (short i_7 = 3; i_7 < 9; i_7 += 2) 
        {
            arr_30 [i_7] = ((/* implicit */unsigned short) (_Bool)1);
            arr_31 [i_5] [i_7] |= ((/* implicit */signed char) min(((_Bool)1), ((!(((/* implicit */_Bool) (signed char)-80))))));
            arr_32 [i_5] [i_7 + 1] [i_7] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_5))))))))));
            var_21 -= ((/* implicit */unsigned char) max((max(((signed char)79), (arr_29 [i_5] [i_5]))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_29 [i_5] [i_7 - 2])))))));
            arr_33 [6LL] [i_7 + 1] = ((/* implicit */signed char) arr_28 [i_5] [i_7]);
        }
        for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            arr_36 [i_5] [(short)10] [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [i_8] [i_8 - 1] [(signed char)1] [i_8 + 1])) ? (((/* implicit */int) (short)-2991)) : (((/* implicit */int) var_3)))), (((/* implicit */int) max((arr_15 [i_5] [i_8 - 1] [i_5] [i_8]), (arr_15 [i_5] [i_8 - 1] [i_5] [i_5]))))));
            var_22 = ((/* implicit */_Bool) min((var_22), (var_10)));
        }
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            arr_39 [i_5] [i_9] = ((/* implicit */short) ((signed char) ((((((/* implicit */int) arr_37 [i_9] [i_5])) - (((/* implicit */int) arr_7 [(signed char)0] [i_9])))) >= (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5]))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)188)) >= (((/* implicit */int) (short)(-32767 - 1))))))));
                arr_42 [i_5] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_10 - 1])) ? (((/* implicit */int) arr_1 [i_10 - 1])) : (((/* implicit */int) var_11))));
            }
            for (signed char i_11 = 1; i_11 < 10; i_11 += 4) 
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [i_11 - 1])) & (((/* implicit */int) var_10)))))))))));
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) (unsigned short)8246)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)8054)) || (((/* implicit */_Bool) arr_35 [i_5] [i_9] [7LL]))))) : (((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_4))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_26 *= ((/* implicit */_Bool) var_7);
                arr_49 [i_5] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)9483))) <= (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_5] [i_9]))))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 4) 
                    {
                        {
                            arr_54 [i_14] [8] [(signed char)4] [(short)4] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-8043))));
                            var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (unsigned short)57289)) : (((/* implicit */int) var_7))))));
                            arr_55 [i_14] [i_9] [3U] [i_14] = ((/* implicit */signed char) (unsigned short)57289);
                            var_28 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                arr_58 [i_5] [1] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_15 [i_5] [i_9] [i_5] [i_15]), (((/* implicit */unsigned short) max((arr_24 [i_5] [i_9] [(short)9]), (((/* implicit */short) var_11)))))))) == (((/* implicit */int) (short)-13231))));
                arr_59 [i_5] [i_9] [i_9] [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) arr_35 [(_Bool)1] [i_9] [i_15])) : (((/* implicit */int) (unsigned char)78))))) ? (max((((/* implicit */long long int) var_10)), (-3997681637051667103LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)32766))))))), (((/* implicit */long long int) (unsigned char)188))));
            }
            var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_9] [i_5] [i_9] [i_5]))))), (arr_43 [i_9])))), (max((max((((/* implicit */unsigned short) arr_1 [i_5])), (arr_10 [i_5] [i_5] [i_9] [i_9]))), (((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) var_1)))))))));
            arr_60 [i_5] [i_5] = ((/* implicit */signed char) ((max((var_8), (var_3))) ? (((unsigned long long int) (unsigned char)128)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_9])))));
        }
        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)78)))))))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                {
                    var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) : (arr_50 [i_17] [i_16])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (short)-32766)))) < (((/* implicit */int) var_1))));
                    arr_65 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32766)) && (((/* implicit */_Bool) (unsigned short)52897))));
                }
            } 
        } 
    }
    for (signed char i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) min((max((min((-1725453952049371484LL), (-1725453952049371484LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48173)) && (((/* implicit */_Bool) (short)-32755))))))), (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)44521), (((/* implicit */unsigned short) arr_40 [i_18]))))), (((((/* implicit */_Bool) arr_38 [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_16 [i_18] [i_18])) : (((/* implicit */int) (unsigned short)36856)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_19 = 4; i_19 < 10; i_19 += 2) 
        {
            arr_72 [i_18] = ((/* implicit */short) (signed char)50);
            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-15))));
            var_34 = ((/* implicit */_Bool) -1LL);
        }
        for (long long int i_20 = 1; i_20 < 10; i_20 += 2) 
        {
            var_35 &= ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)46944)))) % (max((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)46960)))), (((((/* implicit */int) (short)32754)) * (((/* implicit */int) arr_66 [i_18] [i_18]))))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 8; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    {
                        arr_82 [i_18] [i_20] [i_21 - 1] [i_22] = ((/* implicit */unsigned short) (((+(3997681637051667103LL))) >= (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (min((var_2), (((/* implicit */unsigned int) (unsigned short)20994)))))))));
                        arr_83 [i_18] [i_20] [i_20] [i_21] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_48 [i_21 + 1]), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (arr_48 [i_21 + 3]) : (arr_48 [i_21 + 1])))));
                        var_36 = ((/* implicit */unsigned short) -3997681637051667088LL);
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (short)27559)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) : (2254200262629392767ULL)))));
            var_38 &= var_3;
            var_39 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_5 [i_18] [i_18] [i_18])), (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-27561)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (-3997681637051667103LL)))))));
        }
        for (unsigned int i_23 = 1; i_23 < 10; i_23 += 4) 
        {
            var_40 = ((/* implicit */long long int) var_0);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */long long int) arr_62 [i_23] [i_23] [7LL]);
                arr_90 [i_23] [i_24] = (signed char)-111;
                arr_91 [i_18] = ((/* implicit */long long int) ((unsigned char) ((arr_4 [i_18] [(unsigned char)5]) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
            }
            for (unsigned char i_25 = 0; i_25 < 11; i_25 += 4) /* same iter space */
            {
                arr_96 [i_18] [i_25] = ((/* implicit */long long int) ((unsigned short) ((short) max((arr_85 [i_25]), (((/* implicit */unsigned char) (signed char)127))))));
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (arr_80 [i_18] [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23] [i_23 + 1]))) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (unsigned short)384)))))));
                arr_97 [i_18] [(unsigned char)4] [i_25] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-56))) % (min((1725453952049371483LL), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)32556))) : (3997681637051667102LL)))))));
            }
            for (unsigned char i_26 = 0; i_26 < 11; i_26 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57344)))))));
                arr_100 [(signed char)3] [(signed char)3] [(short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [(signed char)4] [(signed char)4])) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 67108863U)) || (((/* implicit */_Bool) arr_77 [i_18] [i_18]))))))))));
            }
            var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_35 [i_23] [i_23 - 1] [i_23 - 1])), (arr_5 [i_18] [i_23 + 1] [i_23 + 1]))))));
            arr_101 [i_18] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_23 - 1] [i_23 - 1]))))) ? (((/* implicit */int) max((arr_28 [i_23 + 1] [i_23 - 1]), ((short)32568)))) : (((/* implicit */int) min((arr_28 [i_23 - 1] [i_23 + 1]), (arr_28 [i_23 + 1] [i_23 - 1]))))));
        }
        arr_102 [i_18] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_7), (arr_47 [i_18] [i_18] [i_18] [i_18]))))));
    }
    for (signed char i_27 = 0; i_27 < 11; i_27 += 2) /* same iter space */
    {
        var_45 ^= ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (signed char)-104)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max((arr_75 [i_27] [(signed char)2] [(signed char)2]), (((/* implicit */unsigned short) arr_40 [i_27]))))))) / ((+(((((/* implicit */int) (unsigned char)243)) * (((/* implicit */int) (signed char)-5))))))));
        arr_105 [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6545395264861599225LL)) ? (((/* implicit */int) arr_84 [i_27] [i_27] [i_27])) : (((/* implicit */int) arr_84 [i_27] [i_27] [i_27]))))) ? (((((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) : (-3997681637051667103LL))) | (((/* implicit */long long int) ((/* implicit */int) (short)-32533))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_35 [(signed char)10] [i_27] [i_27])))))));
        arr_106 [i_27] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_35 [i_27] [i_27] [i_27]))))))))));
    }
    /* LoopNest 2 */
    for (short i_28 = 0; i_28 < 18; i_28 += 4) 
    {
        for (signed char i_29 = 3; i_29 < 16; i_29 += 4) 
        {
            {
                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) min((((6545395264861599248LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_110 [i_28] [i_29 - 1] [i_29]))))), (((/* implicit */long long int) ((var_2) >> (((((arr_107 [i_28]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5123))) : (arr_108 [i_28] [(signed char)17]))) - (2377900957U)))))))))));
                var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7013965977520265996LL)) ? (arr_109 [(short)2] [(short)2] [i_28]) : (((/* implicit */long long int) ((/* implicit */int) arr_107 [(signed char)12])))))), (min((13729175463673665988ULL), (((/* implicit */unsigned long long int) (unsigned char)48))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_30 = 2; i_30 < 17; i_30 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_31 = 0; i_31 < 18; i_31 += 3) 
                    {
                        arr_116 [i_28] [i_29] [(unsigned char)4] [i_30] [i_31] = 7013965977520265996LL;
                        arr_117 [i_28] [i_29] [(signed char)5] [i_29] [i_31] = ((/* implicit */long long int) arr_111 [i_29 - 3] [i_29 + 1] [i_30 - 1]);
                        arr_118 [i_28] [i_28] [i_30] [i_30] [i_30] [(_Bool)1] = (_Bool)0;
                    }
                    for (long long int i_32 = 0; i_32 < 18; i_32 += 3) 
                    {
                        arr_121 [i_28] [i_29] [i_30] [i_32] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        arr_122 [i_32] [i_30] [i_29] [i_28] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)128)))))));
                    }
                    var_48 &= ((/* implicit */signed char) arr_108 [i_28] [(unsigned char)8]);
                }
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) var_7);
    var_50 = ((/* implicit */short) min((max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned short)36322)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)168)))))), (((/* implicit */int) min(((signed char)15), (max(((signed char)0), ((signed char)-124))))))));
}
