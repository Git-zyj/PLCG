/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66701
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] |= ((/* implicit */int) (!(((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (547352509U)))) < (-5044989151065606066LL)))));
                    arr_10 [i_0] [i_2] = ((((/* implicit */unsigned long long int) -5044989151065606084LL)) | (((unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] |= ((/* implicit */unsigned char) 5044989151065606066LL);
                    var_18 -= min((((/* implicit */unsigned long long int) var_4)), (950233302832471226ULL));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_3] [i_4] [i_5] [i_6] [i_4] [i_6] &= ((/* implicit */long long int) arr_2 [i_3] [i_3]);
                        var_19 = ((/* implicit */int) 507904U);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_20 += ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned short) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-19842)))))), (min((arr_17 [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) (short)-9773)))))));
                            var_21 = ((/* implicit */unsigned long long int) 507913U);
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) -5205430968437120361LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
                            arr_29 [i_3] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294459392U)), (arr_4 [i_4] [i_3])))) || (((/* implicit */_Bool) ((arr_4 [i_8] [i_4]) / (((/* implicit */unsigned long long int) 5205430968437120341LL))))))))));
                            var_23 = ((/* implicit */unsigned char) 4294967285U);
                        }
                        for (long long int i_9 = 2; i_9 < 13; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_7)) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_3] [i_3] [i_3])) >> (((((/* implicit */int) (unsigned short)8160)) - (8142)))))) ? (((1675677723U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))))) : (((unsigned int) (signed char)-27)))))))));
                            arr_32 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((min(((unsigned short)30899), (((/* implicit */unsigned short) arr_1 [i_4])))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_3] [i_4] [i_5])) != (((/* implicit */int) (unsigned char)188)))))))) << (7U)));
                        }
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) ((signed char) max((var_8), (((/* implicit */unsigned char) (signed char)4)))));
                        var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_13 [i_10])), (4187427460711815287LL)));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -268057188)), (arr_14 [i_4] [i_11])))) ? (-5205430968437120361LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34652))))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5205430968437120375LL))))) - (((/* implicit */int) ((-5044989151065606073LL) != (((/* implicit */long long int) -1387700013)))))))))))));
                        var_28 = ((/* implicit */unsigned char) 329592905);
                        arr_37 [i_11] [i_5] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_13 [i_5])) == (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42411)) ^ (((/* implicit */int) arr_30 [i_3] [i_3] [i_5]))))) ? (((868812169621391177ULL) - (17577931904088160438ULL))) : (((/* implicit */unsigned long long int) 2147483630))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((short) max(((signed char)-108), (((/* implicit */signed char) var_9)))))) <= (((/* implicit */int) var_0))));
                        arr_38 [i_11] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) max((((/* implicit */unsigned short) ((arr_11 [i_5]) < (((/* implicit */int) (signed char)-1))))), (arr_3 [i_4]))))));
                    }
                    arr_39 [i_3] [i_3] = ((((((/* implicit */_Bool) ((short) 10948933254198206079ULL))) ? (((arr_14 [i_3] [i_3]) - (868812169621391183ULL))) : (17577931904088160439ULL))) | (((unsigned long long int) ((unsigned long long int) arr_30 [i_3] [i_4] [i_5]))));
                    arr_40 [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 11864808263116584204ULL)) ? (min((((((/* implicit */_Bool) 1586191283)) ? (arr_26 [i_3] [i_4] [i_5] [i_3] [i_4] [i_3]) : (((/* implicit */unsigned long long int) 5205430968437120361LL)))), (((arr_33 [i_3] [i_4] [i_5] [i_5] [i_3]) << (((var_12) - (1772574520U))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3392873696U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_26 [i_3] [i_3] [i_12] [i_13] [i_13] [i_13]) | (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) > (((/* implicit */unsigned long long int) ((arr_35 [i_13] [i_12] [i_12] [i_3]) << (((268057187) - (268057173)))))))))) : (max((((/* implicit */long long int) arr_41 [i_13])), (((((/* implicit */_Bool) arr_44 [i_12])) ? (((/* implicit */long long int) var_1)) : (-8703434608260821147LL)))))));
                var_31 = ((/* implicit */short) -9223372036854775781LL);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                arr_50 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) > ((+(((/* implicit */int) arr_30 [i_3] [i_12] [i_14]))))));
                var_32 -= ((/* implicit */unsigned short) 3340007309U);
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    var_33 = ((/* implicit */int) (signed char)15);
                    arr_53 [i_15] [i_12] [i_12] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned short)65535)))) == (-1564466719)));
                    var_34 ^= ((/* implicit */long long int) ((229460608U) >> (((((/* implicit */int) ((unsigned short) arr_3 [i_15]))) - (61466)))));
                }
                for (unsigned int i_16 = 2; i_16 < 11; i_16 += 2) 
                {
                    var_35 = ((/* implicit */signed char) ((_Bool) ((short) (-2147483647 - 1))));
                    var_36 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-18470)) || (((/* implicit */_Bool) 1586191283))))) % (var_3)));
                }
                var_37 |= ((/* implicit */long long int) (short)-22877);
            }
            arr_58 [i_12] [i_12] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) min((arr_45 [i_3] [i_12]), ((_Bool)1)))), (((unsigned short) arr_33 [i_3] [i_12] [i_12] [i_3] [i_12])))));
        }
        for (signed char i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 3) 
            {
                arr_64 [i_3] [i_17] [i_18] = max((((/* implicit */int) var_17)), (239808554));
                var_38 = min((min((((arr_26 [i_3] [i_17] [i_17] [i_17] [i_18] [i_18]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))), ((!(((/* implicit */_Bool) var_11)))))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_0))))) && (((/* implicit */_Bool) (unsigned char)53)))));
            }
            var_39 += ((/* implicit */signed char) arr_16 [i_17] [i_3] [i_3] [i_3]);
        }
        for (signed char i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) == (((((((/* implicit */int) min((((/* implicit */short) arr_28 [i_19] [i_19] [i_19] [i_3])), ((short)(-32767 - 1))))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) var_3)), (2243003720663040ULL))) - (825341850ULL)))))));
            /* LoopSeq 2 */
            for (unsigned short i_20 = 1; i_20 < 12; i_20 += 3) 
            {
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) arr_47 [(unsigned short)10] [i_19] [(unsigned short)10]))));
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_59 [6ULL] [i_19] [6ULL]))));
                /* LoopSeq 1 */
                for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    arr_71 [i_3] [i_19] [i_20] [i_21] = ((/* implicit */long long int) arr_30 [i_3] [i_19] [i_20]);
                    arr_72 [i_21] [i_20] [i_19] [i_3] = ((/* implicit */long long int) ((arr_16 [i_3] [i_19] [i_20] [i_21]) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) 0ULL))), (((((/* implicit */_Bool) (signed char)127)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26))))))))));
                    arr_73 [i_21] [i_20] [i_3] = ((/* implicit */short) ((unsigned long long int) max((((((/* implicit */_Bool) -1032617407)) ? (-5044989151065606079LL) : (((/* implicit */long long int) (-2147483647 - 1))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-549755813888LL))))));
                }
            }
            for (short i_22 = 0; i_22 < 15; i_22 += 3) 
            {
                arr_77 [i_22] [i_22] [i_19] [i_22] = ((/* implicit */long long int) (_Bool)0);
                /* LoopSeq 1 */
                for (long long int i_23 = 0; i_23 < 15; i_23 += 3) 
                {
                    var_43 -= ((/* implicit */int) arr_46 [i_19]);
                    /* LoopSeq 4 */
                    for (signed char i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        var_44 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) 9223372036854775800LL)) / (((unsigned long long int) arr_43 [i_24])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_21 [i_3] [i_19] [i_22] [i_23] [i_24] [i_24])), (arr_20 [i_24] [i_3]))))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_68 [i_3] [i_19] [i_22]), (((/* implicit */unsigned int) arr_74 [i_3] [i_19] [i_22] [i_24]))))) ^ (min((arr_47 [i_22] [i_19] [i_22]), (((/* implicit */long long int) var_17))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 5102214819928496527LL)), (var_5)))) ? (min((((/* implicit */unsigned long long int) (signed char)-1)), (arr_43 [i_22]))) : (arr_2 [i_24] [i_23]))) : (((/* implicit */unsigned long long int) arr_56 [i_23] [i_22] [i_19]))));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)29168))) : (((((/* implicit */_Bool) ((long long int) (unsigned short)65380))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) / (1807396469230763763LL)))))));
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4750064706469759672LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -877612251)) || (((/* implicit */_Bool) (unsigned char)224)))))) : (9223372036854775807LL)))) ? (min((max((1674205388), (((/* implicit */int) arr_41 [i_24])))), (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) 4750064706469759671LL))))))) : (((/* implicit */int) min(((short)-18396), (((/* implicit */short) ((signed char) arr_70 [i_3] [i_19] [i_22] [i_23] [i_24] [i_19])))))))))));
                    }
                    for (long long int i_25 = 0; i_25 < 15; i_25 += 1) 
                    {
                        var_48 = ((((/* implicit */_Bool) ((short) 3796120771U))) ? (-1832117210) : (((/* implicit */int) arr_21 [i_3] [i_19] [i_19] [i_22] [i_23] [i_25])));
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(-4126290770922166151LL))), (min((5102214819928496527LL), (((/* implicit */long long int) -1625587373))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)47792)), (7385218030446393165LL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-26)), (arr_13 [i_22]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 5741429425246126179ULL)) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (-576460752303423488LL)))))))));
                        var_50 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_70 [i_25] [i_23] [i_23] [i_22] [i_19] [i_3])), (((((/* implicit */long long int) min((((/* implicit */int) (signed char)127)), (-733421159)))) - (((long long int) (signed char)-111))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        var_51 += ((/* implicit */short) ((((/* implicit */_Bool) min(((((_Bool)1) ? (-576460752303423488LL) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_23] [i_26]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [i_26] [i_23] [i_19] [i_3])), (arr_42 [i_22] [i_19]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((+(arr_4 [2] [i_3])))));
                        arr_88 [i_3] [i_19] [i_22] [i_22] [i_26] = ((/* implicit */long long int) arr_76 [i_3] [i_19] [i_19]);
                    }
                    /* vectorizable */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        var_52 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)16970)) - (16946))))) * (((/* implicit */int) ((576460752303423484LL) == (((/* implicit */long long int) 16380U)))))));
                        var_53 = ((/* implicit */int) -576460752303423488LL);
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((7263013038308013129LL) >> (((/* implicit */int) (unsigned short)15))))) && (((/* implicit */_Bool) 9044526908169706519LL))));
                        var_55 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_91 [i_3] [i_19] [i_22] [i_23] [i_27])))));
                        arr_92 [i_3] [i_19] [i_22] [i_22] [i_23] [i_27] = ((/* implicit */_Bool) (~(-1668327739)));
                    }
                    var_56 &= ((/* implicit */unsigned long long int) (+(max((-147694207532645130LL), (((/* implicit */long long int) ((signed char) arr_75 [i_3] [i_19] [i_22] [i_23])))))));
                    var_57 *= ((/* implicit */unsigned short) max((min((1), (((/* implicit */int) min((arr_19 [i_23] [i_22] [i_19] [i_3]), (((/* implicit */unsigned char) arr_22 [i_3] [i_19] [i_22]))))))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) var_2)))))));
                    var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) 18446744073709551604ULL))));
                }
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 15; i_28 += 3) 
                {
                    for (unsigned short i_29 = 0; i_29 < 15; i_29 += 3) 
                    {
                        {
                            var_59 += ((/* implicit */long long int) 18446744073709551615ULL);
                            arr_97 [i_3] [i_19] [i_22] [i_22] [i_29] = ((/* implicit */unsigned long long int) ((long long int) var_5));
                        }
                    } 
                } 
            }
            var_60 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) -645632059925611167LL)))));
        }
        var_61 = ((/* implicit */unsigned short) arr_52 [i_3] [i_3] [i_3] [i_3]);
    }
}
