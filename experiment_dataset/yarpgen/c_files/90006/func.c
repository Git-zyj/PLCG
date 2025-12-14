/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90006
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
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (max((((((/* implicit */_Bool) 2LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)1166)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_13))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_1 [i_0]) ? (5773397420272048762LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) 2131035886)))) : (((/* implicit */unsigned long long int) 6175223967819697277LL))));
        arr_2 [i_0] = ((/* implicit */signed char) var_6);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(max(((~(-2LL))), (((/* implicit */long long int) var_2))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_4 [i_1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    var_18 = ((_Bool) arr_12 [i_4] [i_4 - 1] [i_4 - 1]);
                    arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) arr_4 [i_4 - 1]));
                    var_19 = ((/* implicit */signed char) ((var_8) << (((((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_4 + 2] [i_3] [i_1] [i_2] [i_1])) ? (arr_16 [i_1] [i_2] [i_4] [i_4] [i_1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) - (11478916740307007086ULL)))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) var_5);
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_2)))))))));
                }
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) arr_15 [8U] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_27 [i_1] [i_6] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177)))))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (2131035911)));
                        var_24 = ((/* implicit */long long int) (~(0ULL)));
                        var_25 = ((/* implicit */int) (-(9223372036854775807LL)));
                        arr_28 [i_1] [i_6] [i_6] [i_6] [(short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_3] [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2]))) : (arr_15 [i_7] [i_3])));
                        var_26 -= ((/* implicit */signed char) -9223372036854775807LL);
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26339))))) % (arr_12 [i_1] [i_1] [i_1])));
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        arr_37 [i_1] [i_1] [i_8] [i_9] = ((/* implicit */unsigned short) (~(arr_8 [i_1])));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8])) ? ((~(15983655771381693586ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_38 [i_1] [i_2] [i_1] [15LL] [i_9] = ((/* implicit */short) ((unsigned int) var_1));
                    }
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) / (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_8] [i_3] [6ULL] [i_1])))));
                        arr_41 [i_1] [i_2] [i_2] [i_8] [i_1] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_8)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_1] [i_2] [i_3] [i_8] [i_10]))))));
                        var_29 = ((/* implicit */long long int) ((short) arr_10 [i_10] [i_2]));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [i_1] [i_2] [i_2] [i_8] [i_11] = ((/* implicit */short) arr_34 [i_1]);
                        arr_46 [i_1] [i_2] [i_3] [i_8] [i_11] = (~((-(arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    var_30 = ((/* implicit */unsigned char) arr_24 [i_1] [i_3] [i_8]);
                }
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    arr_50 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [(_Bool)1] [i_12] [i_12] [i_3] [i_2] [i_12])) ? (((/* implicit */int) var_4)) : (arr_36 [i_1] [i_12] [i_3] [i_3] [i_1])));
                    var_31 = ((/* implicit */unsigned short) var_3);
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((var_4) ? (var_13) : (var_8))) : (((unsigned int) var_11)))))));
                }
                arr_51 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) 5773397420272048762LL);
            }
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                var_33 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_9)))) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_13])) : (max((((/* implicit */unsigned long long int) var_3)), (4811565757417932718ULL)))))));
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((2131035886) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13] [i_13] [i_2] [i_2] [i_1]))) == (arr_48 [i_13] [i_1] [i_1] [0ULL] [i_1] [i_1])))))))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                var_35 = arr_29 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1];
                var_36 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */int) (unsigned char)83)) * (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((arr_42 [i_1] [i_2] [i_14] [i_14] [i_14]) == (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_1] [(unsigned char)4] [(short)2] [i_1] [i_1])))))))), (((max((arr_10 [i_1] [i_1]), (2131035886))) << (((max((((/* implicit */long long int) var_3)), (arr_8 [i_1]))) - (18345LL)))))));
                arr_57 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)97))))) | (((long long int) 2131035899)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_14] [i_14] [(signed char)7] [i_1])) ? (((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-14178))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-14204), (((/* implicit */short) (_Bool)0)))))))))));
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (~(((unsigned int) max(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)))))))));
            }
            var_38 = ((/* implicit */unsigned long long int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)4]);
            var_39 &= ((/* implicit */int) arr_34 [i_1]);
            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((9223372036854775807LL) << (((2131035880) - (2131035880))))) == (((/* implicit */long long int) arr_53 [i_1] [i_1])))))));
            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) max(((((~(var_14))) >= ((~(arr_5 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) <= (4811565757417932718ULL))))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_61 [i_15] [i_15] [i_1] = ((/* implicit */short) max((max((7477755681092368061ULL), (((/* implicit */unsigned long long int) (unsigned char)177)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-14160)), (arr_15 [i_1] [i_1])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) (unsigned short)60565))))))));
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (4811565757417932718ULL)))) != (((((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) var_1))))));
            arr_62 [i_15] [i_15] [i_1] = ((/* implicit */unsigned short) (~(arr_36 [i_1] [i_1] [i_15] [i_15] [i_15])));
            arr_63 [i_15] [i_1] = ((/* implicit */signed char) (~(var_5)));
        }
        for (long long int i_16 = 2; i_16 < 12; i_16 += 3) 
        {
            arr_66 [i_1] [i_16] [i_16 - 1] = max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1])))), (((/* implicit */long long int) (~(((/* implicit */int) ((5773397420272048762LL) < (((/* implicit */long long int) ((/* implicit */int) (short)15913))))))))));
            var_43 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)193)), (arr_21 [i_1] [i_16])))), (min((((/* implicit */unsigned long long int) (signed char)123)), (4811565757417932709ULL))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)193)), (var_8))))));
            arr_67 [i_16] [i_16 + 2] = ((/* implicit */int) (~(arr_21 [i_1] [i_1])));
            /* LoopSeq 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_44 = (i_16 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (((arr_48 [(signed char)3] [(signed char)3] [i_17] [i_16 + 2] [i_16] [i_16]) << (((((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */signed char) arr_29 [i_1] [i_1] [i_16 + 3] [7ULL] [i_17] [i_17]))))) - (120)))))))) : (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (((((arr_48 [(signed char)3] [(signed char)3] [i_17] [i_16 + 2] [i_16] [i_16]) + (9223372036854775807LL))) << (((((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */signed char) arr_29 [i_1] [i_1] [i_16 + 3] [7ULL] [i_17] [i_17]))))) - (120))))))));
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) 13635178316291618898ULL))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                arr_74 [i_16] = (~(max((arr_7 [i_1] [i_1] [i_18]), (((/* implicit */unsigned int) (unsigned short)4953)))));
                var_46 = ((/* implicit */short) (~(((/* implicit */int) ((4811565757417932709ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 542258514211196432LL)) ? (((/* implicit */long long int) 2131035880)) : (-9223372036854775807LL)));
                var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (((-(arr_12 [i_1] [i_16] [i_16]))) << (((/* implicit */int) var_2)))))));
                arr_75 [i_18] [i_16] [i_16] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_26 [i_18] [i_18] [4] [i_16])) != (((((/* implicit */_Bool) var_12)) ? (-9223372036854775807LL) : (((/* implicit */long long int) arr_36 [i_1] [14] [14ULL] [i_18] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                arr_80 [i_1] [i_1] [i_1] [i_16] = ((/* implicit */long long int) (unsigned short)26639);
                arr_81 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6906156594837000379LL)) ? (6150706035702163376ULL) : (((/* implicit */unsigned long long int) 6906156594837000372LL))));
                arr_82 [i_1] [i_16] = ((/* implicit */short) ((unsigned long long int) var_12));
            }
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_20 = 3; i_20 < 15; i_20 += 4) 
        {
            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))));
            arr_86 [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ^ (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(542258514211196432LL)))))) ? (((/* implicit */long long int) ((max((1462535080U), (((/* implicit */unsigned int) arr_58 [15U])))) + (((unsigned int) arr_48 [i_20 - 1] [i_20] [i_1] [10U] [i_20] [i_1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((~(-3290640355097238295LL)))))));
            var_50 = ((/* implicit */int) -542258514211196433LL);
            arr_87 [i_1] [i_20] [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) > (2131035880))), (arr_29 [i_20 - 1] [i_20] [i_20] [i_20 - 3] [i_20 - 1] [i_20 - 2]))))));
        }
        for (unsigned int i_21 = 2; i_21 < 14; i_21 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
            {
                arr_93 [i_1] [i_21 + 2] [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */int) arr_58 [i_21 - 2])) < (((/* implicit */int) arr_58 [i_21 - 1]))));
                var_51 -= ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_21 + 2] [i_21 + 2] [i_21 + 1] [i_21 - 1])) * (((/* implicit */int) arr_11 [i_21 - 2] [i_21 - 2] [i_21 + 1] [i_21 + 2]))));
                var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_21 + 2] [i_21] [i_21] [i_21 + 1] [i_21 + 1])) ? (arr_39 [i_21 + 1] [i_21 + 1] [i_21] [i_21 + 1] [i_21 - 1]) : (4811565757417932707ULL))))));
                arr_94 [i_1] [i_21] [i_22] = (~(var_14));
            }
            for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 4) 
            {
                var_53 = ((/* implicit */unsigned char) ((arr_25 [3ULL] [i_21] [i_21 - 1] [3ULL] [i_21] [i_21]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_21 - 1] [i_21] [i_21 - 2]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_73 [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_78 [i_1] [i_21] [i_1] [i_1]))))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 1; i_24 < 15; i_24 += 4) 
                {
                    var_54 -= ((/* implicit */_Bool) max((((arr_77 [i_21 - 2] [i_24 - 1] [i_24 + 1]) / (arr_77 [i_21 - 2] [i_24 + 1] [i_24 + 1]))), (((((/* implicit */long long int) ((/* implicit */int) arr_29 [(_Bool)1] [11ULL] [i_23] [i_21 - 1] [i_23] [i_24 - 1]))) & (((6906156594837000372LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_21 - 2])))))))));
                    arr_101 [i_1] [i_1] [i_1] [i_23] [i_24] = ((/* implicit */unsigned int) var_14);
                }
                var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((3787154206U), (((/* implicit */unsigned int) 234881024)))), (((/* implicit */unsigned int) (~(var_11))))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_1] [i_23] [i_1]))) - (arr_52 [(unsigned char)0] [i_21 - 1] [i_23]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [(_Bool)1] [(_Bool)1] [i_21 - 2]))))));
            }
            /* LoopSeq 3 */
            for (long long int i_25 = 0; i_25 < 16; i_25 += 4) 
            {
                arr_106 [i_1] [i_21 + 2] [i_25] = ((/* implicit */unsigned char) (~(((long long int) 430134421475143777LL))));
                var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3787154183U)) ^ ((-(6956204867102618013ULL))))))));
            }
            for (unsigned short i_26 = 0; i_26 < 16; i_26 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_27 = 0; i_27 < 16; i_27 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        var_57 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_111 [i_1] [i_21 - 1] [i_1]))))));
                        var_58 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_60 [i_1])))), ((~(((/* implicit */int) max((arr_95 [i_1] [i_21 + 1] [i_1] [i_27]), (arr_90 [i_1] [i_26] [i_28]))))))));
                    }
                    arr_115 [i_1] [i_1] [i_1] [i_27] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (arr_7 [i_1] [i_1] [i_26])))), (13635178316291618898ULL)))));
                }
                var_59 &= ((/* implicit */signed char) -1018401762423528450LL);
            }
            for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
            {
                var_60 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_33 [i_1] [(short)9] [i_1] [i_1] [i_21 + 1] [i_29 - 1] [i_1])))), (((/* implicit */int) ((((/* implicit */long long int) 234881024)) <= (542258514211196432LL))))));
                var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (signed char)-100))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_29 - 1] [i_21] [i_21 - 2] [i_1] [i_1]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1073740800LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_21 + 1] [i_21 + 1] [i_21] [i_29 - 1] [i_29]))) : (arr_70 [i_29 - 1] [i_21 + 2] [i_21 - 1])))))))));
            }
        }
        var_62 -= ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1]);
    }
}
