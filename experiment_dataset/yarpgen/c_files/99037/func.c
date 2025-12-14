/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99037
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
    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (min((((((/* implicit */int) var_7)) >> (((var_11) - (596170332))))), ((~(((/* implicit */int) var_8))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((min((arr_1 [i_0] [i_0]), (arr_1 [(_Bool)1] [(_Bool)1]))) == (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95))));
            arr_8 [i_0] [i_1] [i_0] = ((((((arr_0 [i_0]) + (2147483647))) >> (((arr_0 [i_0]) + (987451753))))) == (((((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) arr_2 [i_0] [i_0]))))) / (max((((/* implicit */int) arr_7 [(_Bool)1] [i_1] [1])), (arr_0 [i_0]))))));
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 6; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_16 [i_0] [i_0]), (((/* implicit */short) arr_5 [i_0]))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 + 1])) != (((/* implicit */int) arr_6 [i_0] [i_0])))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)65)), ((unsigned char)160)))) == (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_1]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 4; i_5 < 6; i_5 += 4) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 5432330588967234938ULL)) && (((/* implicit */_Bool) (unsigned char)43))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_5 - 2])) != (((/* implicit */int) arr_5 [i_5 - 4]))));
            arr_19 [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))));
        }
        arr_20 [i_0] = max((((/* implicit */int) max(((unsigned char)96), (((/* implicit */unsigned char) arr_11 [6LL] [6LL] [i_0] [0LL]))))), (((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) arr_15 [(unsigned char)0] [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (short i_7 = 4; i_7 < 9; i_7 += 1) 
            {
                {
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_3))))), (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])), (var_6)))))) || (((arr_7 [i_7] [i_7 - 3] [i_7 - 1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_11) : (((/* implicit */int) (signed char)21)))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_6])) ? (((/* implicit */int) arr_12 [i_7] [i_7 - 2] [i_7 - 3] [i_7] [i_7] [i_6])) : (((/* implicit */int) arr_12 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 4] [i_6]))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [0ULL]))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 3) 
    {
        var_27 = ((/* implicit */signed char) ((min((((/* implicit */int) max((((/* implicit */unsigned char) arr_28 [i_8])), (var_4)))), (var_11))) >> ((+(((((/* implicit */_Bool) arr_29 [i_8] [(unsigned char)9])) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) var_14))))))));
        arr_30 [i_8] = ((/* implicit */unsigned int) max((arr_28 [i_8]), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) - (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [(_Bool)1] [10])) || (var_8)))))))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_9])) - (((/* implicit */int) arr_32 [i_9]))))), (((unsigned int) (unsigned char)66))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)96)), (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)21)), ((short)12591))))) : (var_18)))) || (((/* implicit */_Bool) max((min((arr_32 [i_9]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) min((arr_31 [i_9]), (var_7)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_36 [i_9] [i_9 + 1] [i_9] = ((/* implicit */short) (-(((unsigned int) (signed char)41))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_39 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_35 [i_9] [i_9]);
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((((/* implicit */int) arr_31 [i_9 + 1])), (((((/* implicit */_Bool) arr_31 [i_9 + 1])) ? (arr_38 [i_9]) : (arr_38 [i_9])))));
                            var_30 = ((((((((/* implicit */_Bool) (short)12706)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_9] [i_9] [(unsigned short)6] [i_9] [i_9 + 1] [i_9]))) : (524287U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) && (((/* implicit */_Bool) arr_35 [i_9] [i_9])))))))) || ((!(((((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9])) < (arr_41 [i_9] [i_9] [i_9] [i_9] [12]))))));
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_37 [(_Bool)1] [i_10] [i_9] [(_Bool)1])) ? (((/* implicit */int) arr_37 [i_12] [i_12] [i_9] [(_Bool)1])) : (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            }
            arr_45 [i_10] [i_10] [i_10] &= ((/* implicit */long long int) var_12);
        }
        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min(((unsigned char)160), ((unsigned char)213))))));
            var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_40 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9]), (((/* implicit */signed char) var_14))))) ? (max((((/* implicit */unsigned long long int) -9201533917928360316LL)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))))) ? (((unsigned int) arr_37 [i_9] [i_9 + 1] [i_14] [i_9 + 1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2LL)) ? (2147483616) : (((/* implicit */int) (unsigned short)27538)))))));
            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (2U)))) % (((unsigned long long int) arr_42 [i_9 + 1] [i_9 + 1] [i_14] [i_9 + 1]))));
        }
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_53 [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_52 [(unsigned short)2])), (min((((/* implicit */int) var_3)), (2147483625)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((arr_50 [i_15] [23ULL]) / (arr_50 [i_15] [i_15])))) <= (((long long int) 1812709828312877753LL))))) : (((((/* implicit */int) ((((/* implicit */int) arr_49 [i_15] [i_15])) < (((/* implicit */int) arr_51 [i_15]))))) * (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_2)))))))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                for (short i_18 = 1; i_18 < 23; i_18 += 1) 
                {
                    {
                        arr_63 [i_15] [i_15] = ((/* implicit */long long int) arr_56 [i_15]);
                        var_34 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) arr_57 [i_15] [1] [i_15] [i_15])) / (((/* implicit */int) arr_57 [(short)17] [i_16] [i_16] [i_16])))))) * (((/* implicit */int) ((((/* implicit */int) arr_59 [i_18 - 1])) == (-1))))));
                        var_35 = ((/* implicit */_Bool) ((2U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_55 [i_15] [i_15]) < (((/* implicit */long long int) var_11)))) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_62 [i_15] [i_15] [i_15] [i_15]))))))))));
                        arr_64 [i_15] [i_15] [i_15] [i_15] = (((-(((/* implicit */int) arr_57 [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1])))) <= (((/* implicit */int) min((arr_62 [i_18] [i_15] [i_18 + 1] [i_18 + 1]), (arr_62 [i_18] [i_15] [i_18 + 1] [i_15])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_65 [i_15] [i_15] [i_15])) ? (arr_50 [i_15] [i_15]) : (((/* implicit */int) var_4))));
            var_37 = ((((/* implicit */int) arr_51 [i_15])) < (((/* implicit */int) arr_51 [i_15])));
            /* LoopSeq 2 */
            for (short i_20 = 2; i_20 < 22; i_20 += 1) 
            {
                var_38 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_61 [i_20] [i_20] [i_20 + 1] [18])) % (((756136462960551311ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [22ULL])))))));
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */int) arr_52 [i_15])) : (arr_61 [i_20 + 1] [i_20 - 1] [i_20 - 2] [i_15])));
                arr_70 [i_15] [i_15] [i_15] [i_15] = ((((((/* implicit */_Bool) arr_60 [i_20 - 1] [i_20 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [i_15])))) < (575760276));
            }
            for (unsigned short i_21 = 2; i_21 < 22; i_21 += 4) 
            {
                arr_73 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_50 [i_21 - 2] [i_21 - 2]) : (arr_50 [i_21 + 2] [i_21 - 1])));
                /* LoopSeq 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) ((arr_68 [i_22] [i_22] [i_22 - 1] [i_22]) < (arr_68 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1])));
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */int) arr_62 [i_21 + 1] [i_21] [i_21 + 1] [i_21 - 1])) / (arr_50 [i_21 - 1] [i_21 + 2]))))));
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned short i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    arr_80 [i_21] [i_19] [i_19] [i_19] [i_19] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_65 [i_15] [i_15] [i_21])))));
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)34)) || (((/* implicit */_Bool) 148395863))));
                    arr_81 [i_15] [i_15] [i_15] [(unsigned short)12] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_76 [i_15] [i_21 + 2] [i_21 - 2])) ? (((/* implicit */int) arr_76 [i_15] [i_21 + 2] [i_21 - 2])) : (((/* implicit */int) arr_76 [i_15] [i_21 + 2] [i_21 - 2]))));
                }
            }
            arr_82 [i_15] = ((((/* implicit */_Bool) arr_76 [i_15] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) arr_55 [i_15] [i_15])) : (11050351053256353531ULL));
        }
        arr_83 [i_15] = ((/* implicit */_Bool) ((long long int) ((signed char) ((((/* implicit */_Bool) arr_58 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_62 [i_15] [i_15] [i_15] [i_15])) : (arr_78 [i_15] [i_15] [i_15] [i_15])))));
    }
    var_44 = ((/* implicit */signed char) var_13);
    var_45 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_12))))) < (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_2))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 1812709828312877755LL)), (16403501260246120441ULL))) == (((12779887472726373867ULL) - (((/* implicit */unsigned long long int) 13LL))))))) : (((/* implicit */int) var_15))));
}
