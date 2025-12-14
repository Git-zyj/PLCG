/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94820
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
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_17) & (((/* implicit */int) var_4))))), (var_6)))), ((~((+(1661897708765727706ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) * (arr_9 [i_0] [(signed char)0] [i_2] [i_3]))))));
                            var_21 ^= ((/* implicit */int) (-(167943041U)));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_0] [1] [i_0] [i_0 + 2] [i_0 - 2] [7ULL] [i_0])))))));
                        }
                        var_23 *= ((/* implicit */_Bool) var_4);
                        arr_14 [(signed char)4] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_3]);
                        var_24 = ((/* implicit */long long int) max((var_24), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_11))) ? (((long long int) arr_4 [i_3])) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_0] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_0]))));
                            arr_18 [6ULL] [6ULL] [i_1] [i_2] [(_Bool)1] [i_5] = ((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 - 1]);
                        }
                    }
                    for (unsigned char i_6 = 3; i_6 < 8; i_6 += 1) 
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) (!(arr_8 [i_0] [i_0] [i_2] [i_6])));
                        var_27 -= ((/* implicit */unsigned long long int) var_17);
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_16 [3ULL] [i_2] [3ULL] [i_1] [i_0] [i_0]))));
                        arr_23 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_8 [8U] [i_1] [i_2] [8U]);
                    }
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_18) : (((/* implicit */long long int) 4127024274U))))) : (852317373603351928ULL));
                    arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_20 [i_1]));
                }
                var_29 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) 6100853013629348716ULL)) ? (18446744073709551609ULL) : (6100853013629348716ULL))), (((/* implicit */unsigned long long int) (~((~(arr_6 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((1319704227U) - (1319704223U)))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_40 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7613140195027770293LL)) ? (arr_31 [i_9 + 1] [i_9]) : (arr_31 [i_9 + 1] [i_9 + 1])))) ? (((((/* implicit */_Bool) ((arr_37 [i_9] [8ULL] [i_9] [i_9]) * (var_1)))) ? ((+(12345891060080202899ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6100853013629348708ULL)) ? (((/* implicit */int) arr_29 [i_12])) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) arr_34 [i_8] [i_9] [i_12])));
                                arr_41 [12LL] [i_9] [i_10] [i_11] [i_12] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + ((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_38 [i_12] [i_11] [i_10] [11ULL] [i_8])) : (13675668137793407872ULL)))))));
                                var_31 = ((/* implicit */unsigned long long int) arr_33 [i_12]);
                            }
                        } 
                    } 
                    arr_42 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_8] [i_9] [i_10] [i_10] [3] [i_9])) ? ((-((+(arr_37 [i_8] [i_8] [i_8] [i_9]))))) : (((/* implicit */unsigned long long int) var_3))));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_32 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) arr_30 [i_8] [i_13]))), ((signed char)9))))) * ((+(arr_44 [i_10] [i_9] [16ULL])))));
                        var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_8))), ((-(((/* implicit */int) (unsigned char)97))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (4446216893724357430LL)))), (15361207291446369509ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            arr_50 [i_8] [i_9] [i_10] [i_14] [i_15] = var_3;
                            arr_51 [i_14] [i_9] [i_10] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) (-(arr_30 [i_9 + 1] [i_9 + 1])));
                        }
                        arr_52 [i_8] [i_8] [(signed char)8] [(signed char)6] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9] [i_9 + 1])) ? (arr_31 [(signed char)16] [i_9 + 1]) : (arr_31 [i_9] [i_9 + 1])));
                        var_34 = ((/* implicit */long long int) arr_31 [i_9 + 1] [i_8]);
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        arr_55 [i_9] = ((/* implicit */unsigned long long int) (~(1319704230U)));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_54 [i_8] [i_9] [i_9] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_54 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]))));
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(6100853013629348716ULL))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_61 [i_18] = ((/* implicit */signed char) ((var_14) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_18] [i_18] [i_18] [i_18] [i_17])) ? (((/* implicit */int) arr_32 [i_17] [i_17] [i_18])) : (((/* implicit */int) (_Bool)1)))))));
            var_37 = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_17] [i_17]))));
        }
        var_38 = ((((/* implicit */_Bool) min((arr_26 [i_17]), (((/* implicit */unsigned long long int) arr_57 [i_17] [i_17]))))) ? (arr_48 [i_17] [i_17] [i_17] [6] [(signed char)8]) : (arr_48 [i_17] [i_17] [i_17] [(signed char)10] [i_17]));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) 
    {
        var_39 ^= ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((9223372036854775807LL) / (-1897927112007832399LL)))), (arr_48 [i_19] [(signed char)16] [i_19] [(signed char)16] [i_19])))));
        /* LoopSeq 1 */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) arr_45 [i_20 - 1] [(unsigned char)0] [i_19] [6U]))));
            arr_68 [i_19] [i_20] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (0ULL) : (var_10))))))), (arr_62 [i_19])));
            arr_69 [(signed char)6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [(_Bool)1])) ? (arr_30 [i_20 - 1] [i_20 - 1]) : (arr_60 [14ULL])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [4ULL])) ? (var_1) : (5ULL)))) ? (max((var_16), (((/* implicit */unsigned long long int) var_6)))) : (max((arr_58 [i_20] [i_19]), (var_11))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_33 [i_20 - 1])) : (arr_63 [i_20 - 1])))));
        }
        arr_70 [12LL] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_17)))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (min((17594426700106199706ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (max((((((/* implicit */_Bool) arr_72 [(_Bool)0])) ? (arr_72 [20LL]) : (var_11))), (((/* implicit */unsigned long long int) min((-7454096811653795879LL), (((/* implicit */long long int) (_Bool)0)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            var_42 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((min((var_5), (var_12))), ((-(var_3)))))), (max((((/* implicit */unsigned long long int) arr_74 [i_22])), (var_7)))));
            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (-(min((min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_2))), (((/* implicit */unsigned long long int) arr_74 [i_21])))))))));
        }
        /* vectorizable */
        for (long long int i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            arr_77 [i_21] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_73 [i_21] [i_21] [i_21]))));
            /* LoopNest 2 */
            for (long long int i_24 = 2; i_24 < 19; i_24 += 3) 
            {
                for (unsigned long long int i_25 = 1; i_25 < 19; i_25 += 2) 
                {
                    {
                        var_44 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_80 [i_21] [i_23] [i_21]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_16));
                        var_45 = ((/* implicit */long long int) arr_72 [i_21]);
                        arr_83 [i_25] [i_21] [i_23] [i_21] [i_21] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -8956393184628994159LL)) || (((/* implicit */_Bool) (signed char)-21)))))));
                        var_46 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_24] [i_24 - 2] [i_24]))) <= (arr_71 [14ULL])));
                    }
                } 
            } 
        }
        var_47 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), ((~(((var_11) + (var_14)))))));
        var_48 *= ((/* implicit */unsigned long long int) arr_78 [4LL] [i_21] [4LL]);
    }
    /* vectorizable */
    for (unsigned long long int i_26 = 0; i_26 < 21; i_26 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_27 = 0; i_27 < 21; i_27 += 2) 
        {
            var_49 = ((/* implicit */unsigned long long int) (-(((arr_80 [i_27] [i_26] [i_26]) ? (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_27] [(signed char)17] [i_27]))) : (arr_82 [0ULL] [i_27] [6ULL] [i_27])))));
            var_50 = (_Bool)1;
            var_51 *= ((/* implicit */unsigned int) (!(arr_73 [i_26] [i_27] [i_26])));
            var_52 = ((/* implicit */long long int) (+(arr_86 [(signed char)15] [i_27] [i_26])));
        }
        for (int i_28 = 0; i_28 < 21; i_28 += 1) 
        {
            arr_90 [4LL] &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)21))));
            /* LoopSeq 2 */
            for (short i_29 = 2; i_29 < 20; i_29 += 1) 
            {
                arr_94 [14U] [i_28] [i_28] [i_28] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_4))))));
                arr_95 [i_28] = arr_79 [i_28];
            }
            for (long long int i_30 = 2; i_30 < 18; i_30 += 3) 
            {
                arr_100 [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_88 [i_28]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))))) ? (arr_78 [i_28] [i_28] [i_30 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_30 + 1])))));
                var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_7))))));
                arr_101 [i_28] [i_28] [i_30 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_89 [i_26] [i_28] [i_28]))));
            }
        }
        for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 2) 
        {
            arr_104 [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? ((~(arr_87 [i_26] [i_26] [i_26]))) : (((/* implicit */long long int) ((/* implicit */int) arr_91 [i_31] [i_26] [12] [i_26])))));
            /* LoopSeq 1 */
            for (long long int i_32 = 0; i_32 < 21; i_32 += 3) 
            {
                var_54 ^= ((/* implicit */signed char) arr_82 [i_26] [i_31] [i_31] [(signed char)18]);
                arr_108 [i_26] [9ULL] [i_32] = ((/* implicit */long long int) arr_105 [i_31] [i_26]);
            }
            arr_109 [i_26] [8ULL] [i_31] &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_88 [i_31])) ? (arr_98 [i_26] [(signed char)12]) : (((/* implicit */unsigned long long int) 9223372036854775802LL))))));
            arr_110 [i_31] = ((/* implicit */unsigned char) var_10);
        }
        arr_111 [i_26] [i_26] = ((/* implicit */_Bool) (+(((arr_89 [i_26] [i_26] [4ULL]) / (-8LL)))));
        var_55 *= var_16;
    }
}
