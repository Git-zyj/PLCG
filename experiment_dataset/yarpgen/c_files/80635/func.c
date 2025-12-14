/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80635
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (var_7))))));
            var_17 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [(short)1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) : (min((((/* implicit */long long int) arr_1 [i_1])), (7321845152041666986LL))))) == (min((max((arr_2 [i_0] [i_0]), (var_14))), (arr_2 [i_0] [i_0])))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = var_8;
                        arr_14 [i_3] = ((/* implicit */long long int) arr_10 [i_0] [i_3] [(short)5] [i_0] [5LL]);
                    }
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_13))));
                }
                var_20 = arr_0 [i_0];
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)64283)))) != (((/* implicit */int) (unsigned short)5161))))) >> (((((/* implicit */int) arr_1 [i_0])) - (63)))));
                arr_15 [i_1] [i_1] [(unsigned char)4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)15753)), (var_11)));
                var_22 -= max((min(((~(var_7))), (arr_5 [(_Bool)1] [6LL]))), (((((/* implicit */_Bool) ((arr_13 [i_2] [i_0] [i_1] [i_0] [(short)14]) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) arr_10 [14U] [i_1] [20LL] [i_0] [(unsigned char)14])) : (((/* implicit */int) arr_4 [i_0] [21U]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_0]))))))));
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49776)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_1 [i_0]))));
                arr_18 [i_0] [i_1] [16LL] [(short)15] = ((/* implicit */unsigned short) arr_12 [i_5] [i_1] [i_1] [i_1] [i_0]);
            }
            var_24 = ((/* implicit */unsigned int) arr_8 [(short)3] [i_0]);
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [(unsigned char)4] [21LL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_8 [6LL] [i_0]))))) : (var_1))), (((/* implicit */long long int) arr_6 [i_0] [(unsigned short)16]))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_22 [i_7 - 1] [(unsigned char)23])) ? (((/* implicit */int) arr_22 [i_7 - 1] [i_7])) : (((/* implicit */int) arr_22 [i_7 - 1] [i_7])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) var_0))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    for (unsigned int i_11 = 3; i_11 < 22; i_11 += 2) 
                    {
                        {
                            arr_36 [i_7] [i_10] [i_7] [i_7] [i_10] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [(unsigned short)11] [(unsigned short)11] [7LL] [(unsigned short)11] [i_11 + 1] [i_7]))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((arr_33 [i_10] [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1]) == (arr_33 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 + 1]))))));
                            arr_37 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (arr_33 [i_7] [i_8] [i_9] [i_8] [i_9] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5150)))))) || (((/* implicit */_Bool) ((arr_30 [i_7]) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7]))))))));
                            var_29 -= ((/* implicit */unsigned short) arr_30 [(unsigned char)9]);
                            var_30 = ((/* implicit */_Bool) arr_21 [i_7 - 1]);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_7 - 1])) + (2147483647))) << (((var_1) - (7241883566109290558LL)))));
            var_32 = ((/* implicit */_Bool) var_11);
            /* LoopSeq 2 */
            for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        arr_46 [i_13] [i_13] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_12] [i_12] [i_14] [i_14])) ? (((var_14) - (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_7 - 1])))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_7] [i_13] [(unsigned char)10] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)48))))) : (var_7)));
                        arr_47 [11LL] [i_8] [11LL] [i_13] [i_13] [11LL] = ((/* implicit */_Bool) (unsigned char)89);
                    }
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) var_8);
                        var_35 = ((/* implicit */unsigned short) arr_26 [i_7] [(unsigned short)10] [i_8] [17LL]);
                    }
                    arr_52 [i_7] [i_13] [i_13] = ((/* implicit */long long int) arr_24 [i_7] [i_12] [i_7]);
                    var_36 -= ((/* implicit */unsigned int) var_3);
                }
                var_37 -= ((((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_8])) ? (((4069298589863950197LL) >> (((((/* implicit */int) arr_31 [16LL])) - (28099))))) : (arr_48 [(unsigned short)20] [i_8] [(unsigned char)14] [i_7] [i_8] [i_8]));
            }
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_38 = ((/* implicit */short) ((arr_45 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)154)) - (((/* implicit */int) (unsigned short)49782)))))));
                var_39 += ((/* implicit */_Bool) ((unsigned short) arr_38 [i_7 - 1] [i_7 - 1] [i_7] [i_7]));
                var_40 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_7 - 1] [i_8]))));
            }
        }
        for (long long int i_17 = 2; i_17 < 22; i_17 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_18 = 2; i_18 < 23; i_18 += 3) 
            {
                var_41 -= ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_7] [i_7 - 1] [i_7 - 1] [2LL]))) : (arr_50 [i_7] [i_7 - 1])));
                var_42 = ((/* implicit */_Bool) arr_59 [i_7] [i_17] [i_7] [i_7]);
            }
            /* vectorizable */
            for (unsigned short i_19 = 1; i_19 < 22; i_19 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) (~(4069298589863950197LL)));
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_33 [i_7] [i_7] [i_7] [i_17] [i_19] [2LL]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_27 [i_7] [i_17] [i_7])) - (50668)))))) ? (((/* implicit */int) arr_42 [i_7] [i_7] [(unsigned short)3] [i_17] [(unsigned short)3])) : (((/* implicit */int) arr_27 [i_7] [i_19] [i_19])))))));
            }
            /* vectorizable */
            for (long long int i_20 = 3; i_20 < 22; i_20 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_17 + 1] [(_Bool)1])) > (((/* implicit */int) arr_41 [i_17 + 1] [(unsigned char)20])))))));
                /* LoopNest 2 */
                for (long long int i_21 = 3; i_21 < 22; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_46 = arr_61 [i_7] [(unsigned char)1];
                            var_47 = ((/* implicit */long long int) ((((arr_33 [i_7] [20LL] [i_7] [13LL] [i_7] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_56 [1U] [21LL] [i_20]))))) != (arr_66 [i_7 - 1] [i_17])));
                            var_48 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_68 [i_7] [i_7] [8U] [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))) : (var_11))) << (((((var_2) ? (arr_30 [(short)3]) : (arr_32 [i_17] [(unsigned short)4] [(unsigned short)10] [i_17]))) - (2722509312000808516LL)))));
                            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [(unsigned char)18] [(unsigned char)10] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_21]))) : (var_10)))) ? (((((/* implicit */_Bool) arr_28 [(short)12] [16LL] [18LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_17] [i_17]))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49778)))));
                            var_50 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_20 + 2] [i_17 + 1] [i_21 - 1]))) != (arr_68 [i_17 + 2] [i_21 - 1] [1U] [i_17])));
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned short) var_3);
                var_52 = ((/* implicit */long long int) arr_64 [i_17]);
            }
            for (long long int i_23 = 3; i_23 < 22; i_23 += 3) /* same iter space */
            {
                var_53 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) arr_72 [i_17]))) & (((((/* implicit */_Bool) arr_27 [i_7] [i_23] [i_23])) ? (arr_33 [17LL] [i_7] [i_7] [(short)2] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), ((+(arr_28 [23U] [23U] [i_23])))));
                var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (arr_74 [(unsigned char)22] [2LL] [2LL])))) ? (2316119656U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_17] [4LL] [4LL])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (-11LL) : (var_11)))) ? (arr_48 [10LL] [i_17] [(unsigned short)10] [10LL] [i_17] [14LL]) : (((arr_61 [(short)12] [i_17]) | (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_7] [i_17] [19LL] [23U]))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [i_7] [i_17] [i_23]))))) ? (arr_32 [i_23] [14LL] [14LL] [i_23 - 1]) : (arr_61 [i_7 - 1] [i_17 - 2]))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
                    {
                        var_55 -= ((/* implicit */unsigned int) ((arr_78 [i_7 - 1] [i_17 + 1] [i_25]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [6LL] [(short)22] [i_24] [i_24] [(unsigned char)20] [8U] [8U])) ? (((/* implicit */int) arr_73 [i_24] [(short)14] [i_24] [i_24])) : (((/* implicit */int) arr_72 [i_24])))))));
                        var_56 = (i_17 % 2 == 0) ? (((((arr_57 [i_17] [i_7 - 1]) + (9223372036854775807LL))) << (((((arr_57 [i_17] [i_7 - 1]) + (8608648739729831060LL))) - (53LL))))) : (((((arr_57 [i_17] [i_7 - 1]) + (9223372036854775807LL))) << (((((((arr_57 [i_17] [i_7 - 1]) + (8608648739729831060LL))) - (53LL))) - (7204189547398304413LL)))));
                        var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) arr_80 [i_7] [i_7] [i_25] [(short)12] [(short)22] [(short)12]))));
                        arr_84 [i_17] [i_24] [i_17] [i_17] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_7] [i_7 - 1] [i_7] [i_7] [i_7]))));
                        arr_85 [(short)23] [7U] [(unsigned short)16] [(unsigned short)16] [i_25] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) ? (arr_79 [i_17] [2LL] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [(short)15])))))) || (((/* implicit */_Bool) arr_39 [i_7 - 1]))));
                    }
                    for (long long int i_27 = 0; i_27 < 24; i_27 += 3) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [15LL] [4U] [4U] [4U])) ? (arr_88 [i_7] [i_25] [i_17] [(unsigned char)3] [i_27]) : (((((/* implicit */_Bool) arr_62 [(unsigned char)23] [i_25] [i_27])) ? (arr_79 [i_17] [(unsigned char)19] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_17] [(short)0] [i_17])))))));
                        arr_89 [i_7] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_17] [i_7] [i_7]))) == (arr_45 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [(short)16] [i_7 - 1] [i_7 - 1])));
                    }
                    var_59 = ((/* implicit */short) arr_30 [(unsigned short)16]);
                    var_60 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_25] [i_17] [i_17])) ? (arr_54 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_54 [i_17] [i_24] [i_25])));
                    var_61 = ((/* implicit */long long int) max((var_61), (((((((/* implicit */_Bool) arr_63 [i_17] [(unsigned char)14] [i_25] [i_25])) ? (var_14) : (arr_33 [i_7] [i_17] [i_7] [i_24] [0LL] [1LL]))) & (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_17 - 1])))))));
                    var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_82 [(short)8] [i_17] [i_17] [i_17] [i_7] [(_Bool)1]) : (arr_87 [i_7] [i_7] [i_17] [3LL] [(short)11])))) && (((/* implicit */_Bool) var_9))));
                }
                var_63 = arr_88 [(unsigned short)10] [(unsigned short)10] [i_17] [i_17] [i_24];
            }
            for (long long int i_28 = 1; i_28 < 22; i_28 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_29 = 2; i_29 < 21; i_29 += 1) 
                {
                    for (long long int i_30 = 0; i_30 < 24; i_30 += 2) 
                    {
                        {
                            var_64 += (unsigned short)5177;
                            arr_98 [i_30] [i_17] [i_28] [i_17] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60942))) & (arr_30 [i_29])));
                            var_65 = ((/* implicit */long long int) min((var_65), (((max((((arr_71 [i_7] [i_17] [i_17] [i_30] [i_7]) ? (-3808097424643581122LL) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [i_30]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -3421059532129649816LL)) ? (arr_23 [i_30]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-357)))))))) | (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26904))) : (2415796225U)))))))));
                            var_66 = ((/* implicit */unsigned char) arr_78 [i_17] [10LL] [i_17]);
                            var_67 = ((/* implicit */short) ((unsigned char) arr_71 [i_29] [(_Bool)1] [i_7] [i_17] [(unsigned char)2]));
                        }
                    } 
                } 
                var_68 = ((/* implicit */unsigned int) max((var_68), (((/* implicit */unsigned int) -3808097424643581143LL))));
            }
        }
    }
}
