/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77002
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(5469173905367324214ULL)))))) ? (((/* implicit */int) (short)941)) : (((/* implicit */int) ((unsigned char) ((short) var_3))))));
    var_19 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)208)), (12977570168342227402ULL)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_6)), (min((arr_4 [i_1] [(short)8]), (arr_4 [(signed char)16] [(unsigned char)6]))))), (((((/* implicit */_Bool) ((5469173905367324185ULL) & (((/* implicit */unsigned long long int) -3697899552324801807LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3776))) : (arr_4 [i_0 + 1] [6U]))))))));
                var_21 = ((/* implicit */int) ((unsigned char) ((unsigned short) arr_1 [i_0 + 1])));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_0] = arr_7 [i_0];
                            var_22 += ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)11999)) : (((/* implicit */int) arr_10 [(short)12])));
                        }
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12432145421553116857ULL)) ? (((/* implicit */int) (short)-9778)) : (var_5))))));
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25268))) - (var_0)));
                            var_24 = ((/* implicit */unsigned int) arr_1 [i_1]);
                            var_25 += ((/* implicit */unsigned char) (short)25267);
                            var_26 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_21 [18U] [i_2] [i_1 - 1] [18U] &= arr_20 [(short)20] [i_6] [i_3] [i_2] [i_0 - 1] [i_0 - 1] [(short)20];
                            var_27 -= ((/* implicit */short) arr_19 [i_0] [i_0] [i_0 - 1] [i_1 + 2] [i_3 - 1]);
                            var_28 *= ((/* implicit */unsigned char) var_5);
                            var_29 = ((/* implicit */unsigned long long int) var_5);
                            arr_22 [i_0] [10U] [i_2] [i_3] [i_3] [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [4ULL] [i_6] [i_6] [i_3 - 1] [i_2] [i_1] [4ULL]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned int) arr_10 [i_7])))));
                            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -524288)))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_7] [i_7] [i_0 - 1] [i_0] [i_0] [i_0])))));
                        }
                        arr_26 [i_0] [i_2] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-25274)) ^ (var_5)));
                        var_32 -= ((/* implicit */short) ((unsigned char) (unsigned char)224));
                        var_33 = ((/* implicit */short) ((((/* implicit */long long int) var_7)) - (((8605837335968950074LL) % (((/* implicit */long long int) var_4))))));
                        var_34 = ((/* implicit */unsigned int) var_12);
                    }
                    for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        var_35 -= ((((/* implicit */_Bool) 576456354256912384ULL)) ? (583947276U) : (453208622U));
                        arr_30 [i_0] = ((/* implicit */unsigned int) ((min((var_11), (((/* implicit */long long int) var_16)))) - (((/* implicit */long long int) ((((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-25268))))))))));
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)10505)), (((((/* implicit */int) arr_20 [i_0] [i_1 + 3] [i_0] [i_8 - 1] [i_1] [i_0 + 1] [(short)0])) + (((/* implicit */int) var_17))))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_25 [(unsigned short)18])), (((((/* implicit */int) arr_28 [i_0] [i_1] [i_8])) * (((/* implicit */int) arr_17 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_1] [i_2] [i_8 - 1]))))))) : (max((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [(unsigned char)14] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) 4026531840U)) : (-4203478338722911593LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))));
                    }
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_24 [20ULL]))))))))));
                    /* LoopSeq 3 */
                    for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        arr_33 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_9]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)23716)))))), (var_9)));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_36 [i_0] [i_1 - 2] [i_2] [i_9 - 1] = ((/* implicit */unsigned short) ((arr_27 [i_0] [i_1 + 1] [i_2] [(short)19]) * (min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_0])) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))), (var_9)))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [i_0]), (((/* implicit */short) var_8))))) ? ((-(((/* implicit */int) arr_23 [i_0] [i_9 - 1] [i_9 - 1] [i_0] [i_10] [i_10] [i_10])))) : (((/* implicit */int) ((4268485189U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            arr_37 [i_0 + 1] [i_1 + 2] [i_0 + 1] [i_0 + 1] [i_9] &= ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [i_9] [i_9] [i_10] [i_1 - 2]);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                        {
                            arr_41 [i_0] [i_0] [i_2] [1ULL] [0U] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_9 - 2] [i_11]))) : (var_9));
                            var_39 = var_2;
                        }
                    }
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_40 = ((/* implicit */short) var_11);
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 3; i_13 < 18; i_13 += 1) 
                        {
                            arr_47 [i_0] [i_0] [(unsigned char)1] [i_12] [12] [i_2] = ((/* implicit */short) ((unsigned long long int) 2291861833U));
                            var_41 = ((unsigned int) arr_7 [i_0]);
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_2] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)12282)), (var_7)))) - (max((arr_43 [(_Bool)1] [i_1] [i_0]), (((/* implicit */unsigned int) var_12))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 2] [i_0 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) / (9091643001407892022ULL)))))));
                        arr_50 [i_0] [i_1] [i_0] [i_14] = ((/* implicit */short) (+((~(((/* implicit */int) var_17))))));
                        var_43 &= ((/* implicit */int) arr_6 [(short)2] [(short)16] [i_2] [i_14]);
                        arr_51 [i_0] [i_0] [i_2] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21229))) < (((unsigned long long int) arr_29 [i_0 - 1] [i_1] [i_2] [i_14]))));
                    }
                    var_44 = var_0;
                }
                for (short i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 19; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_59 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_7)), (var_0)));
                                var_45 = ((/* implicit */signed char) ((min((((((/* implicit */int) var_1)) < (((/* implicit */int) var_6)))), (((_Bool) (short)12010)))) ? (((/* implicit */unsigned long long int) ((var_0) / (arr_39 [i_0] [i_0 + 1] [i_0] [i_16 + 2])))) : (var_3)));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned int) 576456354256912383ULL);
                }
                for (short i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
                {
                    arr_63 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(max((var_11), (((/* implicit */long long int) ((unsigned short) var_16)))))));
                    var_47 &= ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-16752), ((short)-25268)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55261))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */long long int) arr_0 [12U] [(short)18])), (var_11)))))));
                    var_48 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)127))));
                    var_49 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) ((unsigned short) arr_10 [2LL]))), (max((12977570168342227430ULL), (((/* implicit */unsigned long long int) (short)4604))))))));
                }
                for (unsigned char i_19 = 1; i_19 < 20; i_19 += 3) 
                {
                    var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17870287719452639216ULL)) ? (min((((/* implicit */int) (unsigned char)125)), (arr_11 [i_0] [i_1] [i_19 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */int) arr_44 [i_0] [i_0] [4] [i_19] [i_0] [i_1] [i_0]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */unsigned long long int) var_7)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) << (0U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1]))) | (var_14))))))))));
                    arr_67 [i_0] [i_1 + 2] [i_19] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (((-(((/* implicit */int) (short)348)))) > (((/* implicit */int) (short)32751))))), (arr_9 [15LL] [i_0] [i_0] [i_1 - 2] [(short)7] [i_19 + 1])));
                }
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40483)) / (((/* implicit */int) (short)-20383))))) ? (((((/* implicit */int) ((short) var_11))) * ((+(((/* implicit */int) (signed char)-50)))))) : (((/* implicit */int) ((unsigned char) (short)-25278)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        for (short i_21 = 4; i_21 < 14; i_21 += 2) 
        {
            {
                var_52 += ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_56 [i_20] [i_20] [i_20] [i_20] [8])), (((((/* implicit */_Bool) var_6)) ? (arr_15 [(_Bool)1] [i_21 + 1] [i_21 - 3] [i_21 + 1] [i_21 - 2]) : (arr_15 [i_21] [i_21 - 2] [i_21 - 2] [i_21 - 3] [i_21 - 4])))));
                /* LoopSeq 3 */
                for (long long int i_22 = 1; i_22 < 13; i_22 += 1) 
                {
                    var_53 = ((/* implicit */short) (-(var_4)));
                    arr_74 [i_20] [i_21 - 4] [i_21] &= ((/* implicit */unsigned char) var_14);
                    arr_75 [i_20] [15] [i_20] [i_22] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                    var_54 -= ((/* implicit */_Bool) (short)10551);
                }
                for (unsigned int i_23 = 0; i_23 < 16; i_23 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_24 = 3; i_24 < 15; i_24 += 1) /* same iter space */
                    {
                        var_55 = ((/* implicit */_Bool) (short)9176);
                        var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) var_6))));
                    }
                    /* vectorizable */
                    for (unsigned char i_25 = 3; i_25 < 15; i_25 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_26 = 0; i_26 < 16; i_26 += 4) /* same iter space */
                        {
                            var_57 = ((/* implicit */unsigned int) (-(arr_69 [i_21 + 1])));
                            var_58 = ((/* implicit */unsigned int) arr_46 [i_20] [i_21 + 1] [(unsigned short)2] [i_25 + 1] [i_26] [i_21]);
                            var_59 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_26])) ^ (((/* implicit */int) (short)13521))));
                        }
                        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 4) /* same iter space */
                        {
                            var_60 = ((/* implicit */int) var_12);
                            arr_87 [i_20] [i_21 + 2] [i_23] [i_25 - 1] [i_27] = ((short) arr_39 [i_20] [i_21 - 2] [i_25 - 2] [i_25 - 1]);
                            var_61 += ((/* implicit */long long int) 2653211686U);
                            var_62 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))));
                        }
                        for (unsigned char i_28 = 0; i_28 < 16; i_28 += 4) /* same iter space */
                        {
                            var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) (((~(1132106648U))) < (var_9))))));
                            var_64 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50219)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) : (4099915079U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))));
                            var_65 &= ((/* implicit */unsigned char) (+(arr_27 [i_20] [i_20] [i_20] [i_20])));
                        }
                        arr_92 [i_20] [(unsigned char)13] [i_21] [i_21] [i_20] = (i_20 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_5 [i_20] [i_25 - 2] [i_21 - 2] [i_20])) * (((/* implicit */int) arr_5 [i_20] [i_25 - 3] [i_21 + 1] [i_20]))))) : (((/* implicit */short) ((((/* implicit */int) arr_5 [i_20] [i_25 - 2] [i_21 - 2] [i_20])) / (((/* implicit */int) arr_5 [i_20] [i_25 - 3] [i_21 + 1] [i_20])))));
                        var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) (+(((/* implicit */int) arr_19 [i_20] [i_21] [i_23] [i_23] [i_25 + 1])))))));
                        var_67 = ((/* implicit */unsigned long long int) max((var_67), (((/* implicit */unsigned long long int) (((+(-7340335409761838957LL))) ^ (((/* implicit */long long int) arr_39 [i_23] [i_21] [i_25 - 3] [i_25])))))));
                    }
                    var_68 = ((((arr_15 [i_21 + 2] [i_21 + 1] [i_21 + 2] [i_21 - 3] [i_21]) != (arr_15 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 + 2] [i_21 + 2]))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_21] [i_20]))));
                    arr_93 [(short)15] [i_20] = ((/* implicit */int) arr_20 [i_20] [i_21 + 2] [17ULL] [i_20] [i_21 + 1] [i_20] [i_20]);
                    var_69 = ((/* implicit */long long int) ((short) (short)13532));
                }
                /* vectorizable */
                for (unsigned int i_29 = 0; i_29 < 16; i_29 += 4) /* same iter space */
                {
                    var_70 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15316)) << (((((/* implicit */int) (short)22494)) - (22477)))));
                    arr_96 [i_20] = ((/* implicit */unsigned long long int) (short)12282);
                    var_71 = (i_20 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_83 [i_20] [i_21] [i_21 - 1]) << (((arr_83 [i_20] [i_20] [i_21 + 2]) - (2119618702327396190ULL)))))) : (((/* implicit */unsigned int) ((arr_83 [i_20] [i_21] [i_21 - 1]) << (((((arr_83 [i_20] [i_20] [i_21 + 2]) - (2119618702327396190ULL))) - (9366555513736168974ULL))))));
                    var_72 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_89 [i_21 - 3] [(_Bool)1] [1U] [i_21] [i_21 - 1] [i_29] [i_29])) ? (((/* implicit */int) arr_89 [i_21 + 2] [i_21] [i_21 - 1] [(short)13] [i_21 + 1] [i_29] [i_29])) : (((/* implicit */int) arr_89 [i_21 - 3] [i_21] [i_21 + 2] [i_21] [i_21 - 3] [i_21 - 3] [i_29]))));
                    var_73 = ((/* implicit */int) max((var_73), ((+(((/* implicit */int) (short)9176))))));
                }
                var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) (((-(max((var_3), (((/* implicit */unsigned long long int) arr_56 [i_21] [i_21] [i_21 - 4] [i_20] [i_20])))))) != (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_23 [i_21] [i_20] [i_20] [i_20] [i_20] [i_20] [i_21 - 2])) ? (((/* implicit */int) (short)-12283)) : (((/* implicit */int) var_17))))))))))));
                /* LoopSeq 1 */
                for (short i_30 = 0; i_30 < 16; i_30 += 1) 
                {
                    var_75 = ((/* implicit */unsigned long long int) max((var_75), (((/* implicit */unsigned long long int) arr_58 [i_30] [i_30] [i_30] [i_21] [i_20]))));
                    var_76 &= ((/* implicit */unsigned int) (-(var_5)));
                }
                var_77 = arr_88 [i_20] [i_20] [i_20] [i_21 + 1] [i_21 - 1] [(short)10] [i_21];
            }
        } 
    } 
}
