/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66374
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
    var_12 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = max((max((arr_0 [i_1] [i_1]), (0U))), (min((((/* implicit */unsigned int) (unsigned char)79)), (arr_0 [i_1] [i_0]))));
                var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((max((var_5), (((/* implicit */unsigned short) (short)0)))), (var_6)))), (min((arr_1 [i_0] [(_Bool)0]), (arr_5 [i_0] [i_1] [i_0])))));
                var_15 &= ((/* implicit */short) min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) min(((short)1032), ((short)0)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) min((max((min((arr_15 [i_2] [i_2]), (((/* implicit */int) arr_8 [10LL] [10LL])))), (((/* implicit */int) arr_17 [i_3])))), (((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */int) arr_11 [i_2] [i_3] [7LL])), (((((/* implicit */int) max(((short)0), (((/* implicit */short) arr_10 [(signed char)1] [i_3] [i_3]))))) >> (((/* implicit */int) (short)0)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11)))) > (var_7)));
                        var_19 *= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        arr_23 [i_2] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)0)) * (((/* implicit */int) var_11))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((arr_7 [i_8 - 1] [i_3]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((/* implicit */int) (short)4))))))))))));
                    }
                    arr_24 [i_5] [i_5] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_10 [i_2] [i_3] [i_4])), (max((var_0), (((/* implicit */unsigned int) (signed char)-18)))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_2] [i_2] [i_5] [i_4])))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) max((7572897051065833643ULL), (((/* implicit */unsigned long long int) 3657368715029445120LL))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_4]))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    arr_31 [i_2] [i_2] [i_4] [i_3] [i_3] [(short)10] = ((/* implicit */short) (unsigned short)59771);
                    var_23 = ((/* implicit */_Bool) -244012503);
                }
                var_24 = ((/* implicit */_Bool) 1111321418U);
                arr_32 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */signed char) (unsigned char)255);
            }
            /* vectorizable */
            for (short i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (signed char)-105))));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                {
                    arr_38 [(unsigned short)14] [i_3] [i_11 - 1] [2ULL] = ((/* implicit */unsigned short) arr_14 [i_2] [i_3] [i_3] [i_12] [i_3]);
                    var_26 = ((/* implicit */unsigned short) arr_16 [i_2] [i_2] [i_3] [i_12] [i_2] [i_12] [i_12]);
                    arr_39 [i_3] [i_12] = ((/* implicit */_Bool) arr_18 [i_2] [(signed char)14] [i_2] [i_12] [(signed char)14] [i_12]);
                }
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                {
                    var_27 = (short)1032;
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        var_28 -= ((/* implicit */short) (_Bool)0);
                        arr_46 [10U] [i_3] [i_14] [11LL] [i_11] = 19ULL;
                        arr_47 [i_13] [i_13] [5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) >> (((3670275323U) - (3670275308U)))));
                    }
                    arr_48 [i_2] [12LL] [i_2] [i_11] [i_11 + 1] &= ((/* implicit */signed char) arr_14 [i_11 + 1] [i_3] [i_11] [i_13] [5LL]);
                }
            }
            for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) var_5);
                    var_30 ^= ((/* implicit */unsigned short) (short)-27391);
                    var_31 = ((/* implicit */long long int) (short)26455);
                    arr_53 [i_3] [i_15] [i_16] = (short)-27649;
                }
                for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_18 = 3; i_18 < 15; i_18 += 4) 
                    {
                        var_32 = ((/* implicit */int) min((min(((unsigned short)19265), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (signed char)107))));
                        var_33 = ((/* implicit */short) 2712389191U);
                    }
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) var_5);
                        arr_62 [i_2] [i_19] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */short) arr_44 [i_3] [i_3]);
                        var_35 -= ((/* implicit */unsigned short) min((arr_61 [i_2] [i_3] [i_2] [14ULL] [(signed char)14]), (((/* implicit */int) (unsigned short)0))));
                        arr_63 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) max((arr_50 [i_2] [i_17] [i_15] [i_17]), (min(((short)-4), (arr_50 [i_2] [i_3] [i_15] [2ULL])))));
                    }
                    arr_64 [i_3] [i_3] [(signed char)0] [i_17] = ((/* implicit */unsigned int) (short)-1);
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 17; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_34 [i_3])), (min((((/* implicit */int) (short)0)), (arr_30 [i_2] [i_15] [i_15] [i_2]))))), (((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_3] [i_17] [i_17] [i_3]))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_37 [(unsigned short)12] [i_3] [i_3] [(unsigned short)12] [(unsigned short)6] [6U]))));
                        arr_68 [i_2] [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */int) ((max((-1138374379), (((/* implicit */int) arr_28 [i_2] [i_2] [i_15] [i_3])))) == (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))) >> (((min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) arr_28 [i_20] [i_3] [i_15] [i_3])), (10702925538442294821ULL))))) - (847ULL)))));
                        var_38 = 18446744073709551606ULL;
                    }
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) max((min((arr_25 [i_2]), (((/* implicit */unsigned long long int) arr_57 [i_3] [i_17] [i_15] [i_17] [i_17] [i_2] [i_2])))), (((/* implicit */unsigned long long int) arr_66 [i_2] [4LL])))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (unsigned short)64917))));
                    var_41 &= ((/* implicit */unsigned short) arr_40 [i_2] [(short)12] [i_2] [(short)12] [i_21]);
                }
                var_42 &= ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)10)), (1065488107U)))), (((arr_26 [i_2] [i_3] [i_15] [i_15]) << (((((/* implicit */int) var_10)) - (21381)))))));
                arr_72 [i_2] [i_15] [(unsigned char)6] [i_3] = ((/* implicit */int) arr_49 [i_15] [i_15] [i_15]);
                var_43 = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) (short)0)), (arr_60 [i_2] [i_3] [i_15] [i_15] [i_2]))), (arr_60 [i_2] [i_3] [i_15] [i_3] [i_3])));
            }
            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)0)) % (arr_15 [14LL] [i_3]))))))));
        }
        arr_73 [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)14] [i_2])) / (arr_67 [(unsigned char)1] [i_2]))), (((/* implicit */int) (signed char)(-127 - 1)))));
        arr_74 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_11)), (arr_52 [i_2] [2ULL] [i_2])));
        arr_75 [i_2] = ((/* implicit */signed char) var_8);
        var_45 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)107)), (max((((/* implicit */short) arr_70 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])), (var_3)))))), (min((min((10647487107439273198ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) min((arr_15 [i_2] [i_2]), (((/* implicit */int) (unsigned char)237)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_22 = 1; i_22 < 10; i_22 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_23 = 1; i_23 < 11; i_23 += 4) 
        {
            arr_82 [i_23] [i_23 + 1] [(unsigned char)9] = ((/* implicit */unsigned int) arr_16 [i_22 + 2] [i_23] [i_23] [i_22 - 1] [i_22 + 1] [(short)2] [i_22 + 2]);
            arr_83 [i_23] = ((/* implicit */int) var_9);
        }
        arr_84 [i_22] = ((/* implicit */long long int) ((((/* implicit */int) arr_78 [i_22 + 1])) ^ (((/* implicit */int) arr_78 [i_22 - 1]))));
    }
    /* vectorizable */
    for (long long int i_24 = 1; i_24 < 15; i_24 += 1) 
    {
        var_46 = ((/* implicit */long long int) (unsigned char)8);
        var_47 *= var_10;
        var_48 = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 2 */
        for (int i_25 = 0; i_25 < 19; i_25 += 4) 
        {
            arr_90 [4U] [i_25] [i_24] = ((/* implicit */int) var_9);
            arr_91 [i_24] [(unsigned char)1] = ((/* implicit */unsigned char) -1786772575);
            /* LoopSeq 4 */
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                var_49 = ((/* implicit */unsigned char) arr_89 [(unsigned short)3] [(short)0]);
                var_50 &= ((((/* implicit */int) arr_87 [i_24 + 3] [i_26 - 1] [(unsigned short)16])) - (((/* implicit */int) var_3)));
                var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) 4611686001247518720LL))));
                arr_95 [i_24 + 3] = ((/* implicit */unsigned long long int) (signed char)-108);
            }
            for (unsigned short i_27 = 2; i_27 < 16; i_27 += 1) 
            {
                arr_98 [i_24] [11ULL] [11ULL] [i_24] = ((/* implicit */unsigned char) (short)-4);
                /* LoopSeq 3 */
                for (unsigned int i_28 = 0; i_28 < 19; i_28 += 4) 
                {
                    var_52 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) arr_99 [i_28] [i_27 + 2] [i_24 + 2]))));
                    arr_101 [i_24 + 1] = ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 4 */
                    for (unsigned short i_29 = 0; i_29 < 19; i_29 += 4) /* same iter space */
                    {
                        arr_104 [i_24 + 4] [i_25] [i_24 + 4] [(unsigned short)15] [i_29] = ((/* implicit */int) (signed char)-122);
                        var_53 = ((((/* implicit */int) (short)-5312)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28479))) == (-4611686001247518706LL)))));
                        arr_105 [i_24] = ((/* implicit */unsigned int) arr_87 [(unsigned char)4] [i_25] [i_27]);
                        var_54 = ((/* implicit */_Bool) arr_89 [i_27 - 2] [i_24 + 4]);
                    }
                    for (unsigned short i_30 = 0; i_30 < 19; i_30 += 4) /* same iter space */
                    {
                        var_55 *= ((/* implicit */unsigned int) (short)-5);
                        arr_108 [i_24] [i_25] [i_27 - 1] [i_28] = ((/* implicit */int) ((16850078697298459505ULL) >> (((/* implicit */int) (_Bool)0))));
                        var_56 = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned short i_31 = 0; i_31 < 19; i_31 += 4) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13217))) | (arr_106 [16U] [i_25] [i_27 + 1] [i_28] [i_24 + 1])));
                        arr_111 [i_24 + 3] [i_25] [i_25] = ((/* implicit */signed char) (_Bool)1);
                        var_58 = ((/* implicit */int) max((var_58), (((((((/* implicit */int) (short)-7)) + (2147483647))) >> (((((/* implicit */int) (short)-5157)) + (5186)))))));
                        arr_112 [i_24] [i_28] [i_31] [i_28] [i_25] [i_27] = ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned long long int i_32 = 2; i_32 < 16; i_32 += 3) 
                    {
                        var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) (unsigned short)15))));
                        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((((/* implicit */int) arr_114 [i_28])) >> (((((/* implicit */int) arr_114 [i_25])) - (4948))))))));
                        var_61 = ((/* implicit */unsigned int) arr_88 [i_27 - 1] [i_32 - 2] [i_27]);
                    }
                }
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
                {
                    var_62 = ((/* implicit */_Bool) ((arr_96 [i_24 + 4] [i_27 - 1]) | (((/* implicit */long long int) ((/* implicit */int) (short)240)))));
                    var_63 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_93 [i_24] [i_25])) + (2147483647))) << (((8253309985899415937LL) - (8253309985899415937LL)))));
                    var_64 ^= ((/* implicit */signed char) (unsigned char)138);
                }
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
                {
                    var_65 = ((/* implicit */short) ((((/* implicit */_Bool) 4611686001247518705LL)) && (((/* implicit */_Bool) arr_102 [i_24 + 4] [i_27 - 1] [i_24 + 4] [i_24 + 4]))));
                    /* LoopSeq 2 */
                    for (short i_35 = 0; i_35 < 19; i_35 += 4) 
                    {
                        var_66 = ((/* implicit */short) arr_118 [(short)9] [i_25] [i_24 + 3] [i_34]);
                        var_67 *= ((/* implicit */short) arr_100 [i_24] [(signed char)9] [i_27] [i_24 + 1] [i_27 + 1] [(short)11]);
                        var_68 = var_5;
                    }
                    for (short i_36 = 0; i_36 < 19; i_36 += 1) 
                    {
                        var_69 = ((/* implicit */short) arr_116 [i_24] [i_25]);
                        var_70 = (short)-22953;
                    }
                }
            }
            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
            {
                var_71 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((arr_99 [i_25] [i_25] [16ULL]) - (17098086186422262153ULL)))));
                arr_127 [i_37] = ((/* implicit */unsigned int) var_3);
                arr_128 [i_37] [i_37] [i_37] [i_37] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_119 [i_24] [i_25] [i_37] [17ULL] [(unsigned char)12]))));
            }
            for (unsigned int i_38 = 0; i_38 < 19; i_38 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    for (unsigned long long int i_40 = 1; i_40 < 16; i_40 += 1) 
                    {
                        {
                            var_72 -= ((/* implicit */unsigned char) arr_133 [i_25] [(unsigned short)13] [i_38] [i_39]);
                            arr_136 [i_24] [(short)18] [(signed char)7] [(unsigned short)5] [i_25] [i_40] = arr_86 [i_24];
                            var_73 = ((/* implicit */short) 4611686001247518705LL);
                        }
                    } 
                } 
                arr_137 [i_24 + 2] = ((/* implicit */unsigned char) arr_123 [i_38] [i_25] [i_24 + 1] [i_38] [i_24]);
                var_74 += ((/* implicit */short) var_0);
                arr_138 [i_24 - 1] [i_38] [3ULL] [i_38] = ((/* implicit */int) arr_92 [i_24] [4ULL]);
            }
            /* LoopSeq 1 */
            for (signed char i_41 = 0; i_41 < 19; i_41 += 4) 
            {
                var_75 = arr_109 [i_41] [i_41] [i_41] [i_41] [i_25];
                var_76 += ((/* implicit */unsigned short) (short)23665);
            }
        }
        for (int i_42 = 1; i_42 < 18; i_42 += 4) 
        {
            var_77 = ((/* implicit */unsigned int) ((arr_116 [i_24] [i_42 - 1]) < (arr_85 [i_24] [i_42 - 1])));
            /* LoopNest 3 */
            for (unsigned long long int i_43 = 0; i_43 < 19; i_43 += 4) 
            {
                for (unsigned long long int i_44 = 0; i_44 < 19; i_44 += 4) 
                {
                    for (unsigned long long int i_45 = 2; i_45 < 18; i_45 += 4) 
                    {
                        {
                            arr_154 [i_44] [i_42 - 1] [i_43] [i_44] [i_43] [(unsigned char)15] [i_43] = ((/* implicit */short) arr_110 [i_24] [i_42] [i_43] [i_44] [(_Bool)1]);
                            var_78 &= ((/* implicit */int) ((arr_142 [i_24 + 4] [i_42] [i_43]) >= (arr_142 [i_42] [i_42] [(short)0])));
                            arr_155 [i_24] [i_42 - 1] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_99 [0LL] [i_24 + 3] [i_43])) && (((/* implicit */_Bool) var_1))));
                            arr_156 [i_24] [i_24] = ((/* implicit */short) (unsigned char)243);
                        }
                    } 
                } 
            } 
        }
    }
}
