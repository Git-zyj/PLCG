/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88914
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((12823436563920382990ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2272))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-29))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2276)) && (((/* implicit */_Bool) (short)23817))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) var_14);
                            var_22 = ((/* implicit */unsigned long long int) ((((arr_1 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_16))))) << (((((/* implicit */int) arr_8 [i_1] [i_2] [i_5])) - (139)))));
                            arr_21 [i_0] |= ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)2291))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)84))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))));
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)14482))));
                            var_26 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (signed char)28)) ? (7453015772215505136LL) : (-3315178208412712730LL))));
                            arr_25 [i_3] [i_1] [(unsigned short)3] [i_0] [i_0] = ((/* implicit */long long int) (~(8587679664653969825ULL)));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_30 [i_3] [i_2] = ((/* implicit */long long int) var_7);
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) -1213075674780717633LL))));
                            var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)28))))));
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [(unsigned char)11] = ((/* implicit */unsigned int) (unsigned short)48519);
                        }
                        var_29 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-29))));
                        var_30 = ((/* implicit */long long int) 3317459459U);
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (-7453015772215505138LL) : (((/* implicit */long long int) (-(-1))))));
                    }
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_32 = 2097136U;
                            arr_38 [i_9] &= ((/* implicit */short) ((((/* implicit */int) (signed char)28)) << (((((/* implicit */int) (unsigned short)53314)) - (53311)))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((arr_32 [i_0] [i_0] [i_1 - 2] [i_10]) || (((/* implicit */_Bool) var_5))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_0] [17ULL] [i_0] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_22 [i_2] [12LL] [i_1 - 2] [i_1 + 1])));
                            arr_42 [i_8] [i_2] = ((/* implicit */unsigned char) var_17);
                        }
                        arr_43 [i_8] [(unsigned short)1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 1] [i_2] [i_2] [i_1] [i_1 - 2] [i_1]))) * (var_2)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */short) (+(((/* implicit */int) var_14))));
                                arr_49 [i_1] [(unsigned short)17] [i_2] [i_2] [i_2] [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)17))));
                            }
                        } 
                    } 
                    var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12221)) ? (0) : (((/* implicit */int) (unsigned char)34))));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) arr_6 [i_0]);
        var_38 = ((/* implicit */unsigned char) (unsigned short)53314);
    }
    for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            arr_54 [i_13] [i_13] = ((/* implicit */int) var_8);
            arr_55 [i_13] [i_14] [i_13] = ((/* implicit */long long int) ((unsigned int) (unsigned char)47));
            /* LoopNest 3 */
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) 8191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) : (8226587814503476912ULL))))));
                            var_40 = ((/* implicit */unsigned long long int) (short)2669);
                            var_41 = ((/* implicit */int) arr_65 [i_16] [i_14] [i_13 + 2] [i_13] [i_13 - 2]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_18 = 2; i_18 < 20; i_18 += 4) 
        {
            arr_70 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)12221)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (674723046U)));
            /* LoopSeq 2 */
            for (signed char i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        {
                            arr_77 [i_13] [i_13] [0ULL] [19U] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5866)) ? (674723046U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10)))));
                            var_42 = ((/* implicit */unsigned char) 7453015772215505137LL);
                        }
                    } 
                } 
                var_43 = ((unsigned char) var_14);
                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */long long int) arr_73 [i_13] [i_18] [i_18 - 1] [(unsigned char)5] [i_19])) : (arr_61 [i_13 - 2] [i_13] [i_13 + 1]))))));
                var_45 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_76 [i_13] [i_13 + 1] [i_18 - 1] [i_19] [i_19]))) ? (((/* implicit */int) arr_64 [i_13] [i_13] [i_13 - 2] [i_18 - 1] [i_18])) : (((((/* implicit */_Bool) (short)8820)) ? (1851075054) : (((/* implicit */int) (_Bool)0))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((9006413441379092775LL) / (7453015772215505137LL))))));
                var_47 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (7453015772215505141LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10526)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))) : (var_17)));
                var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) ((-8731489558440588649LL) < (-7453015772215505137LL))))));
                var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14124)) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_13] [i_18 + 1] [i_22] [i_22]))) == (arr_59 [13LL] [i_18] [i_22])))))));
                var_50 = ((/* implicit */unsigned short) (~(2168232210U)));
            }
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19173)) ? ((~(447883675))) : (((/* implicit */int) (short)-2672))));
            arr_80 [i_13] [i_18] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_13))))));
            var_52 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_74 [i_18] [i_18 + 2] [i_18 + 1] [i_18] [i_18 - 1]))));
        }
        var_53 = ((/* implicit */unsigned char) ((min((((long long int) var_4)), (((/* implicit */long long int) arr_66 [i_13 + 2] [i_13 + 1])))) >> (((var_8) - (1529913480U)))));
        var_54 = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)5)), (-6408133872804021392LL)));
    }
    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
    {
        var_55 = ((/* implicit */short) ((((((/* implicit */int) var_11)) != (((/* implicit */int) (short)-2646)))) ? (min(((~(804144044395283176ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-6408133872804021392LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16760832U)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)-64)))))));
        var_56 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-29)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 12; i_24 += 3) 
        {
            for (int i_25 = 1; i_25 < 10; i_25 += 1) 
            {
                {
                    var_57 ^= max((((/* implicit */short) (unsigned char)162)), ((short)-2652));
                    arr_90 [i_25 + 2] [i_24] [i_23] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                    /* LoopSeq 3 */
                    for (unsigned char i_26 = 1; i_26 < 11; i_26 += 2) 
                    {
                        var_58 = ((/* implicit */short) var_0);
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 30U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) ((arr_39 [i_26] [i_25 + 1] [(unsigned char)16] [i_23] [i_23]) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) (unsigned short)5698)) & (((/* implicit */int) (signed char)-108)))))) : ((~(((((/* implicit */_Bool) -6325355789855166862LL)) ? (((/* implicit */int) (unsigned short)63038)) : (((/* implicit */int) (short)1372))))))));
                        var_60 = ((/* implicit */long long int) arr_24 [i_24] [i_24] [i_24] [i_24] [i_24]);
                    }
                    for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
                    {
                        var_61 = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
                        /* LoopSeq 2 */
                        for (unsigned int i_28 = 1; i_28 < 10; i_28 += 2) 
                        {
                            var_62 = ((((/* implicit */_Bool) (short)-2632)) ? (8666507824340401834LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18796))));
                            var_63 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_0))) / (((((/* implicit */_Bool) 1152780767118491648LL)) ? (((/* implicit */int) (unsigned short)18069)) : (((/* implicit */int) (_Bool)1))))));
                            arr_97 [i_23] [i_25] [i_23] [i_23] = min(((short)2665), ((short)-2669));
                        }
                        /* vectorizable */
                        for (unsigned short i_29 = 0; i_29 < 12; i_29 += 3) 
                        {
                            var_64 = ((/* implicit */unsigned char) ((unsigned short) var_7));
                            var_65 = ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17728))))))) + (6U));
                            arr_101 [i_27] [i_23] [i_25 + 1] [i_27] [i_29] = ((/* implicit */int) arr_13 [i_23] [i_24] [i_25] [i_27] [i_29] [i_24]);
                        }
                        var_66 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)-2663)) : (((/* implicit */int) (short)-2663)))), (((/* implicit */int) arr_29 [i_23] [i_24] [i_24] [i_25] [i_25 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_30 = 0; i_30 < 12; i_30 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned char) (+(arr_12 [i_25 - 1] [i_25] [i_25] [i_25 + 2] [i_24])));
                        /* LoopSeq 2 */
                        for (unsigned short i_31 = 1; i_31 < 11; i_31 += 4) 
                        {
                            var_68 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1152780767118491648LL))));
                            arr_107 [i_23] [i_30] [i_25] [i_24] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)2655)) ? (((/* implicit */int) (unsigned short)28610)) : (((/* implicit */int) (_Bool)1))));
                            var_69 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))) : ((~(var_5)))));
                            arr_108 [i_23] [i_23] [i_23] [i_30] [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 373537171)) ? (674723063U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) && (((/* implicit */_Bool) arr_23 [i_25 + 1] [i_25] [i_31 + 1] [i_25 + 1] [i_31]))));
                        }
                        for (short i_32 = 1; i_32 < 11; i_32 += 4) 
                        {
                            arr_111 [i_23] [i_30] [i_23] [i_30] [i_32 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)7325)) : (((/* implicit */int) (unsigned char)157))));
                            var_70 = ((/* implicit */unsigned int) max((var_70), (((/* implicit */unsigned int) arr_71 [i_23] [i_30] [i_32] [i_30]))));
                        }
                        var_71 = ((/* implicit */_Bool) ((-7453015772215505137LL) + (((/* implicit */long long int) 481405738U))));
                        var_72 = ((/* implicit */int) ((unsigned char) (~(373537196))));
                    }
                }
            } 
        } 
        var_73 = ((/* implicit */short) ((((/* implicit */_Bool) 9900785690998801487ULL)) ? (((/* implicit */int) (unsigned short)16248)) : (-413391536)));
    }
    var_74 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) > (max((((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27420))))), (((/* implicit */unsigned long long int) var_9))))));
}
