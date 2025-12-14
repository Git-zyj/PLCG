/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7189
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
    var_15 *= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((18446744073709551596ULL) / (var_7)))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_17 &= (-(((12606687299670455345ULL) * (18432901958032224630ULL))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (4466936955426847299ULL)));
                    }
                } 
            } 
            var_19 = max((((unsigned short) (unsigned short)4337)), (var_3));
        }
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0 + 4] [i_0 + 4] [i_0] [i_0] = ((13842115677326985ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7680))));
                            var_20 = var_2;
                            arr_23 [i_0] [i_5 - 2] [i_5 - 2] = ((/* implicit */unsigned long long int) ((unsigned short) min((var_5), (arr_14 [i_5 - 2] [i_5 - 2] [i_0]))));
                            var_21 &= ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_20 [i_4 - 1] [(unsigned short)11] [3ULL] [(unsigned short)2] [(unsigned short)2])))) ? (((unsigned long long int) 18432901958032224631ULL)) : (arr_1 [i_4 - 2])))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_11)))))) : (((/* implicit */int) (unsigned short)14689))));
        }
        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            arr_26 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (0ULL))));
            var_23 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2052885674240712147ULL)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)31))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
            {
                var_24 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (15342423887304964213ULL));
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_25 ^= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)58420));
                    var_26 += ((((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8] [i_8] [(unsigned short)8]))))) % (((unsigned long long int) 2200243741201476791ULL)));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26950)) >= (((/* implicit */int) (unsigned short)23659))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                    {
                        var_28 = ((((((/* implicit */_Bool) (unsigned short)24411)) ? (16229309391009229281ULL) : (1117103813820416ULL))) * (arr_7 [i_8 - 1] [i_8 - 1] [i_8 - 1]));
                        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_9] [i_8])) ? (((/* implicit */int) (unsigned short)39505)) : (((/* implicit */int) arr_19 [i_0] [i_0 + 3] [i_0] [i_0 + 2] [i_8]))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 16229309391009229297ULL))));
                        arr_33 [i_0] [i_0] = arr_12 [i_8] [i_8] [i_8];
                    }
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7116))));
                        var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16229309391009229276ULL)) && (((/* implicit */_Bool) (unsigned short)61161))));
                        var_33 &= var_1;
                        arr_37 [i_0] [i_0] [i_8] [i_0] [2ULL] [i_10] [i_12] = (~(arr_14 [i_8 - 1] [i_8 - 2] [i_0]));
                    }
                    arr_38 [i_0] [i_0] = ((arr_28 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8 + 1] [(unsigned short)10] [i_10]))));
                }
                for (unsigned short i_13 = 3; i_13 < 11; i_13 += 2) /* same iter space */
                {
                    var_34 = (unsigned short)38586;
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15499020492047845237ULL)) || (((/* implicit */_Bool) arr_29 [11ULL] [i_13 - 3] [11ULL] [i_13 - 3] [11ULL]))));
                }
                for (unsigned short i_14 = 3; i_14 < 11; i_14 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7116))) / (18432901958032224628ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : ((~(var_14)))));
                    var_37 = 13127834041892816393ULL;
                    var_38 = ((var_5) ^ (15949462590116227120ULL));
                }
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    arr_46 [i_0] [i_9] [i_8] [8ULL] [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_8 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65328))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47855)) ? (((/* implicit */int) (unsigned short)40080)) : (((/* implicit */int) (unsigned short)2533))))) : (arr_7 [i_0 + 2] [(unsigned short)11] [6ULL])));
                        var_40 |= (unsigned short)3892;
                        arr_49 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_0] [i_0 + 4] [i_0]));
                        var_41 += ((/* implicit */unsigned long long int) arr_11 [4ULL] [i_8] [i_9] [i_9] [i_16]);
                    }
                    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) (unsigned short)3904);
                        var_43 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_17] [i_17 + 1] [i_17 - 2] [i_17] [i_17])) / (((/* implicit */int) arr_29 [i_17] [i_17 - 2] [(unsigned short)8] [i_17] [i_17]))));
                    }
                }
            }
            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
            {
                arr_56 [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)6099)), (arr_27 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)48)))))) : (((/* implicit */int) ((unsigned short) min((var_1), (((/* implicit */unsigned long long int) (unsigned short)2540))))))));
                var_44 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((unsigned short) 4286578688ULL))), ((~(((/* implicit */int) (unsigned short)47855))))))));
                var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_0] [i_0] [(unsigned short)4] [i_18]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_19 = 1; i_19 < 11; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 3) 
                {
                    {
                        var_46 = ((unsigned long long int) max((arr_43 [i_0 + 1] [i_8 - 2] [i_8 - 2] [i_20] [i_19 + 1] [i_19 + 1]), (min((arr_25 [i_0] [i_0] [i_0]), ((unsigned short)3906)))));
                        var_47 |= ((/* implicit */unsigned short) var_6);
                        var_48 = ((/* implicit */unsigned short) max((var_48), ((unsigned short)31745)));
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 2; i_21 < 9; i_21 += 4) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_8 - 1] [i_20] [i_21])))))));
                            arr_63 [i_0] [i_0] [(unsigned short)9] [i_0 - 1] [2ULL] [i_0 + 4] = arr_54 [i_8] [i_21 + 3];
                            var_50 = max((((unsigned short) arr_39 [i_0] [i_0 + 4] [i_8 - 1] [i_19 + 1])), ((unsigned short)61644));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_22 = 1; i_22 < 11; i_22 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 3; i_24 < 11; i_24 += 3) 
                {
                    arr_72 [i_0 + 2] [i_0] [i_23] [i_0 + 2] [i_0 + 2] = (~(((unsigned long long int) 7946868517143808658ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_51 = 14706680848929644833ULL;
                        arr_76 [6ULL] [(unsigned short)6] [6ULL] [6ULL] [i_22 - 1] [(unsigned short)6] &= arr_17 [(unsigned short)7] [(unsigned short)1] [i_23];
                        var_52 += (unsigned short)17680;
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        var_53 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6069))) : (((3779187537930526245ULL) >> (((var_7) - (88897912680550744ULL))))));
                        arr_80 [i_22] [i_22] [i_22] [i_0] [i_26] = ((/* implicit */unsigned long long int) (unsigned short)40539);
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)61668)), (min(((~(2645088312753407236ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)3888)))))))));
                        var_55 &= ((/* implicit */unsigned long long int) max((arr_74 [i_24 - 2] [i_24 - 1] [i_22 - 1] [i_0 + 2] [i_0 + 2]), (arr_13 [i_24 - 3] [i_22 + 1] [i_0 + 3])));
                        arr_84 [i_0] [i_0] [i_0] [i_0] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_4), (arr_74 [i_0] [i_0] [i_23] [i_0] [i_27])))))) : (((var_14) * (min((((/* implicit */unsigned long long int) (unsigned short)61644)), (7946868517143808658ULL)))))));
                        arr_85 [i_0] [i_22 + 1] [(unsigned short)0] [i_22 + 1] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)6076)), (var_6))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (17406433655184661444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_23] [i_24 - 3] [4ULL]))))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_43 [1ULL] [1ULL] [(unsigned short)8] [3ULL] [i_27] [2ULL])))))))));
                    }
                }
                var_56 = ((/* implicit */unsigned short) max((arr_70 [i_0] [i_0] [i_0] [i_0] [i_22 - 1] [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (23ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)39440))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (arr_60 [i_0] [i_22 - 1] [i_0])))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 1) 
            {
                arr_89 [i_0] [i_22] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)17680)) < (((/* implicit */int) (unsigned short)46545)))))) * (((((/* implicit */_Bool) var_9)) ? (arr_86 [i_0] [i_22 - 1]) : (arr_86 [i_0] [i_22 - 1]))));
                var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46524))) >= (3779187537930526244ULL))) ? ((~(arr_14 [i_0] [i_22 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)3907)))) : (min((3779187537930526244ULL), (((((/* implicit */_Bool) 2491338225629121641ULL)) ? (11040108074252002603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_29 = 0; i_29 < 12; i_29 += 3) 
                {
                    var_58 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_73 [i_0] [i_28] [i_0 + 1] [i_22 + 1] [i_0 + 1] [i_22 + 1] [i_22 - 1]), (arr_73 [i_0 + 3] [i_22] [i_0 + 1] [i_22 - 1] [i_22 - 1] [5ULL] [i_28]))))));
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26088))) ^ (min((arr_39 [i_0] [(unsigned short)0] [i_22] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)59546))))));
                }
            }
            var_60 = ((((((/* implicit */_Bool) max(((unsigned short)21891), ((unsigned short)14253)))) && (((/* implicit */_Bool) 3975569445642407156ULL)))) ? (min((7406635999457549013ULL), (((/* implicit */unsigned long long int) (unsigned short)35814)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_22] [i_22] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22]))) * (arr_79 [i_22] [(unsigned short)5] [i_0] [i_22 + 1]))));
            var_61 = var_0;
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_30 = 2; i_30 < 14; i_30 += 3) 
    {
        for (unsigned short i_31 = 1; i_31 < 14; i_31 += 2) 
        {
            for (unsigned long long int i_32 = 0; i_32 < 15; i_32 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_33 = 0; i_33 < 15; i_33 += 1) 
                    {
                        for (unsigned short i_34 = 0; i_34 < 15; i_34 += 3) 
                        {
                            {
                                arr_106 [(unsigned short)8] [i_31] [(unsigned short)8] [10ULL] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_103 [i_31 - 1] [i_31 - 1] [i_30 + 1])) : (((/* implicit */int) arr_103 [i_31 - 1] [i_31 - 1] [i_30 + 1])))));
                                arr_107 [i_31] [i_30] [i_30 + 1] [i_30] [3ULL] = ((/* implicit */unsigned short) ((min((14313928799058538331ULL), (5645056869008362288ULL))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((6668083805379633725ULL) > (var_1))))) % (17406433655184661444ULL)))));
                            }
                        } 
                    } 
                    arr_108 [i_30 - 1] [i_32] [i_30 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17406433655184661444ULL)) && (((/* implicit */_Bool) 2021538867175262356ULL))));
                }
            } 
        } 
    } 
    var_62 = min((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))));
}
