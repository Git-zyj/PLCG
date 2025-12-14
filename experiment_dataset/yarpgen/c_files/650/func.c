/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/650
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
    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (var_6)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_15 &= ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_13))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)44296)))), (((/* implicit */unsigned long long int) (~(var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */int) (unsigned short)18)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_2 [i_0] [i_1] [i_3])))))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_3])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)0] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551615ULL))), (max((20ULL), (((/* implicit */unsigned long long int) (unsigned short)12368)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_19 -= ((/* implicit */short) var_10);
        var_20 ^= ((/* implicit */unsigned char) 18446744073709551615ULL);
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_21 ^= ((int) 14ULL);
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned int) var_1)))));
                        var_23 &= ((/* implicit */short) var_3);
                        var_24 &= var_7;
                    }
                    for (unsigned short i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((short) arr_26 [(unsigned char)6] [i_5] [i_6] [i_7])))));
                        var_26 &= ((/* implicit */short) ((9223372036854775807LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 1146077805)) ? (((/* implicit */int) arr_2 [i_4] [i_4] [i_7])) : (((/* implicit */int) arr_8 [i_5] [i_6 - 1] [13] [i_9])))))));
                        var_27 += ((/* implicit */short) var_12);
                    }
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 1]))) : (var_0)));
                    var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) var_4)) : (arr_13 [i_6 - 1] [i_6 + 1])));
                }
                for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_30 *= ((((/* implicit */int) arr_20 [(short)12] [i_4] [i_6] [i_10])) >> (((((/* implicit */int) arr_23 [i_5] [i_6 + 1] [i_6 - 1] [i_10] [i_10])) - (144))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((var_9) ? (((/* implicit */int) arr_3 [i_4] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_3 [i_5] [(signed char)13] [i_6 + 1])))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 1] [i_6 + 1])))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_33 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12368)))))) : (18446744073709551615ULL)));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (arr_1 [i_11] [i_12])));
                    }
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        var_35 &= ((/* implicit */int) 18446744073709551609ULL);
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_28 [i_6 + 1] [i_6 - 1] [i_13] [i_6 + 1]))));
                        var_37 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_13] [i_11] [i_11] [i_4]))));
                    }
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_11))));
                    var_39 *= ((/* implicit */unsigned char) var_8);
                }
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    for (int i_15 = 2; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((int) arr_13 [i_6] [i_4])))));
                            var_41 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_14] [i_5] [i_15 - 2] [i_5] [i_6 + 1])) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_14])) : (((/* implicit */int) (signed char)-72))));
                            var_42 &= ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            }
            for (signed char i_16 = 2; i_16 < 18; i_16 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)53167))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551585ULL))) : (1ULL)))) ? (0U) : (((/* implicit */unsigned int) var_6)))))));
                var_44 -= ((/* implicit */short) max(((~(((/* implicit */int) arr_3 [i_4] [i_4] [i_16 - 2])))), (((/* implicit */int) var_9))));
                var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) min(((+(((var_9) ? (((/* implicit */int) arr_8 [i_16] [i_16] [i_5] [(unsigned char)12])) : (((/* implicit */int) var_13)))))), (((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (long long int i_17 = 3; i_17 < 15; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) var_3))));
                            var_47 += ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((short) (unsigned char)90))))) ? ((+(((/* implicit */int) ((unsigned char) arr_35 [i_4]))))) : (((((/* implicit */_Bool) ((long long int) 15U))) ? (((/* implicit */int) ((signed char) 0U))) : (((/* implicit */int) ((unsigned char) 4294967289U))))))))));
            }
            for (signed char i_19 = 2; i_19 < 18; i_19 += 4) /* same iter space */
            {
                var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((unsigned int) max((var_12), (((/* implicit */long long int) ((unsigned char) 18446744073709551602ULL)))))))));
                var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) var_11))));
                var_51 -= ((/* implicit */_Bool) var_6);
            }
            for (int i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    var_52 -= ((/* implicit */unsigned char) var_7);
                    var_53 = ((/* implicit */int) max((var_11), (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_48 [i_4] [i_5] [i_20] [i_21])) : (((/* implicit */int) arr_48 [i_4] [i_4] [i_20] [i_21])))))));
                    var_54 &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_45 [i_4] [i_20] [i_4])) : (((/* implicit */int) var_5))))), (min((arr_25 [i_4] [i_5] [8U] [i_5] [i_20] [i_20] [i_21]), (arr_25 [i_4] [i_20] [i_20] [i_21] [i_4] [i_4] [i_4])))));
                }
                var_55 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_28 [i_4] [i_5] [i_4] [i_4]))))) ? (var_0) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))) & (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) arr_29 [i_4] [i_5] [i_4] [i_4]))))))))));
                var_56 ^= ((((/* implicit */_Bool) ((unsigned long long int) ((short) var_0)))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255)))))))) : (((/* implicit */int) ((unsigned char) (signed char)71))));
                var_57 &= ((/* implicit */signed char) (unsigned short)3674);
                var_58 = ((/* implicit */int) var_12);
            }
            var_59 = 409573785;
        }
        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) min((((((/* implicit */_Bool) -8799232256080862992LL)) ? (2183774743U) : (((/* implicit */unsigned int) 1370121507)))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)31711))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_24 = 0; i_24 < 19; i_24 += 2) /* same iter space */
                {
                    var_61 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_24] [i_22])) ? (((/* implicit */int) arr_15 [i_22])) : (arr_32 [i_24] [i_24] [i_4] [i_4] [i_4])));
                    var_62 &= ((signed char) ((((/* implicit */_Bool) var_10)) ? (var_0) : (var_0)));
                    var_63 -= ((/* implicit */short) (+(((unsigned int) arr_57 [i_4] [i_4]))));
                    var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_4] [i_22] [i_23] [i_24])))))));
                }
                for (unsigned char i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_26 = 0; i_26 < 19; i_26 += 3) 
                    {
                        var_65 = ((/* implicit */short) max((var_65), (((/* implicit */short) var_3))));
                        var_66 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_64 [i_4] [i_26] [i_23] [i_25] [i_26])) : (((/* implicit */int) arr_64 [i_4] [i_4] [i_23] [i_25] [i_26]))));
                        var_67 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551563ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1915100332U)));
                        var_68 = ((/* implicit */int) (~(var_0)));
                    }
                    var_69 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_4] [i_25] [i_23]))));
                }
                var_70 ^= var_11;
                var_71 = ((/* implicit */short) max((var_71), (((/* implicit */short) (+(((/* implicit */int) arr_56 [i_4] [i_22] [i_23])))))));
            }
            /* vectorizable */
            for (unsigned char i_27 = 0; i_27 < 19; i_27 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_28 = 2; i_28 < 18; i_28 += 4) /* same iter space */
                {
                    var_72 *= ((/* implicit */short) (~(var_11)));
                    var_73 = ((/* implicit */unsigned short) min((var_73), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8ULL)))))));
                    var_74 = ((/* implicit */unsigned int) max((var_74), (((/* implicit */unsigned int) ((3765317568176833514LL) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                }
                for (unsigned int i_29 = 2; i_29 < 18; i_29 += 4) /* same iter space */
                {
                    var_75 = ((/* implicit */int) var_3);
                    var_76 -= ((/* implicit */signed char) arr_36 [i_4] [i_22] [i_27] [i_22] [i_27] [i_29 - 1]);
                }
                var_77 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 19; i_30 += 1) 
                {
                    for (short i_31 = 0; i_31 < 19; i_31 += 2) 
                    {
                        {
                            var_78 |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-72))));
                            var_79 ^= ((/* implicit */unsigned long long int) ((4294967271U) - (((/* implicit */unsigned int) -1))));
                            var_80 = ((/* implicit */unsigned char) min((var_80), (((/* implicit */unsigned char) ((_Bool) var_6)))));
                            var_81 = ((/* implicit */short) min((var_81), (((/* implicit */short) var_0))));
                        }
                    } 
                } 
                var_82 |= ((/* implicit */_Bool) var_8);
            }
            for (unsigned char i_32 = 0; i_32 < 19; i_32 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_33 = 0; i_33 < 19; i_33 += 1) 
                {
                    var_83 = ((/* implicit */_Bool) min((var_83), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_22 [16] [i_22] [i_22] [i_4] [i_32] [i_33])), (min((((/* implicit */unsigned long long int) var_2)), (var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))))))));
                    var_84 &= ((/* implicit */unsigned char) min((max((var_4), (((/* implicit */short) arr_34 [i_22] [i_22] [i_4])))), (((/* implicit */short) var_13))));
                }
                var_85 = ((/* implicit */unsigned char) min((var_85), (((/* implicit */unsigned char) ((signed char) arr_36 [i_4] [i_4] [i_22] [i_22] [i_32] [i_32])))));
            }
            var_86 |= ((/* implicit */_Bool) arr_13 [i_4] [i_4]);
            var_87 = ((/* implicit */_Bool) max((var_87), (((/* implicit */_Bool) ((((/* implicit */long long int) 4294967281U)) & ((~((~(var_12))))))))));
        }
    }
}
