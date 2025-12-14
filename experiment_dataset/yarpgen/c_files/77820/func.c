/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77820
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_8)))));
        var_14 += ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_15 [(unsigned short)6] [i_1] [(unsigned short)6] [i_2] [4LL] [i_4] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (unsigned short)29104))) - (((/* implicit */int) max(((unsigned short)9100), (((/* implicit */unsigned short) (short)-23248)))))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)7] [4LL] [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_4] [(unsigned short)9] [(unsigned short)9])) : ((~(((/* implicit */int) (unsigned short)26004)))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_20 [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (3655255764U)))), ((((_Bool)0) ? (arr_12 [i_2] [i_2 + 1] [i_2] [i_2] [(_Bool)1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2])))))));
                            var_15 += ((/* implicit */signed char) arr_6 [i_0] [i_5] [i_0]);
                            arr_21 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_3);
                        }
                        arr_22 [i_3] [(_Bool)1] [i_2] [i_2] [(signed char)19] [(signed char)19] = min((((/* implicit */int) (((!(((/* implicit */_Bool) 5366829853392330408ULL)))) && ((!(((/* implicit */_Bool) (signed char)-64))))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)54892)) : (((/* implicit */int) (unsigned short)52107)))));
                        arr_23 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2078816525767391704LL), (((/* implicit */long long int) (unsigned short)42509))))) ? (((((/* implicit */_Bool) 8849599116248674269LL)) ? (2318746382U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7592))))) : (((/* implicit */unsigned int) -581779504))));
                        var_16 = ((/* implicit */long long int) max((((1300887692286918487ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)19] [i_2 + 1] [i_2 - 2] [(signed char)19] [i_2]))))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (long long int i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) var_11);
                        var_19 -= ((/* implicit */long long int) var_2);
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_38 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-24))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((arr_28 [(short)22] [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_39 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8 + 1] = ((/* implicit */_Bool) arr_5 [i_6] [i_8] [i_10 + 1]);
                    }
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_6] [i_7] [i_8 - 1]))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_3 [i_7] [i_7] [i_8]))));
                    var_23 ^= ((/* implicit */unsigned long long int) (((!(((_Bool) arr_31 [i_8 + 1])))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_3))))));
                }
            } 
        } 
        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) ((long long int) (short)-26510))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((~(268435455ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (short)-10108))) ? (((((/* implicit */_Bool) 6691519139587950654LL)) ? (1471730864U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_6] [9LL] [i_6] [i_6] [i_6]), (var_12))))))))));
        var_25 += ((/* implicit */long long int) (!((_Bool)1)));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)10807)) < ((+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)56369)) : (((/* implicit */int) (signed char)-80))))))));
    /* LoopSeq 1 */
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)378)) ? (((/* implicit */unsigned long long int) 16383)) : (4593671619917905920ULL)))))))));
        arr_42 [0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_0 [i_11] [i_11])) & (((/* implicit */int) var_3))))));
        /* LoopSeq 4 */
        for (long long int i_12 = 3; i_12 < 9; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            arr_57 [i_11] [i_11] [4U] [i_11] = ((/* implicit */_Bool) (signed char)-111);
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_44 [(signed char)3] [(signed char)1]))));
                            arr_58 [i_11] [i_12 - 2] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_27 [i_12 - 3] [i_12 - 3] [i_12 - 1])) | (((/* implicit */int) arr_27 [i_12 + 1] [i_12 - 3] [i_12 - 3]))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)32942)) - (32925)))))))) ? (3478551548167459213LL) : (((((/* implicit */_Bool) -4780283487650906038LL)) ? (-1693088570185296124LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36868)))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)27845)))))));
            arr_59 [i_11] [i_12 - 3] [i_12 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) (unsigned short)20321)) : (((/* implicit */int) arr_50 [i_12 - 2] [i_12 - 1] [i_12 - 1] [i_12 + 1]))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) ((long long int) var_10));
            /* LoopSeq 4 */
            for (unsigned short i_17 = 4; i_17 < 9; i_17 += 1) 
            {
                arr_65 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_11] [i_17 - 4] [i_17] [(signed char)5] [i_17])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_17 - 3] [(unsigned short)19] [i_17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_17] [(signed char)6] [(signed char)6] [i_11] [i_11])))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_69 [i_16] [3LL] [i_18] = ((/* implicit */long long int) (short)8375);
                var_33 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24005)) * (((/* implicit */int) (_Bool)0))));
            }
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) var_10);
                arr_74 [i_11] [i_16] [0U] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                arr_75 [i_16] [(_Bool)1] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)20))));
            }
            for (unsigned short i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    arr_80 [i_11] [i_11] [(_Bool)1] [(_Bool)1] [i_16] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
                    {
                        arr_83 [i_20] [i_20] [i_20] [0LL] [i_20] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 767446226312533657LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1125899906842623LL)));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!((_Bool)0))))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                    {
                        arr_86 [i_11] [i_11] [i_16] [(short)3] [3U] = ((/* implicit */_Bool) var_11);
                        var_36 += ((/* implicit */unsigned int) arr_51 [i_16] [i_16]);
                    }
                    var_37 = ((/* implicit */_Bool) max((var_37), ((_Bool)1)));
                    var_38 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_5)) || ((_Bool)1)))));
                }
                for (short i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    arr_90 [i_11] [i_16] [i_20] [i_16] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_72 [i_20] [i_20] [i_20])) ? (((/* implicit */int) (short)-32742)) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_10))))));
                    arr_91 [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4557623091330681570LL))));
                }
                for (unsigned int i_25 = 1; i_25 < 9; i_25 += 1) 
                {
                    arr_95 [i_25] [i_16] [i_20] [i_16] [i_11] = ((/* implicit */unsigned short) var_1);
                    arr_96 [7LL] [0] [i_16] [i_16] [(signed char)4] = ((/* implicit */_Bool) ((((_Bool) arr_88 [i_11] [i_16] [i_20] [9U])) ? (((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)8375)))) : ((-(((/* implicit */int) arr_60 [i_16]))))));
                    arr_97 [i_16] [(_Bool)0] [i_20] [i_20] [i_20] [(_Bool)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_63 [i_25 - 1] [(unsigned short)2] [i_25 + 1] [6U]))));
                }
                for (unsigned short i_26 = 2; i_26 < 8; i_26 += 1) 
                {
                    var_39 = ((/* implicit */unsigned int) ((unsigned short) arr_49 [i_26 + 2] [i_26 - 1]));
                    var_40 -= ((/* implicit */signed char) arr_79 [i_26 + 2] [i_26] [i_26 + 2] [i_26 - 1]);
                    arr_100 [i_16] = ((/* implicit */signed char) var_9);
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)38127)))))))));
                }
                var_42 -= ((/* implicit */_Bool) var_5);
                arr_101 [i_11] [i_16] [(unsigned short)2] [i_16] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (8053063680LL));
                arr_102 [i_11] [i_20] [i_20] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13066)) ? (var_5) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_3 [i_11] [i_16] [i_16]))));
                var_43 |= ((/* implicit */unsigned int) var_7);
            }
        }
        for (short i_27 = 0; i_27 < 10; i_27 += 1) 
        {
            arr_105 [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) ((_Bool) 2147483647)))));
            var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 91373633U))));
            /* LoopNest 2 */
            for (signed char i_28 = 0; i_28 < 10; i_28 += 3) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_110 [i_11] [i_27] [i_28] [i_11] [i_28] [i_28] = ((/* implicit */_Bool) var_10);
                        /* LoopSeq 4 */
                        for (signed char i_30 = 0; i_30 < 10; i_30 += 3) /* same iter space */
                        {
                            arr_115 [i_29] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4409210699820657973ULL)) ? (2243809594U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483648U))))))));
                            var_45 += ((/* implicit */signed char) arr_6 [2ULL] [(_Bool)0] [i_28]);
                        }
                        for (signed char i_31 = 0; i_31 < 10; i_31 += 3) /* same iter space */
                        {
                            arr_118 [i_11] [6ULL] [6ULL] [i_29] [i_31] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                            arr_119 [i_11] [i_27] [(_Bool)1] [i_29] [i_27] [i_27] [i_29] = ((/* implicit */long long int) (unsigned short)965);
                        }
                        for (signed char i_32 = 0; i_32 < 10; i_32 += 3) /* same iter space */
                        {
                            var_46 = ((/* implicit */unsigned int) var_12);
                            arr_122 [i_27] [i_11] [i_27] [i_28] [i_29] [i_32] = (!(((((/* implicit */_Bool) arr_0 [i_11] [i_11])) && (((/* implicit */_Bool) var_7)))));
                            arr_123 [i_27] = ((/* implicit */unsigned short) (!((_Bool)1)));
                            arr_124 [i_27] [i_27] [i_28] [(unsigned short)7] [i_32] = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) (short)15))), (arr_29 [i_11] [(signed char)4] [i_29])));
                        }
                        for (signed char i_33 = 0; i_33 < 10; i_33 += 3) /* same iter space */
                        {
                            var_47 += ((/* implicit */long long int) arr_37 [i_11] [i_11] [i_11] [(signed char)14]);
                            arr_127 [i_11] [i_11] [i_27] [i_29] [i_29] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_33] [i_27] [i_27] [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58631))))) : (((((/* implicit */_Bool) (signed char)-16)) ? (var_7) : (((/* implicit */int) arr_87 [i_29]))))))) : (((unsigned long long int) -7121015355017515082LL))));
                            arr_128 [i_27] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40061)) || (((/* implicit */_Bool) arr_10 [4] [4] [i_28] [4] [4])))));
                            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (signed char)-56))));
                        }
                        arr_129 [i_27] [i_11] [i_11] [1LL] [i_27] = ((/* implicit */long long int) 2383357099U);
                    }
                } 
            } 
        }
        for (int i_34 = 0; i_34 < 10; i_34 += 1) 
        {
            var_49 += ((/* implicit */int) (_Bool)0);
            arr_132 [i_34] [i_11] [i_11] = ((/* implicit */int) arr_87 [i_11]);
            arr_133 [i_11] [i_34] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14336)) * (((/* implicit */int) arr_54 [i_11] [i_11] [i_11] [i_34] [i_34]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_121 [1ULL] [(_Bool)1] [i_34]))) : ((~(8LL)))))) && (((/* implicit */_Bool) (unsigned short)59380)));
        }
    }
}
