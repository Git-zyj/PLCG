/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7805
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
    var_17 = ((/* implicit */signed char) var_1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = (-((-(0U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_2))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_20 = ((/* implicit */int) 0U);
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) (short)60)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 4294967295U))));
            var_23 = ((/* implicit */unsigned long long int) var_4);
            arr_9 [i_0] = ((/* implicit */short) ((var_5) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) & (4294967283U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */int) (signed char)-112);
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (short)-1))));
        }
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                {
                    var_26 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (short)32754)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) : (var_0))) : (((/* implicit */long long int) min((4294967282U), ((~(22U))))))));
                    var_27 = ((/* implicit */int) 536870896U);
                    var_28 = ((/* implicit */_Bool) min(((~(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_12))))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483643)) ^ (0U)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 16; i_8 += 2) 
            {
                {
                    var_29 = min((arr_20 [i_4] [i_4]), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) 12U))) > (((/* implicit */int) arr_8 [i_4]))))));
                    arr_23 [i_4] [i_4] [i_4] [i_8] = ((/* implicit */short) var_2);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_9 = 2; i_9 < 17; i_9 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        var_30 = ((((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (-1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_4]));
                        var_31 = (i_4 % 2 == zero) ? (min((((/* implicit */unsigned long long int) (short)-1)), (((((var_3) << (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_30 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_4])) + (20110))))))) : (min((((/* implicit */unsigned long long int) (short)-1)), (((((var_3) << (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */int) arr_30 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_4])) + (20110))) - (19986)))))));
                        var_32 += ((/* implicit */_Bool) (signed char)32);
                        var_33 = min((((/* implicit */int) var_15)), (max((arr_27 [i_4] [i_4] [i_4] [i_9 - 2]), (((/* implicit */int) min(((signed char)(-127 - 1)), (var_6)))))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (unsigned short)65535))));
                    }
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                    {
                        var_35 &= ((/* implicit */signed char) var_13);
                        var_36 = ((/* implicit */_Bool) arr_10 [i_10] [i_10]);
                    }
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) min((((/* implicit */signed char) var_2)), ((signed char)-120)));
                        var_38 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(var_4)))), (min((arr_24 [i_9]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)110)) * (((/* implicit */int) (unsigned short)65535)))))))));
                        var_39 = ((/* implicit */long long int) var_13);
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((signed char) (short)-12))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((536870904U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */unsigned int) ((2097151) + (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_38 [i_4])))))))));
                    }
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 4) /* same iter space */
                    {
                        var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483641)) ? (((/* implicit */int) (short)0)) : (2097167)));
                        var_42 += ((/* implicit */short) arr_0 [i_15]);
                    }
                    var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) 2097167)), (arr_28 [i_4] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (4294967275U)))))) >> (((/* implicit */int) arr_32 [i_4] [i_4] [i_10] [(_Bool)1] [i_4]))));
                    arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (signed char)10;
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    arr_46 [i_9 - 1] [i_4] [i_16] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)3968)) >> (((((/* implicit */int) (unsigned short)61567)) - (61561)))));
                    arr_47 [i_4] [i_9 - 1] [i_4] [i_16] = ((/* implicit */signed char) (short)-32759);
                    var_44 = ((/* implicit */long long int) arr_45 [i_4] [i_9]);
                }
                for (unsigned short i_17 = 3; i_17 < 15; i_17 += 1) 
                {
                    var_45 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_17 - 2] [i_9 + 1])))), (min((-2097189), (((/* implicit */int) arr_10 [i_17 + 4] [i_9 - 2]))))));
                    var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) var_6))));
                    var_47 &= ((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_5))))));
                }
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) min(((unsigned short)3938), (((/* implicit */unsigned short) max((var_10), ((signed char)-1))))));
                            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (-(((var_4) - (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_20 = 3; i_20 < 18; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        {
                            arr_61 [i_4] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)32744)) ? (0LL) : (((/* implicit */long long int) 536868864U)))) % (((/* implicit */long long int) ((/* implicit */int) var_9)))))) > (((var_2) ? (min((((/* implicit */unsigned long long int) -2097167)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61573))))))))));
                            var_50 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) || (((/* implicit */_Bool) var_16)));
                        }
                    } 
                } 
                var_51 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65531)) & (var_1))))));
            }
            /* vectorizable */
            for (signed char i_22 = 0; i_22 < 19; i_22 += 1) /* same iter space */
            {
                var_52 |= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-117)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 4) 
                {
                    var_53 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_9 - 2]) : (arr_7 [i_9 - 2])));
                    var_54 += ((/* implicit */_Bool) ((var_1) | (((/* implicit */int) (unsigned short)61564))));
                }
                for (signed char i_24 = 1; i_24 < 17; i_24 += 3) 
                {
                    arr_68 [i_4] [i_4] [i_9 + 1] [i_4] [i_4] = ((/* implicit */int) ((signed char) -64));
                    var_55 = ((/* implicit */_Bool) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) arr_1 [i_9 - 2]))));
                    var_56 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)61598))));
                    var_57 = ((/* implicit */int) var_5);
                }
            }
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                var_58 += (~(((/* implicit */int) var_11)));
                var_59 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_58 [i_9 - 2] [i_9 + 2] [7] [i_9 + 2] [i_9]))));
            }
            var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_60 [4] [i_9] [i_9] [i_9] [i_9 + 1] [8] [i_4])))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)48), ((signed char)-117))))))))));
        }
        var_61 = ((/* implicit */signed char) ((arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) < (max((arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
        var_62 |= ((18014398509481983ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)56)))) + (((/* implicit */int) ((signed char) var_14)))))));
    }
    for (unsigned long long int i_26 = 1; i_26 < 7; i_26 += 1) 
    {
        var_63 = ((/* implicit */unsigned int) 0ULL);
        /* LoopNest 3 */
        for (signed char i_27 = 0; i_27 < 10; i_27 += 1) 
        {
            for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_81 [i_26] [i_27] [i_26] [0LL] [0LL] [i_26] = ((/* implicit */int) (signed char)0);
                        /* LoopSeq 3 */
                        for (short i_30 = 3; i_30 < 9; i_30 += 3) 
                        {
                            var_64 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_4 [i_26 + 3])), (((((((/* implicit */_Bool) -2147483639)) || (((/* implicit */_Bool) 8388607ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_53 [i_26 + 1] [i_30 + 1] [i_28 + 1] [i_29] [i_30 + 1])))))) : (((arr_55 [i_26 + 3] [i_26] [i_29] [i_26] [i_28] [i_27]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                            var_65 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (max((((/* implicit */unsigned int) var_7)), (arr_56 [i_26 + 1] [i_26] [(unsigned short)2] [i_26 - 1])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                        {
                            arr_88 [i_27] [i_26] [i_27] [i_29] [1] [i_27] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)0)) : (65535))))));
                            var_66 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (65011712) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-9223372036854775807LL - 1LL))));
                            var_67 += (unsigned short)57344;
                            var_68 = ((/* implicit */_Bool) (signed char)-111);
                        }
                        /* vectorizable */
                        for (unsigned short i_32 = 0; i_32 < 10; i_32 += 3) 
                        {
                            var_69 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_70 |= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-114)) + (2147483647))) >> (((((/* implicit */int) (signed char)-63)) + (63)))));
                        }
                        var_71 -= ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_28 + 1]))) == (18446744073709551615ULL))))));
                    }
                } 
            } 
        } 
        var_72 ^= ((/* implicit */_Bool) (unsigned short)3972);
    }
    for (unsigned short i_33 = 0; i_33 < 20; i_33 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_34 = 0; i_34 < 20; i_34 += 3) 
        {
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                {
                    var_73 = ((/* implicit */unsigned long long int) max((var_73), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_99 [i_34] [i_34] = ((/* implicit */long long int) (signed char)-101);
                    /* LoopNest 2 */
                    for (signed char i_36 = 0; i_36 < 20; i_36 += 2) 
                    {
                        for (short i_37 = 4; i_37 < 18; i_37 += 1) 
                        {
                            {
                                var_74 = ((/* implicit */unsigned short) (!((_Bool)1)));
                                var_75 ^= ((/* implicit */unsigned short) var_10);
                                var_76 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            for (signed char i_39 = 0; i_39 < 20; i_39 += 4) 
            {
                {
                    arr_111 [i_33] [i_33] [i_38] = ((/* implicit */_Bool) (unsigned short)3938);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_40 = 0; i_40 < 20; i_40 += 1) 
                    {
                        arr_115 [i_33] [i_38] [i_38] [i_33] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-114)) + (2147483647))) << (((((/* implicit */int) (unsigned short)57)) - (57)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) max((var_12), (var_5)))))))));
                        var_77 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((21ULL), (((/* implicit */unsigned long long int) (unsigned short)61610)))), (((/* implicit */unsigned long long int) var_12)))))));
                    }
                    var_78 = ((/* implicit */unsigned long long int) arr_95 [i_33] [i_38]);
                    var_79 = ((/* implicit */int) max((var_79), (((/* implicit */int) ((min((var_4), (((/* implicit */long long int) arr_1 [17])))) >= (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))));
                }
            } 
        } 
        var_80 = ((/* implicit */_Bool) max((var_80), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1073741823))))) : (((/* implicit */int) max(((signed char)104), ((signed char)(-127 - 1))))))))));
    }
    var_81 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_13))))) >= (((/* implicit */int) (signed char)105))))) << (((/* implicit */int) (_Bool)1))));
}
