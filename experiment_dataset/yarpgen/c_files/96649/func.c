/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96649
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
    var_12 = ((/* implicit */long long int) (-(((unsigned long long int) (-(((/* implicit */int) var_9)))))));
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 1) 
                {
                    {
                        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20295)) ? (13071643153013454820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20295)))))) ? (((/* implicit */unsigned long long int) (+(arr_12 [i_3 + 1] [i_3 + 1] [i_3] [2U] [i_1 + 2])))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) * (var_8)))));
                        arr_16 [i_1 - 1] [i_2] &= ((/* implicit */long long int) ((max((11514003073123235342ULL), (((/* implicit */unsigned long long int) (unsigned char)174)))) != (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -8192LL)) ? (1941372501U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21467))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [9LL] [4ULL])) + (((/* implicit */int) arr_1 [7ULL]))))))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~((~(var_3))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_16 = ((unsigned int) 7946225991624815328LL);
            var_17 = ((/* implicit */unsigned long long int) (~((~(1807088087U)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 4) 
                    {
                        {
                            var_18 = (~(3339646928992685188LL));
                            var_19 = ((/* implicit */unsigned int) (-(arr_9 [i_5 - 3] [i_5] [i_5] [i_5 - 1])));
                        }
                    } 
                } 
                var_20 = (-((~(arr_14 [i_0] [9U] [7LL] [i_4]))));
            }
            for (short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) arr_0 [i_0] [(signed char)6])) : ((-(arr_25 [i_4] [i_8] [i_4] [9ULL] [(signed char)6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_6), (var_6))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_22 = ((/* implicit */long long int) (-((~(arr_28 [i_8])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_37 [i_9] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-6)))));
                        var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_20 [i_10] [i_10]));
                        arr_38 [i_8] [i_10] [(signed char)9] [(signed char)9] [i_8] [(signed char)9] [i_8] = ((/* implicit */unsigned short) var_7);
                    }
                    for (short i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        arr_41 [(unsigned char)7] [i_4] [i_8] [i_0] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 16442572066910499680ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (857904048516757528ULL))) : (min((var_4), (var_7))))));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((16261425047921488251ULL), (((/* implicit */unsigned long long int) 4017985674U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8192LL) != (((/* implicit */long long int) 4294967294U)))))) : (((unsigned long long int) arr_39 [i_8] [i_9] [9U] [i_8] [i_8])))))));
                        arr_42 [i_11 + 1] [i_8] [i_8] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_11 - 1] [i_11] [i_11 - 1])))))) % (((((/* implicit */_Bool) min((16442572066910499667ULL), (arr_9 [i_4] [2U] [i_9] [i_9])))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [8ULL] [i_11 - 1])), (var_9))))))));
                    }
                }
                for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 2) 
                {
                    arr_46 [i_0] [1ULL] [i_8] [i_0] [(signed char)0] = ((/* implicit */unsigned char) var_3);
                    var_25 = ((/* implicit */long long int) arr_45 [i_12] [i_4] [i_4] [i_4] [(signed char)1]);
                    arr_47 [i_0] [i_0] [i_8] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (33256)))))) ? (2977613353053018978LL) : (((/* implicit */long long int) arr_14 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1])))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((arr_0 [6ULL] [(unsigned char)8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_4] [i_4] [(signed char)7] [(short)5])))))))));
                    arr_50 [i_0] [i_4] [i_8] [i_4] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) min((276981621U), (((/* implicit */unsigned int) (unsigned short)37121))))), (var_10)))));
                }
                var_28 = (-((-(7101373224181203215ULL))));
                var_29 = ((/* implicit */signed char) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37121))) | (2004172006799051936ULL))), (arr_23 [i_8] [i_4] [(unsigned short)7])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_14 = 4; i_14 < 9; i_14 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2004172006799051935ULL)) ? ((-(4017985674U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50481)))));
                    var_31 = ((/* implicit */unsigned char) (short)12219);
                }
                for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    arr_57 [i_8] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)65458))))))) >= (((((/* implicit */_Bool) var_8)) ? (arr_22 [i_0] [i_4] [i_0] [i_15]) : (arr_22 [i_0] [i_0] [i_0] [i_0])))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_8] [i_4] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (max((var_3), (((/* implicit */long long int) arr_31 [i_0] [(unsigned char)6] [i_0] [(short)5])))) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) == ((-(arr_0 [i_0] [i_0])))))) : ((+(((/* implicit */int) arr_15 [i_0]))))));
                    var_33 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                }
            }
            for (signed char i_16 = 3; i_16 < 7; i_16 += 1) 
            {
                arr_60 [i_0] [7ULL] [7ULL] = ((/* implicit */unsigned long long int) (short)-27385);
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        {
                            arr_66 [i_0] [i_0] [i_4] [i_0] [i_18] [i_4] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_2 [1ULL] [i_0]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            var_34 = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)54))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(276981636U))))))));
                            var_35 = ((/* implicit */unsigned long long int) (~(var_3)));
                        }
                    } 
                } 
                arr_67 [i_4] [i_16 - 2] = 6034136810478481910ULL;
            }
        }
        /* vectorizable */
        for (short i_19 = 2; i_19 < 8; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_20 = 2; i_20 < 8; i_20 += 1) 
            {
                arr_74 [i_19] [6U] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-12202)) ? (arr_19 [i_20 - 1] [i_19]) : (arr_25 [i_20 + 2] [i_20 + 2] [8ULL] [i_19 + 2] [i_0])));
                var_36 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)11303))));
                arr_75 [i_19] [(unsigned short)6] [(unsigned short)6] = ((((/* implicit */_Bool) 0ULL)) ? (arr_14 [i_20 - 2] [i_19 + 2] [i_19 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446741874686296064ULL)))))));
                arr_76 [i_19] = ((/* implicit */unsigned long long int) ((signed char) var_4));
            }
            for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 2) 
            {
                arr_79 [i_19] [i_0] [i_19] = ((/* implicit */unsigned int) (~(arr_72 [i_19 + 2])));
                /* LoopSeq 4 */
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_0] [i_0] [i_21 + 1] [i_21 + 1] [i_22] [i_21 + 1]))) / (3625557541U)))));
                        var_38 = ((/* implicit */signed char) arr_11 [i_0] [i_0]);
                    }
                    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        arr_88 [i_19] [i_22] [i_21 + 1] [i_19 - 1] [i_19] = ((/* implicit */unsigned int) (-(0ULL)));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)102))))) >> (((((/* implicit */int) arr_15 [5U])) - (35417)))));
                        arr_89 [i_24] [i_24] [i_24] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [(short)0] [5ULL] [i_19 + 2] [5ULL] [i_21 - 1])) ? (arr_12 [2ULL] [i_19 + 1] [i_19 - 2] [2ULL] [i_21 - 1]) : (arr_12 [i_0] [i_0] [i_19 + 2] [i_19 + 1] [i_21 + 1])));
                    }
                    for (short i_25 = 0; i_25 < 10; i_25 += 1) 
                    {
                        arr_92 [i_0] [i_0] [i_19 + 1] [i_19] [i_22] [(signed char)1] [i_25] = ((/* implicit */unsigned long long int) ((unsigned short) 10010551398532080510ULL));
                        var_40 = ((/* implicit */short) (~(((unsigned int) (unsigned short)15055))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (4040064118U)))) % (var_6)));
                        arr_93 [i_0] [i_19] = ((/* implicit */signed char) (~(451348600U)));
                        var_42 = ((/* implicit */unsigned short) var_6);
                    }
                    arr_94 [i_19] [3U] [3U] [i_21] [i_19] = ((/* implicit */unsigned long long int) ((unsigned int) arr_51 [i_0] [i_0] [i_19 - 2] [i_21] [i_22]));
                    var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9559)) || (((/* implicit */_Bool) (unsigned short)65527))));
                }
                for (unsigned char i_26 = 0; i_26 < 10; i_26 += 1) /* same iter space */
                {
                    arr_97 [i_19] [i_21 - 1] [i_19] [i_19] = ((/* implicit */signed char) (+(((/* implicit */int) arr_35 [i_19 + 2] [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_21]))));
                    arr_98 [i_26] [i_19] [i_21] [0ULL] [i_19] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_90 [i_0] [i_19 + 2] [i_19 + 2] [i_19] [i_21 + 1]))));
                    arr_99 [i_0] [7ULL] [7ULL] [i_19] [i_26] = ((/* implicit */unsigned char) (~(((long long int) 18446744073709551615ULL))));
                }
                for (unsigned char i_27 = 0; i_27 < 10; i_27 += 1) /* same iter space */
                {
                    var_44 = (~(arr_24 [i_21 - 1] [i_19 + 2]));
                    arr_103 [2U] [2U] [i_21] [i_19] = ((/* implicit */unsigned int) ((unsigned long long int) 2427018828974370303ULL));
                    /* LoopSeq 3 */
                    for (signed char i_28 = 0; i_28 < 10; i_28 += 3) 
                    {
                        var_45 ^= ((/* implicit */long long int) (~(var_6)));
                        arr_106 [i_0] [i_0] [i_19] [i_19 - 1] [(unsigned short)5] [4ULL] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 726047130698940648ULL)) ? (arr_72 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7944)))))) ? (var_8) : (var_10)));
                        arr_107 [i_0] [i_19] [i_21] [i_21] [(short)8] = ((/* implicit */unsigned long long int) arr_102 [i_28] [1ULL]);
                        arr_108 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (signed char i_29 = 0; i_29 < 10; i_29 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_4))))));
                        var_47 = ((unsigned int) arr_44 [i_19 + 1] [i_19 - 1] [9ULL] [i_19 + 1] [i_19]);
                        arr_111 [i_0] [i_0] [i_0] [i_19] [i_0] = ((/* implicit */unsigned int) var_2);
                        arr_112 [i_0] [(signed char)5] [(signed char)6] [i_0] [(signed char)9] [i_19] [3U] = ((/* implicit */long long int) ((arr_34 [i_21] [4LL] [i_21 - 1] [i_19] [i_21 + 1] [i_21 - 1]) >= (arr_34 [i_21] [i_21] [i_21 - 1] [i_19] [i_21 - 1] [i_21])));
                    }
                    for (unsigned long long int i_30 = 2; i_30 < 9; i_30 += 4) 
                    {
                        var_48 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_55 [i_0] [i_19 - 1] [(signed char)5] [i_30 + 1])) ? (arr_24 [4U] [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))))));
                        var_49 = ((/* implicit */unsigned short) ((var_6) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                    }
                    var_50 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 8436192675177471094ULL)) ? (var_6) : (var_7))));
                    arr_115 [i_21 + 1] [i_19] [i_19] [i_0] = ((/* implicit */long long int) arr_51 [i_21 - 1] [i_19 + 2] [i_19 + 2] [i_19] [i_19 + 2]);
                }
                for (unsigned char i_31 = 0; i_31 < 10; i_31 += 1) /* same iter space */
                {
                    arr_118 [i_0] [0LL] [i_19] [0LL] [i_21 - 1] [i_19] = ((/* implicit */unsigned long long int) (-(-1LL)));
                    arr_119 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_21] [i_19 + 1] [i_19] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_51 = ((/* implicit */signed char) (~(arr_4 [i_0])));
                    /* LoopSeq 3 */
                    for (unsigned char i_32 = 0; i_32 < 10; i_32 += 1) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_39 [i_19] [i_19 - 1] [i_19 - 2] [i_21 - 1] [i_31]))));
                        var_53 = ((/* implicit */unsigned char) (~(arr_64 [i_0] [i_0] [(unsigned short)3] [8LL] [(unsigned char)9])));
                        var_54 = ((/* implicit */short) var_1);
                        arr_122 [i_0] [i_19] [i_21 - 1] [i_19] [i_21 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_8))))));
                    }
                    for (unsigned char i_33 = 0; i_33 < 10; i_33 += 1) /* same iter space */
                    {
                        arr_125 [i_33] [i_19] [i_21 - 1] [i_19] [i_0] = ((/* implicit */unsigned char) ((arr_113 [i_19] [i_19] [i_21 - 1] [i_19 - 1] [i_19]) * (arr_113 [i_19] [i_19] [i_21 - 1] [i_19 - 1] [i_21 - 1])));
                        var_55 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_87 [3ULL] [i_19 + 2] [i_21] [i_31] [i_33] [i_0]))))) ? (3057830366759646400ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)11))))));
                    }
                    for (signed char i_34 = 1; i_34 < 8; i_34 += 1) 
                    {
                        arr_128 [i_31] [i_19 + 1] [0LL] [i_31] [i_19] [0LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_34 - 1]))) : (var_10)));
                        var_56 = ((/* implicit */long long int) (+(((/* implicit */int) arr_53 [i_0] [i_0] [i_21 - 1] [i_21 + 1]))));
                        arr_129 [i_19] [i_19 - 1] [i_21] [(unsigned short)1] [i_21] [i_34 + 2] [i_34] = var_5;
                    }
                }
                var_57 = ((/* implicit */unsigned long long int) (-(3030227632U)));
            }
            arr_130 [i_19] = ((/* implicit */signed char) (+(arr_22 [6ULL] [3ULL] [i_19 + 1] [i_19 - 2])));
            arr_131 [i_0] [i_0] [i_19] = ((/* implicit */unsigned long long int) (short)-12897);
            var_58 = ((/* implicit */unsigned int) var_9);
        }
        /* LoopNest 3 */
        for (unsigned short i_35 = 0; i_35 < 10; i_35 += 4) 
        {
            for (unsigned long long int i_36 = 2; i_36 < 9; i_36 += 3) 
            {
                for (unsigned long long int i_37 = 3; i_37 < 7; i_37 += 1) 
                {
                    {
                        var_59 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_60 ^= ((/* implicit */short) var_7);
                        arr_139 [i_35] [i_36] [i_36] = ((unsigned long long int) ((((/* implicit */int) arr_87 [i_0] [i_37 - 3] [i_36] [i_36 + 1] [i_37 - 3] [7ULL])) << (((var_8) - (17959799687876267182ULL)))));
                    }
                } 
            } 
        } 
    }
}
