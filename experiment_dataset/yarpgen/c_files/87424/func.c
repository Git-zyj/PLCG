/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87424
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) -3014952609623276568LL)))) ? (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))) : (var_6))) : (((/* implicit */unsigned long long int) ((long long int) arr_3 [10U] [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((1919908585) - (1919908584)))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)98)) >> (((-3014952609623276568LL) + (3014952609623276589LL)))));
            var_21 = max((var_18), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 3])), (var_14))))));
            var_22 = ((/* implicit */long long int) max((var_7), (var_7)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) (short)2449))))) + ((~(((/* implicit */int) var_12))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                var_24 -= ((/* implicit */_Bool) var_0);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) 1ULL))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(244382879U)))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_2 - 2])) : (((/* implicit */int) arr_11 [i_3] [i_4] [i_5]))));
                        arr_18 [i_0] [i_2] [i_3] [2U] [i_4] = (signed char)-123;
                        var_28 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)1])))));
                        arr_19 [i_0] [i_2] [i_3 + 2] [(signed char)8] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) << (((18303173705438620322ULL) - (18303173705438620310ULL)))))));
                    }
                    arr_20 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2422)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1581)) << (((((/* implicit */int) var_0)) - (2776)))))) : (((((/* implicit */_Bool) var_17)) ? (10482508725410093076ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_0])))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [7ULL] [i_6] = (~(((/* implicit */int) (short)2431)));
                    var_29 ^= 17162285744486826228ULL;
                    var_30 = ((/* implicit */unsigned int) ((unsigned char) var_8));
                }
            }
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8743356992553835538LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (6101379937874206651LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))))))));
                    arr_30 [i_7] [i_2] [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_11))))));
                }
                for (unsigned char i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_32 -= ((/* implicit */unsigned long long int) ((arr_34 [i_2 - 1] [i_7 + 1] [6ULL]) | (arr_34 [i_2 + 1] [i_7 + 1] [(signed char)6])));
                    var_33 *= ((/* implicit */unsigned int) ((short) (~(var_6))));
                    /* LoopSeq 1 */
                    for (int i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        arr_37 [i_0] [i_9] [i_7] [i_10 + 1] [i_10] = ((/* implicit */short) (-(((((/* implicit */_Bool) -2606154876178492848LL)) ? (((/* implicit */int) (short)-31268)) : (((/* implicit */int) var_5))))));
                        arr_38 [(short)2] [i_2] [i_2] [(short)2] [(short)5] [i_9] = arr_27 [i_7 + 1] [i_2 + 1] [i_0];
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    var_34 ^= ((/* implicit */long long int) ((((((/* implicit */int) var_12)) >= (((/* implicit */int) var_7)))) ? (arr_25 [(short)8] [i_2 - 1] [(unsigned short)12]) : (((/* implicit */int) ((unsigned short) var_10)))));
                    var_35 = ((/* implicit */int) arr_13 [8] [i_2]);
                }
                for (unsigned char i_12 = 1; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    var_36 = ((((/* implicit */_Bool) var_11)) ? ((+(var_2))) : ((-(14059942304565303684ULL))));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_12]))) * ((-(1284458329222725387ULL)))));
                        arr_47 [i_0] [i_2 + 1] [i_0] [i_12] [i_12] [i_2 + 1] [i_13] = ((/* implicit */int) (~((~(var_14)))));
                    }
                    for (short i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
                    {
                        arr_51 [i_14] [10ULL] [i_7] [i_2 - 2] [i_0] = ((/* implicit */_Bool) (~((+(0U)))));
                        arr_52 [(unsigned short)5] [i_0] [i_0] [i_2] [i_7] [i_12] [i_14] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_12))))));
                    }
                    arr_53 [(short)9] [i_7] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_7 + 1] [i_12 + 2])) != (var_15)));
                }
                var_37 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8743356992553835539LL) << (((/* implicit */int) arr_24 [i_0] [i_2] [i_2 - 1] [4ULL]))))) && ((!(((/* implicit */_Bool) (unsigned char)129))))));
                var_38 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-71))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_8 [i_7] [i_2])))))) : (((long long int) (unsigned char)242)));
            }
        }
        for (unsigned char i_15 = 3; i_15 < 11; i_15 += 4) /* same iter space */
        {
            var_39 &= ((unsigned int) ((short) ((unsigned long long int) (unsigned short)51736)));
            var_40 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -5306898011385292749LL)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (unsigned char)250)))) << (((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (short)31496)) : (((/* implicit */int) (short)11235)))) - (31475)))))) ? (((/* implicit */unsigned long long int) 2449231154U)) : (((unsigned long long int) 1246794684))));
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_13 [i_15 - 2] [i_15 - 1])) * (((/* implicit */int) arr_43 [i_0] [i_15 - 3] [i_15] [i_15 + 2])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    arr_61 [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) == (arr_36 [i_16] [i_16] [i_16] [i_16]))) ? (((((/* implicit */unsigned long long int) 8743356992553835538LL)) | (var_18))) : (((/* implicit */unsigned long long int) var_1))));
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_15] [i_15 - 1] [i_15 - 1] [i_0]))) : (10250917185993405749ULL))))));
                    arr_62 [i_17] [i_16] [i_15 - 2] [i_0] [7ULL] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_39 [i_0] [i_15] [i_16] [i_17] [i_0])) < (((/* implicit */int) arr_3 [9LL] [i_17]))));
                }
                var_43 ^= ((/* implicit */long long int) ((signed char) 995657862U));
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
            }
            var_45 = ((/* implicit */signed char) min((var_16), (min((((((/* implicit */_Bool) 1845736141U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31497))) : (-5686836339227896036LL))), (((/* implicit */long long int) min((((/* implicit */int) arr_43 [i_0] [i_0] [3LL] [i_15])), (455063378))))))));
        }
        for (signed char i_18 = 2; i_18 < 12; i_18 += 1) 
        {
            var_46 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_18 + 1] [i_18 - 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_18 - 2] [i_18 - 2])) == (((/* implicit */int) arr_13 [i_18 - 1] [i_18 - 1]))))) : ((~(((/* implicit */int) var_12))))));
            var_47 = ((/* implicit */long long int) var_3);
            var_48 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_17 [5ULL] [i_18 - 1] [i_18 + 1] [i_18 - 2] [i_18 - 1])) == (((/* implicit */unsigned long long int) ((long long int) ((_Bool) (unsigned char)189))))));
            var_49 = ((/* implicit */unsigned int) ((unsigned short) (~((~(((/* implicit */int) var_12)))))));
            var_50 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_13), (3014952609623276568LL)))))) ? (max((max((arr_25 [i_18] [i_0] [i_0]), (((/* implicit */int) var_3)))), (((/* implicit */int) arr_65 [i_0] [i_18])))) : (arr_58 [i_18 + 1])));
        }
        var_51 = ((/* implicit */_Bool) min(((short)31496), (((/* implicit */short) (_Bool)0))));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_68 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_66 [i_19]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37892)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) -5686836339227896035LL)) ? (-3014952609623276568LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243)))))));
        var_52 = ((/* implicit */unsigned short) arr_67 [i_19] [i_19]);
    }
    /* LoopSeq 1 */
    for (short i_20 = 0; i_20 < 24; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_21 = 3; i_21 < 22; i_21 += 3) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
            {
                {
                    var_53 = var_10;
                    var_54 = ((/* implicit */unsigned char) arr_67 [(unsigned short)8] [i_22]);
                    arr_79 [i_20] [11ULL] [i_22] [4] &= ((/* implicit */_Bool) ((((unsigned long long int) arr_74 [i_21 - 1] [i_21 + 2])) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_67 [10LL] [i_21 + 2]), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2)))))))))));
                    arr_80 [i_20] [i_21] [i_21] [i_22] = ((/* implicit */unsigned int) ((arr_70 [i_20] [i_21]) >= (((/* implicit */int) max((var_11), (var_10))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_83 [i_20] [i_21] [i_23] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (17119215705098460132ULL) : (((/* implicit */unsigned long long int) 571735848))));
                        var_55 = ((((/* implicit */_Bool) arr_71 [i_20] [i_21 + 2])) ? (((/* implicit */int) arr_74 [i_20] [i_22])) : (181506916));
                        arr_84 [(unsigned char)20] [i_21 - 3] [i_22] [i_22] [i_23] [i_21] = ((/* implicit */signed char) arr_78 [i_20] [i_21] [i_22]);
                        arr_85 [i_20] [i_23] [i_21] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((-5686836339227896039LL) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_24 = 3; i_24 < 23; i_24 += 2) /* same iter space */
                    {
                        arr_88 [i_24] [i_22] [i_21] [i_24] = ((/* implicit */short) ((((unsigned long long int) var_1)) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 571735877)) ? (((/* implicit */int) (unsigned short)4602)) : (((/* implicit */int) (unsigned short)37892)))))));
                        arr_89 [i_20] [i_20] [i_20] [i_20] [i_24 - 1] [i_24] = ((/* implicit */unsigned long long int) ((int) ((_Bool) (_Bool)1)));
                        /* LoopSeq 4 */
                        for (unsigned char i_25 = 4; i_25 < 23; i_25 += 4) 
                        {
                            arr_92 [i_24] [i_24] [i_24 + 1] [i_22] [i_22] [i_21] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_75 [i_24 - 2] [i_21 - 2])) ? (arr_75 [i_24 + 1] [i_21 - 1]) : (arr_75 [i_24 + 1] [i_21 + 2])));
                            arr_93 [i_20] [i_21 - 3] [i_24] [16] [i_25] = ((/* implicit */signed char) ((unsigned int) arr_74 [i_21 + 1] [i_24 - 3]));
                            var_56 = ((/* implicit */long long int) var_5);
                        }
                        for (unsigned char i_26 = 0; i_26 < 24; i_26 += 2) 
                        {
                            var_57 += ((/* implicit */short) (+(((/* implicit */int) (short)27082))));
                            var_58 = ((/* implicit */short) ((var_16) + (((/* implicit */long long int) (+(((/* implicit */int) (signed char)13)))))));
                            var_59 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5686836339227896036LL)) ? (1121643945736415000LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46)))));
                        }
                        for (long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                        {
                            arr_101 [(signed char)5] [i_21 - 3] [(signed char)5] [i_24] [(signed char)5] [i_24] = ((/* implicit */int) arr_96 [i_20] [i_20] [(unsigned short)8] [i_24] [i_27]);
                            var_60 = ((/* implicit */unsigned long long int) arr_94 [i_21] [11ULL] [i_24]);
                        }
                        for (int i_28 = 0; i_28 < 24; i_28 += 1) 
                        {
                            var_61 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-20))))) ? (((((/* implicit */int) arr_91 [i_28] [i_20] [i_22] [i_24 - 2] [i_28] [i_20] [i_28])) << (((((/* implicit */int) var_4)) - (6253))))) : (((/* implicit */int) var_17))));
                            arr_104 [i_28] [i_24] [i_22] [i_21] [i_21 + 1] [i_24] [i_20] = ((/* implicit */long long int) (signed char)34);
                            var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) (+((+(14600995014356479063ULL))))))));
                        }
                        var_63 = ((((/* implicit */_Bool) (unsigned short)37884)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) >= (arr_87 [(_Bool)1] [i_22] [i_22] [i_21] [i_20]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_29 = 3; i_29 < 23; i_29 += 2) /* same iter space */
                    {
                        var_64 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_98 [i_21 - 1] [i_29 - 3])) && (((((/* implicit */_Bool) arr_96 [(_Bool)1] [i_21 - 1] [i_22] [i_29] [i_29])) && (((/* implicit */_Bool) (unsigned char)87))))));
                        arr_107 [i_20] [i_20] [i_22] [i_20] [i_21 - 1] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
                        arr_108 [i_21 - 2] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 2377858438619554585LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1575562935U))));
                    }
                    for (long long int i_30 = 0; i_30 < 24; i_30 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)112)) == ((-(((/* implicit */int) (unsigned short)5672))))));
                        arr_112 [i_20] [i_21] [i_22] [i_22] [i_22] [i_21 - 1] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) var_17))))));
                    }
                }
            } 
        } 
        arr_113 [i_20] [i_20] = ((/* implicit */short) ((-6349362849621761248LL) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)112))))));
    }
}
