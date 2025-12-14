/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60026
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) 2919711534639815608LL);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [(signed char)14]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_13 [i_1] [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) 2919711534639815587LL);
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            arr_18 [(unsigned short)3] [i_1] [i_1] [i_2] [i_0] [i_4 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9791633230788115359ULL))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_0))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_21 &= ((/* implicit */_Bool) (((-(18446744073709551615ULL))) & (var_3)));
                            var_22 ^= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) var_15))) | (-2919711534639815609LL)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_3] [i_1] [i_2])))))));
                            var_24 |= ((/* implicit */_Bool) ((arr_5 [i_2] [i_3 - 2] [i_2]) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_2] [(_Bool)0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)57)))))));
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_3 - 2] [i_6] [i_6 + 1] [i_6 + 1] [i_2])) ? (-2919711534639815605LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_24 [i_1] [i_1] [i_2] [i_3 - 3] &= ((/* implicit */unsigned char) arr_4 [4ULL]);
                            var_25 = var_14;
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_26 *= ((/* implicit */_Bool) (-(arr_5 [i_2] [0ULL] [i_2])));
                            var_27 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                        }
                    }
                } 
            } 
            arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_25 [i_1]);
            arr_28 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_0] [i_0] [i_1]);
            arr_29 [8U] &= ((/* implicit */unsigned short) 2919711534639815608LL);
        }
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 3; i_9 < 14; i_9 += 1) 
            {
                var_28 = var_16;
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    var_29 *= ((/* implicit */unsigned int) arr_31 [i_9] [i_10]);
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_30 += (unsigned char)194;
                        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)30)) ? (10366930853268681455ULL) : (((/* implicit */unsigned long long int) 0U))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
                    {
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_10] [i_10 + 1] [i_9 - 2] [i_8 + 2] [i_0])) ^ (((/* implicit */int) arr_26 [i_8 - 2] [i_10 - 2] [i_9 - 2] [i_8 - 2] [5U]))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (unsigned char)30))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_50 [(unsigned char)4] [(unsigned char)4] [i_10 - 2] [i_13] &= (!(((/* implicit */_Bool) -2919711534639815609LL)));
                        var_34 *= ((/* implicit */_Bool) (+(var_0)));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (-5223103547851961723LL))))));
                    }
                    var_36 = ((((/* implicit */int) arr_8 [i_8 - 2])) > (((/* implicit */int) arr_8 [i_8 - 2])));
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_54 [i_14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -2919711534639815609LL);
                    var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_8 - 2] [i_9 + 1])) ? (arr_47 [i_8 - 2] [i_9 + 1]) : (arr_47 [i_8 - 2] [i_9 + 1])));
                    arr_55 [i_0] = ((/* implicit */short) ((arr_46 [i_9 - 1] [i_9 - 1] [i_8 - 1]) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0])))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    var_38 = ((/* implicit */unsigned char) min((var_38), ((unsigned char)194)));
                    var_39 = ((/* implicit */_Bool) min((var_39), ((((_Bool)1) && (((((/* implicit */int) (unsigned char)84)) != ((-(((/* implicit */int) (unsigned char)200))))))))));
                }
                for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) var_2);
                        arr_63 [i_16] [i_8] [i_9] [i_16] [i_16] [i_16] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_16] [i_8 + 2] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) == (arr_52 [i_17] [i_16] [i_8] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_21 [i_16] [i_17] [12LL] [i_9 - 2] [i_0] [i_16])) : (((/* implicit */int) arr_34 [i_17] [i_9 - 1] [14LL]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_17] [i_16] [(unsigned char)1] [i_8] [i_0])) ^ (((/* implicit */int) arr_36 [i_8] [i_9 - 1] [i_16])))))))) : (((/* implicit */int) arr_11 [i_8 - 1]))));
                    }
                    for (signed char i_18 = 2; i_18 < 13; i_18 += 3) 
                    {
                        var_41 = ((/* implicit */short) (~(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (signed char)-63)))))));
                        var_42 = ((((/* implicit */int) (signed char)-63)) >= (((/* implicit */int) (_Bool)0)));
                    }
                    for (signed char i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        arr_70 [i_0] [i_8] [(signed char)6] [i_16] [i_19] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)16611))));
                        var_43 |= (((-(var_17))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_39 [i_0] [i_16] [i_9 - 2] [i_0] [i_0]))))) : ((((_Bool)0) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_16] [10U] [i_16]))))))) - (18446744073709536139ULL))));
                        arr_71 [i_0] [i_16] [i_0] [i_0] [i_0] &= 14873372236365857933ULL;
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2919711534639815607LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2919711534639815609LL))))));
                    }
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_8 + 2] [i_9] [i_16] [i_0] [i_0]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (arr_56 [i_9 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    var_46 &= ((/* implicit */short) arr_21 [i_0] [i_0] [i_8] [i_9] [i_16] [i_16]);
                }
            }
            for (unsigned long long int i_20 = 2; i_20 < 12; i_20 += 2) 
            {
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10073501724730658052ULL)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (short)32749)))))));
                var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */int) (short)-12464)) ^ (((/* implicit */int) (_Bool)1)))))));
            }
            for (long long int i_21 = 4; i_21 < 12; i_21 += 4) 
            {
                var_49 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_8] [i_8] [i_8 - 1] [(unsigned char)6] [(short)2]))));
                var_50 &= ((/* implicit */_Bool) max((((var_14) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)57545)) : (((/* implicit */int) arr_21 [i_21] [i_21 + 1] [i_0] [(short)14] [i_8] [i_21])))) : (((/* implicit */int) arr_3 [i_21])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                arr_76 [i_0] [(signed char)0] [i_0] [i_21] = arr_47 [i_8 + 1] [i_8];
            }
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0])) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3276))))));
            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) (((~(18446744073709551612ULL))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11880862931106332698ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-28703))))) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (11324036826262524467ULL))))))))));
            var_53 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (17943856649814218322ULL) : (((/* implicit */unsigned long long int) 3U))));
        }
        for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
        {
            var_54 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [14LL] [i_22] [i_22]))) | (19ULL)))) ? (((/* implicit */int) (unsigned char)77)) : ((((_Bool)1) ? (((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [i_0] [i_22])) : (((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0))))))));
            var_55 += ((/* implicit */unsigned char) min((min((arr_14 [i_0] [i_0] [i_0] [i_22] [i_22]), (((/* implicit */unsigned short) (_Bool)1)))), (max((arr_14 [i_22] [i_22] [i_22] [14LL] [i_0]), (arr_14 [i_0] [i_22] [i_22] [i_22] [i_0])))));
        }
    }
    for (unsigned char i_23 = 3; i_23 < 14; i_23 += 4) 
    {
        var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) & ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_0))))))))));
        arr_81 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_5 [i_23] [i_23] [i_23 - 3])) : ((~(4382764816043107971ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_24 = 3; i_24 < 16; i_24 += 2) 
    {
        var_57 = ((/* implicit */unsigned char) (short)-2737);
        var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) (+(var_0))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_25 = 1; i_25 < 17; i_25 += 1) /* same iter space */
    {
        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) arr_85 [i_25] [i_25]))));
        arr_87 [15LL] [i_25 + 1] = ((/* implicit */unsigned short) (_Bool)0);
        var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
    }
    for (unsigned char i_26 = 1; i_26 < 17; i_26 += 1) /* same iter space */
    {
        var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_85 [14LL] [i_26 - 1])) : (((/* implicit */int) arr_85 [i_26] [i_26 - 1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_85 [(short)12] [i_26 - 1]))))) : ((-(arr_88 [i_26] [i_26])))));
        /* LoopNest 2 */
        for (long long int i_27 = 4; i_27 < 15; i_27 += 3) 
        {
            for (unsigned char i_28 = 2; i_28 < 18; i_28 += 4) 
            {
                {
                    var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (arr_88 [i_27 + 4] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_27 - 1] [(_Bool)1] [i_26 + 1] [i_28 - 2]))))))))));
                    arr_94 [i_26] [i_26] [i_28] = ((/* implicit */unsigned char) arr_88 [i_28] [i_26]);
                    var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((15U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (short)0)))))));
                    arr_95 [i_26] [i_27 - 1] [i_27 - 1] [i_27 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    }
}
