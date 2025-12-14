/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96053
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
    var_12 = ((min((((/* implicit */unsigned int) ((signed char) 18446744073709551615ULL))), (var_11))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (_Bool)0))))) && ((!(((/* implicit */_Bool) var_2)))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) var_11)) % (min((-8762823204978773408LL), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) var_6))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1680924094)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))) != (((unsigned long long int) arr_3 [(signed char)12])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((arr_3 [i_0 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned short)20046);
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) var_10);
                        }
                        arr_17 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)63737), ((unsigned short)45480))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 10; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    {
                        arr_23 [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)45498))) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (arr_19 [i_0 + 1] [i_5 - 1] [i_5 - 1])));
                        arr_24 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_10))));
                        arr_31 [i_0 + 1] [4] [i_8] [i_9] &= min((((/* implicit */unsigned long long int) var_8)), ((-(arr_19 [i_0 - 1] [i_7] [i_7 - 2]))));
                        arr_32 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */int) ((unsigned long long int) min((min((((/* implicit */int) (unsigned char)31)), (var_1))), (((/* implicit */int) ((arr_27 [i_0] [i_7] [i_0] [i_9]) || (((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_9]))))))));
                    }
                } 
            } 
            arr_33 [i_0] [i_0] [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_0] [i_7] [(signed char)10] [i_7]))), (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) | (arr_3 [i_0])))))) ? (var_1) : ((+(((/* implicit */int) ((signed char) (unsigned short)20052)))))));
        }
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_18 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_11] [0]))));
            /* LoopNest 2 */
            for (short i_12 = 4; i_12 < 22; i_12 += 3) 
            {
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        arr_45 [i_10] [i_12] [i_11] [i_10] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) 2074002577U)))));
                        var_19 = ((/* implicit */unsigned int) (~(((long long int) -6874544034903679554LL))));
                        var_20 = ((/* implicit */short) ((unsigned char) var_4));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                var_21 -= ((/* implicit */signed char) ((long long int) arr_47 [i_14]));
                arr_48 [i_10] [(_Bool)1] [i_10] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_39 [i_10] [i_14])) ? (arr_40 [(unsigned short)18] [i_11] [(unsigned short)18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_10])))))));
                var_22 = ((((/* implicit */_Bool) arr_34 [(_Bool)1])) ? (arr_44 [i_10] [i_11] [i_14]) : (arr_44 [i_10] [i_11] [i_10]));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_14] [i_14] [i_10] [i_11] [i_10])) + (((/* implicit */int) (unsigned short)45454))));
                var_24 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)115)) ? (549755813824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2799))))) < (((/* implicit */unsigned long long int) ((long long int) arr_34 [(signed char)18])))));
            }
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_17] [i_16]))));
                            var_26 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)32840)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [i_10] [i_11] [i_15] [i_17]))))));
                            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_6)) & (((long long int) var_11))));
                            arr_57 [i_10] [i_11] [i_10] [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_17] [i_16] [i_11] [(unsigned char)21]))))) ? ((~(((/* implicit */int) arr_50 [i_10] [i_11] [i_15])))) : (((/* implicit */int) var_2))));
                            arr_58 [9LL] [i_16] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned short)32840)) & (((/* implicit */int) (short)-8753)))));
                        }
                    } 
                } 
                arr_59 [i_10] [i_11] [i_10] [i_15] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)2795)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                arr_60 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 7668104603150565184ULL)) && (((/* implicit */_Bool) (signed char)-108)))))));
            }
        }
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            for (signed char i_19 = 1; i_19 < 22; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        for (long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                        {
                            {
                                arr_71 [i_10] [i_18] [i_19] [i_20] [i_10] = ((/* implicit */unsigned char) var_6);
                                var_28 = ((/* implicit */short) max((var_28), (((short) 6765650U))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        var_29 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-30882))));
                        var_30 ^= ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) 14625099053084720508ULL)));
                        arr_74 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_19 - 1] [i_22] [i_22])) ? (10253220473194159641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 23; i_23 += 2) 
                    {
                        arr_77 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [(short)0] [i_19 + 1] [i_19] [i_23])) ? (arr_52 [i_23] [i_19 - 1] [i_19 + 1] [i_19 + 1]) : (arr_52 [i_10] [i_19 + 1] [i_19] [i_19])));
                        var_31 = ((/* implicit */unsigned char) arr_46 [i_10] [i_19 + 1] [i_10]);
                    }
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        arr_80 [i_10] [i_18] [i_19] [i_19] [i_18] |= ((/* implicit */_Bool) arr_70 [i_18] [(unsigned char)12] [i_19] [i_19 - 1] [i_10]);
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) var_6)) : (1191133811U)));
                        var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_19 + 1] [i_19] [i_18])) ? (((/* implicit */int) arr_54 [i_19 - 1] [(unsigned char)9] [(_Bool)1] [i_19] [i_19] [i_19 + 1])) : (((/* implicit */int) arr_54 [i_19 + 1] [i_19] [i_19 + 1] [i_19] [i_19 + 1] [i_19 - 1]))));
                    }
                    for (unsigned short i_25 = 0; i_25 < 23; i_25 += 2) 
                    {
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_10))))) ? (arr_42 [i_19] [i_19] [i_25] [i_19 - 1] [i_19 - 1]) : (((/* implicit */int) arr_41 [i_25] [i_18]))));
                        arr_85 [i_10] = ((/* implicit */signed char) arr_55 [1] [i_18] [1] [1]);
                        var_35 = ((/* implicit */unsigned int) (unsigned short)20081);
                    }
                    var_36 += ((/* implicit */long long int) 3368769471U);
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 2) 
                    {
                        var_37 ^= ((/* implicit */short) (((+(((/* implicit */int) arr_35 [i_10] [i_10])))) ^ (((/* implicit */int) arr_81 [i_19 - 1]))));
                        var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_56 [i_10] [i_10] [i_10]))));
                        var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_10] [i_26])) ? (var_4) : (((/* implicit */int) ((3980939677U) == (((/* implicit */unsigned int) var_1)))))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 1) 
    {
        var_40 ^= ((/* implicit */unsigned short) arr_70 [(signed char)14] [i_27] [i_27] [i_27] [(signed char)14]);
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)140)))) ? (((unsigned int) (~(2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_55 [i_27] [i_27] [i_27] [i_27])), (var_5)))))))))))));
    }
    for (long long int i_28 = 0; i_28 < 19; i_28 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_29 = 1; i_29 < 17; i_29 += 4) 
        {
            for (short i_30 = 0; i_30 < 19; i_30 += 4) 
            {
                {
                    var_42 ^= ((/* implicit */int) min((((/* implicit */long long int) arr_83 [i_28])), (min(((-(arr_92 [i_29] [(signed char)16]))), (((/* implicit */long long int) ((var_3) & (((/* implicit */int) arr_39 [i_28] [i_28])))))))));
                    var_43 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_92 [i_30] [i_30])))) && (((/* implicit */_Bool) (-(arr_62 [i_28] [i_28])))))))));
                    /* LoopNest 2 */
                    for (short i_31 = 0; i_31 < 19; i_31 += 4) 
                    {
                        for (unsigned int i_32 = 2; i_32 < 18; i_32 += 2) 
                        {
                            {
                                arr_105 [i_28] [i_29] [i_30] [i_29] [i_32] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_43 [i_31] [i_32 - 2] [i_29] [i_32 - 2] [i_32])) == (2147483647))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) min((arr_104 [i_28] [i_29 + 1] [i_28] [i_29 + 1] [i_31] [(unsigned char)11]), (((/* implicit */unsigned short) arr_35 [i_30] [i_32])))))))) : (((((/* implicit */_Bool) -4741697178913457008LL)) ? (((/* implicit */int) arr_72 [i_29 + 2] [i_32 - 2] [i_29] [i_32])) : (((/* implicit */int) (_Bool)1))))));
                                arr_106 [(short)18] [i_28] [i_28] [i_30] [i_29] [(short)18] = ((/* implicit */long long int) (_Bool)1);
                                var_44 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_92 [i_28] [i_29]))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_91 [7U] [i_28]))));
                                arr_107 [i_28] [i_28] [i_29 + 2] [i_28] [i_32 - 1] [i_32] [i_29] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) ((arr_93 [i_28]) / (((/* implicit */int) (short)-13233))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_33 = 0; i_33 < 19; i_33 += 3) 
                    {
                        arr_110 [i_28] [15ULL] [i_29] [i_30] [i_33] [i_33] = (!(((/* implicit */_Bool) arr_50 [i_29] [i_29] [i_29 - 1])));
                        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((long long int) (short)3840)))));
                        var_46 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)27)) || (((/* implicit */_Bool) (short)26072)))) ? (((/* implicit */int) ((unsigned short) (short)3840))) : (arr_93 [i_28])));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_89 [i_29 + 1]))) : (arr_67 [i_28] [i_29 + 2] [i_30] [i_29 + 1])));
                    }
                }
            } 
        } 
        arr_111 [i_28] = ((((/* implicit */_Bool) ((unsigned int) arr_38 [i_28] [i_28] [i_28]))) ? (arr_38 [i_28] [i_28] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_28] [i_28] [i_28])))))));
    }
}
