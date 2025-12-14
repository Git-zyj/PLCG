/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80076
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
    var_11 = ((((((((/* implicit */int) (short)-29323)) <= (((/* implicit */int) (signed char)96)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_1)) ? (-8400416980040328598LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103))))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) min((var_6), ((signed char)-1)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (-(arr_1 [i_0 + 2]))))));
        var_13 = (signed char)21;
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
            {
                arr_12 [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                arr_13 [13U] [i_2] [i_3] [i_2] = ((/* implicit */long long int) 0U);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_18 [i_1] [i_5] |= ((/* implicit */unsigned short) ((var_10) == (((/* implicit */unsigned long long int) (-(arr_1 [i_3]))))));
                        arr_19 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2651281147U)) ? (((/* implicit */int) arr_8 [i_2])) : (arr_10 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_3 - 1])));
                        arr_20 [i_2] [12ULL] = ((unsigned int) (unsigned char)0);
                    }
                    var_14 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1]))) | (((arr_5 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)2] [i_3] [i_3])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_23 [i_2] [i_2] [(short)21] [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_1]);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) <= (arr_22 [i_4] [i_3 + 1] [i_3 + 1] [i_1 + 1] [0])));
                    }
                    arr_24 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((24ULL) == (0ULL)));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) var_8);
                        var_17 *= (-(arr_15 [i_1 - 1] [i_1 + 2] [i_1]));
                    }
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((arr_21 [i_1] [i_2] [i_3] [i_8] [i_1 - 1]) ? (((/* implicit */int) arr_17 [i_1 + 1] [i_8] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_32 [i_2] = ((/* implicit */short) 142989288169013248ULL);
                        var_19 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                }
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_20 |= ((/* implicit */unsigned int) var_8);
                arr_35 [i_1] [i_1] [i_2] = ((/* implicit */short) -128668101);
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_0 [i_1] [i_1 + 1])));
                var_22 = ((/* implicit */unsigned int) (+(var_10)));
                var_23 = ((/* implicit */short) ((unsigned int) arr_25 [i_2] [i_2] [(signed char)12] [i_2] [i_2]));
            }
            for (int i_11 = 2; i_11 < 20; i_11 += 1) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)113)) | (((/* implicit */int) arr_31 [i_1] [i_2] [i_11] [i_11]))))) ? (var_7) : (((/* implicit */long long int) 898731242U))));
                arr_38 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_16 [i_1] [13] [13] [i_2] [13]) % (((/* implicit */unsigned long long int) arr_1 [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_17 [i_1] [i_2] [i_1])))))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6LL)) ? (1688125452U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_33 [i_2] [i_1])) : (((/* implicit */int) (!(arr_21 [i_1] [i_1] [i_2] [i_11] [(signed char)9]))))));
            }
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    {
                        arr_43 [i_1] [i_1] [i_2] [i_13] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2161727821137838080ULL)) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1]))));
                        var_26 |= ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_36 [i_1] [i_1] [i_12] [i_1])) : (var_10))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [5LL] [5LL] [i_1 + 2])))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_2] [16U] [i_1] [i_1 - 1] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_13] [i_13] [i_13] [i_13])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_1] [(_Bool)1] [i_2] [16LL]))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                var_28 += ((/* implicit */unsigned int) arr_6 [i_1 - 1]);
                var_29 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1] [(_Bool)1]))));
                var_30 += ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_14] [i_1 - 1])) % (((/* implicit */int) arr_33 [i_14] [i_1 - 1]))));
            }
            for (unsigned short i_15 = 1; i_15 < 20; i_15 += 4) 
            {
                arr_49 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_2] [i_15] [i_15]))))) != ((+(8U)))));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            arr_58 [7ULL] [i_2] = ((/* implicit */short) 2147483647);
                            var_31 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_15 + 3] [i_2] [i_15])) >= (((/* implicit */int) arr_17 [i_15 + 1] [i_2] [i_2]))));
                            var_32 *= ((/* implicit */signed char) arr_55 [(signed char)3] [i_1] [i_1 + 1] [i_2] [i_15 - 1] [i_15 + 2] [i_17]);
                            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_36 [(unsigned char)12] [i_2] [i_15] [i_15])))) ? (((/* implicit */int) arr_21 [i_1] [i_1] [(unsigned char)13] [i_1 + 1] [i_2])) : (((/* implicit */int) ((signed char) arr_51 [(short)4] [i_2] [16U] [i_16])))));
                        }
                    } 
                } 
                arr_59 [i_1] [11ULL] [i_15] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_15 + 4] [i_15] [i_15 + 4] [i_1 + 1]))) | ((~(8393451342808168762ULL)))));
            }
            arr_60 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [i_1 + 1] [21] [i_2] [(unsigned short)12]))));
        }
        arr_61 [i_1] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_55 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))));
    }
    for (signed char i_18 = 2; i_18 < 15; i_18 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) 
        {
            for (long long int i_20 = 4; i_20 < 14; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 16; i_22 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) arr_65 [i_18 + 1] [i_20 - 2]);
                            arr_79 [i_18] [(unsigned short)2] [i_18] [i_18] |= ((/* implicit */long long int) arr_69 [i_19] [i_18 - 1] [i_19] [i_20 - 4]);
                            var_35 = ((/* implicit */_Bool) arr_52 [i_22] [i_21] [i_20]);
                        }
                        for (short i_23 = 1; i_23 < 13; i_23 += 4) 
                        {
                            var_36 -= (+(((/* implicit */int) (unsigned short)31)));
                            var_37 = ((/* implicit */long long int) ((unsigned long long int) 322714442U));
                        }
                        arr_82 [(signed char)15] [(short)6] [i_18] [(short)6] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned int) arr_6 [i_20]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_21] [13ULL] [13ULL] [i_18]))) : (min((10053292730901382854ULL), (((/* implicit */unsigned long long int) (short)-32765))))));
                        /* LoopSeq 3 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_38 = ((/* implicit */int) (~(((max((arr_69 [9U] [i_18] [i_21] [i_21]), (((/* implicit */unsigned int) (_Bool)0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_20])))))));
                            var_39 = ((/* implicit */unsigned long long int) ((((_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 898731242U))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)(-32767 - 1))) <= (5)))))));
                        }
                        for (signed char i_25 = 2; i_25 < 14; i_25 += 1) 
                        {
                            var_40 = ((arr_34 [i_20]) / (((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))));
                            var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [(unsigned short)12] [i_25 - 2] [i_20] [i_18 - 2])) >> (((((arr_63 [i_18]) | (((/* implicit */int) arr_86 [i_18] [i_19] [i_20] [i_21] [i_25] [(signed char)4] [(_Bool)1])))) + (6188)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_80 [i_25 + 2] [i_21] [i_20 - 1] [i_19] [i_18 - 2] [i_18]))))) : (((((/* implicit */_Bool) arr_30 [i_18] [i_20] [i_19] [i_21] [(signed char)18])) ? (((((/* implicit */_Bool) 7273243420415665778ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_19] [i_20] [i_20] [i_19]))) : (arr_41 [i_18] [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_18] [(_Bool)1] [i_20] [(_Bool)1])))))));
                        }
                        for (unsigned long long int i_26 = 4; i_26 < 15; i_26 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_41 [i_20] [i_20]))));
                            var_43 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) arr_68 [i_18] [i_18] [i_19])) >> (((/* implicit */int) (signed char)31))))))) ? (((/* implicit */int) arr_84 [i_18] [i_19] [i_19] [i_18])) : (((/* implicit */int) ((((/* implicit */int) (short)-30231)) <= (((/* implicit */int) (unsigned char)139))))));
                        }
                    }
                } 
            } 
        } 
        arr_91 [i_18] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_18] [i_18]))) : (arr_22 [i_18] [i_18] [i_18] [i_18] [i_18])))))) > (min((((((/* implicit */_Bool) arr_73 [i_18])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_44 [(_Bool)1] [i_18]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 53768734451837298ULL)) && (((/* implicit */_Bool) arr_31 [(_Bool)1] [i_18] [11ULL] [11ULL])))))))));
        arr_92 [(unsigned char)3] [(unsigned char)3] |= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-31))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))) * (((unsigned int) var_10))))));
    }
    for (unsigned short i_27 = 0; i_27 < 10; i_27 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_28 = 0; i_28 < 10; i_28 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_29 = 0; i_29 < 10; i_29 += 1) 
            {
                for (short i_30 = 3; i_30 < 9; i_30 += 4) 
                {
                    for (short i_31 = 4; i_31 < 6; i_31 += 4) 
                    {
                        {
                            var_44 += (+(max((((/* implicit */unsigned long long int) arr_76 [i_27] [i_30] [i_31] [i_27] [i_31] [i_28] [i_28])), (min((arr_104 [(unsigned char)4] [3ULL]), (((/* implicit */unsigned long long int) arr_101 [i_28] [i_28] [i_28] [i_28])))))));
                            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((int) (_Bool)1)))));
                            var_46 = (!(((_Bool) arr_42 [i_30 - 3] [i_30 - 3] [i_31] [i_31 - 2])));
                        }
                    } 
                } 
            } 
            var_47 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_27] [i_28] [i_27] [14LL]))) * (arr_57 [i_27] [i_27] [i_27]))) - (((((/* implicit */_Bool) 15830520041542583338ULL)) ? (arr_57 [i_27] [(unsigned short)18] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_28] [i_28] [i_27] [18LL])))))));
            var_48 += ((/* implicit */short) (signed char)-72);
        }
        arr_107 [i_27] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1))));
        /* LoopSeq 3 */
        for (long long int i_32 = 4; i_32 < 8; i_32 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_33 = 1; i_33 < 9; i_33 += 1) 
            {
                for (int i_34 = 0; i_34 < 10; i_34 += 4) 
                {
                    {
                        arr_116 [i_32] [i_32] [i_32] [i_33] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_34] [9ULL] [9ULL] [9ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_86 [i_27] [i_27] [i_34] [i_27] [i_27] [i_27] [i_32 - 2])) ? ((~(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))) : (min(((~(var_10))), (((/* implicit */unsigned long long int) var_4))))));
                        var_49 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-23890))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (18U))))))));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-72)) ? (((((6528879480477744705ULL) % (((/* implicit */unsigned long long int) arr_105 [i_27] [(_Bool)1] [(_Bool)1])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_27] [i_27] [i_27]))))))))) : (((/* implicit */unsigned long long int) max((arr_34 [i_27]), (arr_34 [i_27]))))));
        }
        for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) /* same iter space */
        {
            arr_119 [i_27] = ((/* implicit */short) var_2);
            arr_120 [i_27] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_15 [i_27] [i_35] [i_35])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_35] [i_35] [i_27]))) : (arr_15 [i_27] [i_27] [i_27]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_27] [i_27] [i_27] [i_35 + 1])) ^ (((/* implicit */int) arr_11 [i_27] [i_27] [i_35] [i_35 + 1])))))));
            /* LoopNest 3 */
            for (unsigned char i_36 = 0; i_36 < 10; i_36 += 1) 
            {
                for (long long int i_37 = 0; i_37 < 10; i_37 += 1) 
                {
                    for (int i_38 = 2; i_38 < 8; i_38 += 2) 
                    {
                        {
                            arr_129 [i_27] [i_37] [i_36] [i_37] [(_Bool)1] [i_37] [i_35] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49417)) >> (((/* implicit */int) (_Bool)1))));
                            var_51 = ((/* implicit */_Bool) (-(2147483647)));
                            var_52 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)32)) ? ((~(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_25 [i_27] [i_27] [4U] [i_36] [i_35])))))), (((((/* implicit */_Bool) arr_108 [i_38 + 2] [i_38] [i_35 + 1])) ? (((/* implicit */int) arr_62 [i_37] [i_35 + 1])) : (((/* implicit */int) (unsigned char)158))))));
                            var_53 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)50)), ((((-(arr_47 [i_27] [i_27] [i_27]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_36] [i_36])))))));
                            var_54 = ((/* implicit */short) (+(((/* implicit */int) (short)23887))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_39 = 0; i_39 < 0; i_39 += 1) /* same iter space */
        {
            arr_134 [i_27] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (0ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26197)) ? (-921709356) : (((/* implicit */int) arr_56 [i_39] [6LL] [i_27] [5U] [i_27])))))));
            /* LoopNest 2 */
            for (int i_40 = 0; i_40 < 10; i_40 += 4) 
            {
                for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                {
                    {
                        var_55 = ((/* implicit */_Bool) 2168633216U);
                        var_56 = ((/* implicit */short) (_Bool)0);
                        var_57 *= ((unsigned int) var_2);
                    }
                } 
            } 
            var_58 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-67))));
        }
    }
    var_59 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */signed char) var_4))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (var_10)))));
    var_60 = ((/* implicit */unsigned int) var_6);
}
