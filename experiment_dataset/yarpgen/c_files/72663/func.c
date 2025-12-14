/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72663
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
    var_11 = ((/* implicit */_Bool) (-(max((max((var_3), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-108)))))))));
    var_12 -= ((/* implicit */long long int) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) + (4682973043339423075LL)));
        var_14 -= ((/* implicit */signed char) ((((((-4682973043339423076LL) + (9223372036854775807LL))) >> (((var_3) - (2733387487U))))) ^ (((4682973043339423083LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32751)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_15 = (((-(4682973043339423083LL))) % (arr_3 [i_1] [i_1]));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((-(17518849142506605537ULL))) >> (((((/* implicit */int) arr_2 [i_1])) - (17962))))))));
        var_17 -= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)234))))) == (((arr_3 [i_1] [i_1]) | (var_2)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_6 [i_2] = ((/* implicit */unsigned char) (~(arr_3 [i_2] [i_2])));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_2))))));
        var_19 -= ((((/* implicit */int) arr_0 [i_2] [i_2])) ^ (((/* implicit */int) arr_0 [i_2] [(signed char)3])));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */int) ((((((/* implicit */long long int) 1170364404)) + (5196698531744941005LL))) << (((/* implicit */int) (signed char)0))));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_20 = ((((/* implicit */_Bool) (~(var_10)))) ? ((~(var_10))) : (((/* implicit */int) arr_12 [i_4] [i_3])));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((signed char) 4682973043339423065LL));
                var_21 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_3]))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_7] [i_7]))))) - (var_2)))));
                    var_24 -= ((/* implicit */signed char) ((((var_8) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)0)))))));
                }
                for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) -6570960257117544195LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : ((-9223372036854775807LL - 1LL))));
                    var_26 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_8 + 2] [i_3] [i_8 + 1] [i_8 + 3] [i_3] [i_3]))));
                    var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (short)32767))));
                }
                var_28 -= ((/* implicit */int) ((arr_0 [i_3] [i_3]) ? (arr_19 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4))))));
                var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_20 [i_3] [i_4] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_13 [(short)13] [i_4] [6U] [i_6])) ? (arr_24 [i_3]) : (15774512094877038835ULL)))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
            {
                arr_27 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (signed char)-95))));
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    var_30 -= ((/* implicit */signed char) ((long long int) ((unsigned long long int) (signed char)127)));
                    var_31 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    var_32 -= ((/* implicit */short) ((long long int) arr_23 [i_3] [i_9] [i_4] [i_4] [i_9] [i_3]));
                    var_33 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) / (-9223372036854775805LL)));
                    var_34 = ((/* implicit */unsigned long long int) (unsigned char)77);
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */long long int) arr_7 [i_3] [(signed char)1]);
                    arr_32 [i_9] [14LL] [14LL] = ((/* implicit */int) var_8);
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [i_4])) ? (arr_22 [i_3] [i_3] [i_3] [i_3]) : (arr_22 [i_3] [i_3] [i_3] [i_3])));
                }
                for (signed char i_12 = 3; i_12 < 18; i_12 += 1) 
                {
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) -9223372036854775799LL))));
                    var_38 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 2939166891430679657ULL)) ? (arr_18 [i_3] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_3] [(signed char)16] [i_3] [i_9] [i_3] [i_3]))))));
                }
                arr_35 [i_9] [i_4] [1] = ((/* implicit */int) arr_13 [i_3] [i_9] [i_9] [i_3]);
            }
        }
        for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (short)-32767))));
            var_40 = ((/* implicit */int) ((_Bool) ((short) arr_36 [i_13] [i_13] [i_13])));
            var_41 -= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3])) == (arr_14 [(short)13] [i_13] [i_3])));
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_20 [i_3] [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) arr_36 [i_3] [i_3] [i_3])) : (var_2))) : (arr_3 [i_3] [i_3]))))));
        }
        for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_43 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 0LL)))));
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 18; i_15 += 1) 
            {
                for (long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    {
                        var_44 -= ((/* implicit */unsigned char) (short)-7251);
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 2; i_17 < 19; i_17 += 1) 
                        {
                            arr_48 [i_3] [13LL] [i_3] [i_14] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_14])) ? (((/* implicit */int) (signed char)127)) : (var_10)));
                            var_45 = (~(((/* implicit */int) ((short) arr_11 [(short)17]))));
                            var_46 = ((/* implicit */short) ((7860987616987642022LL) << (((((arr_21 [i_16] [i_16 + 1] [i_16 - 1] [i_16 + 2] [i_16 + 2]) + (3136575434709575097LL))) - (14LL)))));
                            var_47 -= ((((/* implicit */_Bool) ((unsigned char) var_6))) || (((/* implicit */_Bool) ((long long int) var_7))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) -4432710697945613700LL))));
                            var_49 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_3] [9ULL] [i_15] [i_16 + 1] [i_15 - 1] [i_15])) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_14] [i_16 + 3] [i_15 + 2] [i_3])) : (((/* implicit */int) arr_33 [i_14] [i_15] [i_15] [i_16 + 3] [i_15 + 2] [11]))));
                        }
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned char) (short)15);
                            var_51 = ((((/* implicit */_Bool) ((207131146) + (((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_19 [i_3] [i_15 + 1] [i_15] [i_16 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) >= (8500720070363280315LL))))));
                            var_52 = arr_12 [i_19] [i_19];
                            var_53 = ((/* implicit */long long int) arr_45 [i_3] [i_14] [i_15] [i_14] [13LL]);
                        }
                        var_54 -= ((unsigned int) ((15900058135310104998ULL) >= (((/* implicit */unsigned long long int) 7860987616987642022LL))));
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((unsigned long long int) ((unsigned int) (short)20364))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_20 = 4; i_20 < 19; i_20 += 1) 
            {
                var_56 = ((short) arr_1 [i_20 - 3] [i_20]);
                /* LoopSeq 3 */
                for (long long int i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    var_57 -= ((/* implicit */long long int) ((arr_13 [i_3] [i_3] [i_20 - 2] [i_3]) & (((/* implicit */unsigned int) ((int) 15900058135310104998ULL)))));
                    var_58 = ((/* implicit */int) max((var_58), (((((/* implicit */_Bool) 8500720070363280315LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((short) 1305380992612950723LL)))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    var_59 = ((/* implicit */signed char) max((var_59), (((signed char) ((((/* implicit */_Bool) (signed char)106)) || (((/* implicit */_Bool) (signed char)63)))))));
                    /* LoopSeq 1 */
                    for (short i_23 = 4; i_23 < 16; i_23 += 1) 
                    {
                        arr_68 [i_14] [i_23 - 4] [i_23 - 4] [i_23 - 4] = ((/* implicit */int) ((long long int) 4100883242909364160LL));
                        var_60 = ((/* implicit */signed char) ((-8500720070363280309LL) > (((/* implicit */long long int) -207131144))));
                        var_61 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [i_3]))))) > (arr_36 [i_3] [i_3] [i_3])));
                        var_62 -= ((/* implicit */unsigned char) ((arr_14 [i_20 - 3] [i_20 - 2] [i_20 - 4]) != (((/* implicit */int) (short)-20364))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        var_63 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_20 - 3] [i_20 - 4] [i_20 - 4] [i_20 - 4] [i_20 - 3] [i_3])) && (((/* implicit */_Bool) -8500720070363280289LL))));
                        var_64 = ((/* implicit */signed char) (~(((long long int) 4100883242909364171LL))));
                        var_65 = ((/* implicit */unsigned char) max((var_65), (((/* implicit */unsigned char) ((((((/* implicit */long long int) 207131144)) >= (var_1))) ? (arr_62 [i_24 + 1] [i_20] [3LL] [i_20 - 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_20 - 1] [i_20 - 2] [i_20]))))))));
                    }
                }
                for (unsigned char i_25 = 0; i_25 < 20; i_25 += 3) 
                {
                    var_66 = ((/* implicit */signed char) ((long long int) arr_63 [17LL] [i_20 + 1] [17LL]));
                    /* LoopSeq 4 */
                    for (int i_26 = 1; i_26 < 17; i_26 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned int) min((var_67), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-20364)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))))));
                        var_68 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)4910)) ? (-9223372036854775797LL) : (-7860987616987642019LL)));
                    }
                    for (unsigned int i_27 = 4; i_27 < 16; i_27 += 4) 
                    {
                        var_69 = ((/* implicit */long long int) min((var_69), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [0ULL] [(unsigned char)19] [i_20] [0ULL] [i_3])))))) : (((((/* implicit */_Bool) (signed char)65)) ? (7860987616987642022LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_70 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-53)) ^ (((/* implicit */int) (short)18454))));
                        var_71 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) % (((((/* implicit */_Bool) -2042469827)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (-4100883242909364171LL)))));
                        arr_81 [(signed char)6] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((short) var_2));
                    }
                    for (long long int i_28 = 0; i_28 < 20; i_28 += 3) /* same iter space */
                    {
                        var_72 = (-(var_8));
                        var_73 = ((/* implicit */signed char) max((var_73), (((/* implicit */signed char) 4020718254U))));
                    }
                    for (long long int i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
                    {
                        var_74 -= ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_20 - 2] [i_20 - 2] [i_20])) - (-1401779065)));
                        var_75 = ((/* implicit */unsigned char) ((7860987616987642022LL) ^ (((/* implicit */long long int) -116658336))));
                    }
                    arr_86 [i_14] [i_25] [i_20 - 4] [i_14] [i_3] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_73 [i_3] [i_14] [i_14] [i_25])) - (((/* implicit */int) arr_73 [i_3] [i_14] [i_20 - 1] [(unsigned char)16]))));
                }
                var_76 -= ((/* implicit */unsigned char) 4649756429644740127LL);
                var_77 -= ((/* implicit */long long int) ((((/* implicit */int) arr_73 [i_3] [i_20 - 3] [i_3] [i_20 + 1])) - (((/* implicit */int) arr_73 [i_3] [i_20 - 4] [i_3] [i_20 - 1]))));
            }
            for (unsigned long long int i_30 = 0; i_30 < 20; i_30 += 1) /* same iter space */
            {
                var_78 -= ((/* implicit */short) ((((((/* implicit */_Bool) 207131140)) ? (2546685938399446642ULL) : (((/* implicit */unsigned long long int) -1LL)))) / (((/* implicit */unsigned long long int) arr_22 [i_3] [i_14] [i_14] [i_30]))));
                var_79 -= ((/* implicit */short) ((((/* implicit */_Bool) 7137738119491012499ULL)) ? (116658350) : (-1146268383)));
            }
            for (unsigned long long int i_31 = 0; i_31 < 20; i_31 += 1) /* same iter space */
            {
                var_80 -= ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 2111062325329920LL)))) >= (var_8));
                var_81 = ((/* implicit */short) max((var_81), (((/* implicit */short) ((2111062325329920LL) / (var_1))))));
                /* LoopSeq 1 */
                for (unsigned char i_32 = 0; i_32 < 20; i_32 += 4) 
                {
                    var_82 -= ((/* implicit */signed char) var_8);
                    var_83 -= ((/* implicit */int) ((long long int) arr_7 [i_31] [i_3]));
                    var_84 = ((/* implicit */int) ((((/* implicit */int) (short)-20362)) > (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (long long int i_33 = 0; i_33 < 20; i_33 += 4) 
                    {
                        var_85 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_31]))));
                        arr_98 [i_31] [i_14] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_96 [i_3] [i_14] [i_14] [i_32])) == (var_1)));
                        var_86 -= ((((/* implicit */unsigned long long int) var_10)) > (arr_76 [i_3] [i_14] [i_31] [i_32] [i_33] [i_14] [i_33]));
                    }
                }
                var_87 = ((/* implicit */signed char) ((_Bool) var_1));
            }
            var_88 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7137738119491012499ULL)) ? (2546685938399446619ULL) : (((/* implicit */unsigned long long int) 380526263623798294LL))))) ? (((unsigned long long int) 6187340731387228923LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198)))));
            var_89 -= ((/* implicit */unsigned long long int) 2099465789U);
        }
        var_90 = ((/* implicit */short) min((var_90), (((short) var_3))));
        var_91 = ((/* implicit */unsigned int) min((var_91), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [(short)7] [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) arr_8 [i_3])))))));
    }
    var_92 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(13027272865338430061ULL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) ? (((((/* implicit */_Bool) 2111062325329941LL)) ? (min((2111062325329941LL), (((/* implicit */long long int) (signed char)76)))) : (((/* implicit */long long int) ((unsigned int) (short)-25876))))) : ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13009))) : (var_8))))));
    var_93 = ((/* implicit */_Bool) max(((-(((2111062325329933LL) / (-4002672601755289053LL))))), (((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (max((((/* implicit */long long int) var_5)), (9223372036854775789LL))) : (((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2111062325329933LL)))))));
}
