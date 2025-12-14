/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76529
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (var_14)));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_10) >> (((3088412440446300946ULL) - (3088412440446300938ULL)))))), (3088412440446300946ULL)))) ? (max((((/* implicit */unsigned long long int) ((short) var_11))), (((((/* implicit */_Bool) 3088412440446300946ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_13))))) : (((((/* implicit */_Bool) ((unsigned char) 7253434597428265186ULL))) ? (((15358331633263250669ULL) >> (((var_2) + (1303857133))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57934))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max(((-(15358331633263250688ULL))), (((/* implicit */unsigned long long int) var_5))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3088412440446300932ULL)) ? (3088412440446300944ULL) : (3088412440446300926ULL))), (((((/* implicit */_Bool) 1591032223)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (1110108915)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1591032223)) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) : (var_13))))))));
    /* LoopSeq 4 */
    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3 + 2] [i_3]);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_15 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 520093696U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21268))) : (11650182357043852076ULL));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((int) var_1)))));
        }
        var_21 = var_5;
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_5] [i_3] [i_7] = ((/* implicit */unsigned long long int) var_12);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 15358331633263250672ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_17 [i_6])) : (var_6)))) : (var_13))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_3]))))) : (-1252897855003323102LL)))))))));
                        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) 3088412440446300944ULL)));
                        arr_24 [i_3] [i_7] [i_3] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_6) + (var_2)))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9)))))) << ((((~(((/* implicit */int) var_15)))) + (4296)))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */int) (signed char)120)) : (var_10)));
                            arr_28 [5ULL] [i_3] [i_6] [i_6 - 2] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((arr_1 [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)5434)))))))) ^ (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_14 [i_7] [i_6 - 2] [i_5])))))));
                            var_25 -= (!(((/* implicit */_Bool) max((max((-429013337), (((/* implicit */int) (signed char)-45)))), (((/* implicit */int) ((unsigned short) var_8)))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_3 - 1]), (((/* implicit */unsigned int) arr_22 [i_3] [i_5] [i_6 + 1] [i_7] [i_9]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_5] [i_6] [i_9 + 1]))) / (arr_7 [i_5]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_7])))))))))))));
                            arr_32 [i_3] [i_3] [i_7] [8ULL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)-104))) ? (max((arr_26 [i_7] [i_7] [i_5 + 1] [i_7] [i_7] [i_7] [i_5]), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (var_10) : (var_10)));
                            arr_33 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) ((((2546985866U) >= (((/* implicit */unsigned int) arr_19 [i_9] [i_9] [i_5 - 3] [i_3])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (arr_21 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_5 + 2])) >= (18446744073709551609ULL)))))));
                            var_27 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -7330960133193012471LL)) && (((/* implicit */_Bool) max(((signed char)97), (((/* implicit */signed char) (_Bool)1))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) -571365298)) || (var_14))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (arr_7 [i_6 + 1]))))));
                            arr_34 [i_3 + 1] [i_5] [i_3] [i_3] [i_9] = ((/* implicit */short) var_10);
                        }
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_38 [i_3] [i_3] [i_7] [i_3] [i_3 - 1] [i_3] [i_3] &= ((/* implicit */long long int) ((((/* implicit */int) min((min((((/* implicit */unsigned short) var_7)), (arr_31 [i_3] [i_3] [i_10] [i_3 - 1] [i_3] [i_3 + 2] [i_3]))), (arr_35 [i_10] [i_10] [i_7] [i_6 - 1] [i_6] [i_6] [i_10])))) >= (min((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_5))))), (var_2)))));
                            arr_39 [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (arr_26 [3] [i_5] [i_5] [i_7] [i_7] [i_10] [i_10]))))) < (((((/* implicit */_Bool) arr_20 [i_3 + 1] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_25 [i_3] [i_5] [(short)2] [i_5] [i_10])) : (((/* implicit */int) var_8))))) : (var_4)))));
                            var_28 -= ((/* implicit */unsigned short) 7330960133193012470LL);
                        }
                    }
                } 
            } 
        } 
        var_29 ^= ((/* implicit */_Bool) ((unsigned char) min(((~(arr_3 [i_3] [i_3] [i_3]))), (((/* implicit */long long int) var_7)))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) ((int) (~(arr_7 [i_11 - 1]))));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_21 [i_11] [i_11] [i_11 + 1] [i_11 + 3] [i_11] [i_11]))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 7; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
        {
            arr_49 [i_12] = ((/* implicit */short) max((((/* implicit */int) ((max((var_13), (15358331633263250683ULL))) >= (((/* implicit */unsigned long long int) var_9))))), (((((((/* implicit */_Bool) arr_16 [(unsigned short)12])) ? (((/* implicit */int) arr_47 [i_13] [i_12] [i_12])) : (1079879006))) << (((/* implicit */int) arr_37 [i_12 + 2] [i_13] [i_13] [i_13] [i_13] [i_13]))))));
            var_32 = ((/* implicit */long long int) (signed char)121);
        }
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
        {
            arr_54 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_12] [i_14] [i_12 + 3])) ? (((/* implicit */unsigned int) (~(var_6)))) : (2711450231U)))) ? (var_10) : (((((/* implicit */int) arr_29 [i_12] [i_12] [i_14] [i_12] [i_12] [i_12] [i_12])) ^ (((/* implicit */int) max(((signed char)-78), (var_1))))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((arr_1 [i_12 - 1]) / (arr_1 [i_12 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((7330960133193012476LL), (((/* implicit */long long int) 2867578587U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_12]))))))))));
                        var_35 = ((/* implicit */signed char) min((((min((var_9), (1248215753U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))))), (var_0)));
                        arr_60 [2LL] [i_14] [i_12 - 1] [0U] [i_12] [i_12 + 1] = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    {
                        var_36 = 3088412440446300917ULL;
                        var_37 = ((/* implicit */signed char) max((var_37), ((signed char)87)));
                        arr_68 [i_14] [i_17] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_12] [(signed char)16] [(signed char)16] [12U] [(signed char)16])), (((var_14) ? (((/* implicit */int) arr_58 [i_12] [(short)3] [i_17] [i_18])) : (((/* implicit */int) (signed char)-82))))))) ? (-7330960133193012476LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_69 [i_12 + 3] [i_14] [i_17] [i_14] [i_18] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_17] [i_17] [i_14] [i_14] [i_12 - 1])) || (((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1812428444)))) ? (13U) : (((/* implicit */unsigned int) ((int) var_15)))))) : (((((/* implicit */long long int) max((4294967288U), (4294967295U)))) & (arr_2 [i_18] [i_14] [i_12])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                for (int i_20 = 3; i_20 < 7; i_20 += 4) 
                {
                    {
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_19 [i_12 + 1] [i_20] [i_20 + 3] [i_20]))))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_13))) ? (arr_5 [i_12 + 3]) : (((/* implicit */long long int) var_2))));
                        var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_16 [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4669554816242447501LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_12)))) : (arr_48 [2U] [i_14]))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */signed char) var_14)), (var_1)))), ((+(0U))))))));
                        var_41 |= ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_0)) : (var_13))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_51 [i_12] [i_14])))))))));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7330960133193012471LL), (1117103813820416LL)))) ? (((591945309958222352ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41529))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4207421708572562373LL)) > (18325804131690323485ULL)))))))) ? (17854798763751329264ULL) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262140U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_20] [16U] [i_12 + 2]))))), (((((/* implicit */_Bool) (unsigned short)26215)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (3088412440446300917ULL)))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_46 [i_12] [i_12 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_47 [i_12] [i_12] [i_14])))))))) ? (4669554816242447493LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5866))))))));
        }
        arr_74 [i_12] [i_12] |= var_5;
        /* LoopNest 3 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned int i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    {
                        arr_84 [i_12] [i_21] [i_22] [i_21] [i_12] = ((/* implicit */unsigned short) var_5);
                        arr_85 [i_21] [i_23] [i_22] [7LL] [i_12] [i_21] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4412565109430611888LL)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)59851)) : (((/* implicit */int) arr_65 [(unsigned char)2] [(unsigned char)2] [(unsigned short)7] [(unsigned short)7] [i_23]))))), (((arr_66 [i_12] [i_21] [i_21] [i_23]) >> (((var_6) - (1314464879)))))))));
                        var_44 = ((/* implicit */unsigned short) ((signed char) arr_37 [i_12] [i_12] [i_21] [i_22] [(short)1] [6LL]));
                        /* LoopSeq 1 */
                        for (signed char i_24 = 2; i_24 < 9; i_24 += 2) 
                        {
                            var_45 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_42 [i_21])) ? (((/* implicit */unsigned int) var_6)) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (4089424515U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_24] [i_24 - 1] [i_24] [i_24] [i_24])))));
                            var_46 -= ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 2) 
    {
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_89 [i_25])) > (((/* implicit */int) arr_89 [i_25]))));
        arr_91 [i_25] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (120939942019228130ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? (((/* implicit */int) var_14)) : (var_10))) : (((/* implicit */int) arr_88 [i_25]))));
    }
}
