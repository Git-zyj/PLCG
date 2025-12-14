/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84701
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_13 += ((/* implicit */unsigned long long int) var_11);
            var_14 = var_8;
            arr_6 [7ULL] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_3 [15ULL] [i_1 - 1] [(_Bool)1])))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_11 [4ULL] = ((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1 - 2] [(unsigned char)12] [i_2 - 1]), (((long long int) (short)19898))));
                arr_12 [(unsigned short)9] [(unsigned char)3] [(short)9] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1] [(signed char)8])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2] [7LL])) : (((/* implicit */int) var_5))))), (((unsigned long long int) var_10))));
            }
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                arr_15 [15LL] [(signed char)7] [(unsigned short)3] [1U] &= ((/* implicit */signed char) min((((((/* implicit */long long int) var_0)) & (min((arr_3 [2] [1ULL] [4ULL]), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -1252340214)) ? (((/* implicit */unsigned int) arr_13 [13ULL] [(signed char)12] [(signed char)8])) : (var_0))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-76))))))))));
                arr_16 [1U] = ((/* implicit */signed char) ((short) var_7));
            }
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_26 [(unsigned char)3] [(unsigned short)1] [i_4] [(unsigned char)9] = ((/* implicit */short) (+((-(((/* implicit */int) var_4))))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned long long int) -1252340214)) : (562949953413120ULL)))) ? (max(((+(var_11))), (((/* implicit */unsigned int) ((signed char) var_11))))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) (short)19889))))))))))));
                            var_16 &= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (var_1));
                            arr_27 [i_4] [11U] [9U] [(unsigned short)0] [(unsigned char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47200)) ? (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_2)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 15; i_7 += 1) 
                {
                    arr_31 [(signed char)3] [i_4] [13U] = ((/* implicit */signed char) (_Bool)1);
                    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)60)), (var_4)))) ? (((unsigned long long int) ((unsigned char) (unsigned short)47206))) : (((/* implicit */unsigned long long int) var_9))));
                }
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_34 [i_4] [9U] [4] [(unsigned char)3] [(signed char)4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_0)), (var_9)));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) arr_28 [i_1 + 2] [14U] [i_1 - 2] [i_1 - 2] [i_4]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_10))) : ((~(((/* implicit */int) var_12))))));
                    var_19 ^= ((/* implicit */int) (short)19892);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [(signed char)13] [i_4] [(signed char)15] [(_Bool)1] [(unsigned char)6] [1U] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_1))) : (((/* implicit */long long int) (+(var_0))))));
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                    }
                }
            }
            /* vectorizable */
            for (short i_10 = 1; i_10 < 15; i_10 += 1) 
            {
                arr_40 [i_10] [8ULL] = ((/* implicit */signed char) (-((+(4877150206192221848ULL)))));
                var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
            }
        }
        for (int i_11 = 2; i_11 < 15; i_11 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_11 - 2] [i_11 + 2])) ? (((((/* implicit */int) (unsigned char)9)) >> (((var_11) - (1631012873U))))) : (((/* implicit */int) var_12))))));
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 16; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            arr_54 [(unsigned char)7] [16ULL] [(unsigned short)10] [i_12] [11ULL] [16ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)124)) >> (((((/* implicit */int) var_5)) - (32)))))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) arr_18 [14ULL] [2ULL] [5ULL] [i_13 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)-97)))))));
                            var_23 += (-(((/* implicit */int) max((var_4), (var_3)))));
                            arr_55 [i_12] [11U] [4ULL] [12] [(unsigned char)7] [15] [7] = ((/* implicit */signed char) ((unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (3838607232251860276ULL)))))));
                            arr_56 [(signed char)8] [i_12] [16LL] [(unsigned short)8] [12U] = ((/* implicit */unsigned char) (+((+(var_2)))));
                        }
                    } 
                } 
                arr_57 [10ULL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_12))) != (((/* implicit */int) var_7))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 14325124036202251997ULL))));
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) - (25075)))));
                /* LoopSeq 2 */
                for (unsigned char i_16 = 1; i_16 < 16; i_16 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_17 = 3; i_17 < 15; i_17 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_11)) : (var_1)));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))));
                        var_28 -= ((/* implicit */unsigned short) var_12);
                        arr_65 [(short)16] [(signed char)6] [i_17] = ((/* implicit */short) (_Bool)1);
                    }
                    for (signed char i_18 = 3; i_18 < 15; i_18 += 3) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */int) (short)19898)) <= (((/* implicit */int) var_6))));
                        arr_69 [10LL] [16LL] [(unsigned short)16] [(_Bool)1] [(signed char)8] [i_18] = ((/* implicit */unsigned short) ((signed char) arr_28 [(signed char)6] [(signed char)10] [(signed char)14] [7U] [i_18]));
                        var_30 &= ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_4)))) + (2147483647))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) - (53535)))));
                    }
                    for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
                    {
                        arr_73 [16ULL] [(unsigned short)14] [6ULL] [5U] [(signed char)1] [(_Bool)1] [(unsigned char)7] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned char)245)))));
                        arr_74 [(signed char)0] [14U] [(short)6] [8ULL] [15] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_25 [i_11]))));
                        arr_75 [16] [10LL] [0LL] [0LL] [(unsigned short)2] = ((/* implicit */signed char) (-(var_0)));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)70))) < (var_9)))))));
                        arr_76 [(unsigned char)5] [4ULL] [2] [5U] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(unsigned short)15]))) : (var_11))));
                    }
                    var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                }
                for (int i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    arr_79 [(_Bool)1] [8U] [(unsigned char)5] [9] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((int) (unsigned char)9))) : (var_1))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_21 = 1; i_21 < 15; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_86 [(unsigned char)2] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) < (((unsigned long long int) var_1))));
                            arr_87 [13] [6U] [12ULL] [(_Bool)1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_2));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) var_4);
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
            {
                arr_90 [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (unsigned char)246)))) : ((-(((/* implicit */int) (signed char)86))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((var_11) << (((/* implicit */int) ((var_1) != (((/* implicit */long long int) var_0)))))))));
                arr_91 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) ((unsigned char) (_Bool)1))) >> (((((/* implicit */int) var_7)) - (14245))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [(unsigned char)10] [i_23] [(signed char)7] [(unsigned short)2] [i_11 + 2])), (var_5))))));
            }
            for (unsigned int i_24 = 0; i_24 < 17; i_24 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 17; i_25 += 1) 
                {
                    for (int i_26 = 1; i_26 < 16; i_26 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_4)) - (25080))))));
                            arr_100 [i_24] [(unsigned short)13] = ((/* implicit */unsigned int) ((unsigned long long int) arr_28 [8ULL] [14] [(signed char)6] [(_Bool)1] [i_24]));
                            arr_101 [12] [0LL] [(short)7] [i_24] [13LL] [15ULL] [(short)9] = ((/* implicit */int) var_7);
                        }
                    } 
                } 
                arr_102 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
            }
        }
        var_36 = ((/* implicit */_Bool) var_11);
        var_37 = ((/* implicit */unsigned char) var_4);
    }
    /* LoopSeq 2 */
    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 1) 
    {
        var_38 = ((/* implicit */signed char) var_4);
        /* LoopSeq 2 */
        for (long long int i_28 = 1; i_28 < 6; i_28 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */signed char) arr_104 [6]);
            var_40 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) var_11)) & (var_9))))) / (max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_7))))));
            var_41 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10400961620252748858ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), ((~(arr_77 [i_28 + 3] [(unsigned short)5] [10ULL] [12LL])))));
            arr_108 [(unsigned char)9] = ((/* implicit */unsigned long long int) var_5);
            /* LoopSeq 1 */
            for (signed char i_29 = 3; i_29 < 8; i_29 += 1) 
            {
                var_42 = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (unsigned char i_30 = 2; i_30 < 9; i_30 += 3) 
                {
                    for (int i_31 = 1; i_31 < 8; i_31 += 2) 
                    {
                        {
                            arr_116 [(unsigned char)2] [(unsigned char)6] [6LL] [(unsigned char)4] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | ((+(((/* implicit */int) max((var_3), (var_6))))))));
                            arr_117 [(unsigned short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_72 [16LL] [0U] [5ULL] [1] [(unsigned short)7]))))) - (((/* implicit */int) (unsigned char)9))))) ? ((+(((/* implicit */int) ((signed char) var_5))))) : ((-((-(((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (((unsigned long long int) var_3))));
                /* LoopNest 2 */
                for (unsigned int i_32 = 0; i_32 < 10; i_32 += 1) 
                {
                    for (unsigned long long int i_33 = 2; i_33 < 9; i_33 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_5)) : (var_10)))))));
                            var_45 = ((/* implicit */_Bool) ((int) var_12));
                            arr_125 [i_32] [8ULL] = ((/* implicit */int) (((-(var_9))) > (var_1)));
                            var_46 = var_7;
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_34 = 1; i_34 < 6; i_34 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                arr_131 [2U] [8] [(_Bool)1] [(signed char)6] = ((/* implicit */unsigned long long int) ((short) var_0));
                arr_132 [(_Bool)1] [(signed char)9] [(short)4] [(signed char)3] = ((/* implicit */unsigned int) var_4);
            }
            /* LoopSeq 2 */
            for (int i_36 = 0; i_36 < 10; i_36 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_37 = 0; i_37 < 10; i_37 += 2) 
                {
                    for (signed char i_38 = 0; i_38 < 10; i_38 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) var_8);
                            var_48 = var_2;
                        }
                    } 
                } 
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (signed char)-81)) + (81)))));
            }
            for (long long int i_39 = 0; i_39 < 10; i_39 += 2) 
            {
                arr_142 [(unsigned short)4] [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -21LL)) ? (10611613713961074053ULL) : (((/* implicit */unsigned long long int) 875682438U))));
                arr_143 [8] [(signed char)8] [7LL] = ((/* implicit */signed char) var_12);
                arr_144 [6] [(_Bool)1] [6] = ((/* implicit */unsigned int) var_3);
            }
            /* LoopSeq 1 */
            for (unsigned char i_40 = 0; i_40 < 10; i_40 += 3) 
            {
                var_50 += ((/* implicit */long long int) ((unsigned int) var_2));
                /* LoopSeq 1 */
                for (signed char i_41 = 1; i_41 < 8; i_41 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_42 = 0; i_42 < 10; i_42 += 2) 
                    {
                        var_51 = ((/* implicit */int) var_11);
                        arr_155 [(unsigned char)8] [(unsigned char)7] [(unsigned char)6] [(short)1] [4] [(unsigned short)0] = ((/* implicit */long long int) ((((/* implicit */int) (short)19896)) >> (((/* implicit */int) (signed char)20))));
                    }
                    for (signed char i_43 = 0; i_43 < 10; i_43 += 3) 
                    {
                        var_52 = ((/* implicit */_Bool) ((unsigned long long int) 72057456598974464ULL));
                        arr_159 [6LL] [i_43] = ((/* implicit */long long int) var_2);
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11))))));
                        arr_160 [i_43] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_41 - 1] [i_34 + 4]) : (arr_7 [i_41 + 1] [i_34 + 4])));
                    }
                    arr_161 [(unsigned short)3] [3LL] [(unsigned char)3] [5LL] = var_6;
                    arr_162 [7LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4))));
                }
                /* LoopNest 2 */
                for (long long int i_44 = 2; i_44 < 8; i_44 += 4) 
                {
                    for (unsigned short i_45 = 0; i_45 < 10; i_45 += 2) 
                    {
                        {
                            var_54 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_9)));
                            arr_169 [(signed char)7] = ((/* implicit */int) ((unsigned short) var_7));
                        }
                    } 
                } 
            }
            var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) ((long long int) var_3)))));
            /* LoopNest 3 */
            for (unsigned long long int i_46 = 0; i_46 < 10; i_46 += 3) 
            {
                for (unsigned long long int i_47 = 3; i_47 < 8; i_47 += 2) 
                {
                    for (unsigned short i_48 = 0; i_48 < 10; i_48 += 3) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                            var_57 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) * (var_11))))));
                            var_58 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)126)) - (((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))));
                            arr_178 [(_Bool)1] [(unsigned short)2] [(unsigned short)4] [5ULL] [5LL] = ((/* implicit */signed char) var_11);
                            var_59 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (18422840029164572066ULL) : (var_2)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_49 = 0; i_49 < 21; i_49 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_50 = 0; i_50 < 21; i_50 += 1) 
        {
            arr_185 [5] [(short)11] = ((/* implicit */unsigned int) ((((arr_181 [(short)3] [20ULL] [i_50]) > (((/* implicit */int) var_7)))) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12))))));
            arr_186 [19LL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_181 [3U] [(signed char)14] [(unsigned char)11])) && (((/* implicit */_Bool) var_11))))) * (((/* implicit */int) var_7))));
            var_60 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((var_10) / (((/* implicit */int) arr_182 [i_49] [10ULL]))))));
        }
        var_61 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_4)), (var_11)))));
        /* LoopSeq 1 */
        for (_Bool i_51 = 0; i_51 < 1; i_51 += 1) 
        {
            arr_189 [(unsigned short)2] = ((/* implicit */long long int) ((2106801483U) << (((((/* implicit */int) (unsigned char)230)) - (215)))));
            var_62 += ((/* implicit */unsigned int) var_3);
        }
    }
    var_63 = ((/* implicit */signed char) var_10);
    var_64 += var_3;
}
