/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59333
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned char) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))))) ? (((14716666079145496574ULL) >> (((((/* implicit */int) (signed char)71)) - (65))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4195803288273897449ULL))))))))));
        var_20 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (((((-7037576068243793683LL) + (9223372036854775807LL))) >> (((arr_2 [i_0]) - (9303292247117518001ULL))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (signed char)85);
                    var_21 = ((/* implicit */unsigned char) ((int) ((short) arr_7 [i_2] [i_1] [i_0] [i_0])));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_1 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                }
            } 
        } 
        var_23 += ((/* implicit */short) ((signed char) (unsigned char)73));
        arr_10 [i_0] = ((((/* implicit */unsigned int) 1562463212)) | (((((/* implicit */_Bool) (unsigned char)128)) ? (490812369U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_11 [i_3]))))));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (short i_6 = 3; i_6 < 8; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) (unsigned short)61187);
                            arr_24 [i_3] [i_4] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_23 [i_3] [i_4] [i_4] [i_6] [i_4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_6] [3ULL] [8U] [8U])) ? (((/* implicit */int) (unsigned short)34262)) : (((/* implicit */int) (unsigned short)53548))))) ? (var_9) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7]))) : (-4953981283963841030LL))))) : (((/* implicit */long long int) (-(arr_22 [i_3] [i_4 + 2] [i_4 + 2]))))));
                            var_26 = ((/* implicit */int) min((var_26), ((+(((/* implicit */int) (signed char)85))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_27 |= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_16))));
                            arr_28 [i_8] [i_6 + 1] [i_5] [i_5] [9ULL] [i_3] = (((+(var_3))) >> (((((/* implicit */int) var_5)) - (44))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            arr_33 [i_9] [i_4] = ((/* implicit */signed char) 2062513146U);
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_16))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_8 [i_6 + 1] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26)))))) ? (max((arr_8 [i_6 + 2] [i_4 + 2]), (((/* implicit */unsigned long long int) var_14)))) : (((((/* implicit */_Bool) var_17)) ? (arr_8 [i_6 - 2] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        }
                        arr_34 [i_3] [i_3] [i_5] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4096396824582802198LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) < (var_0))))) : (((unsigned long long int) var_0))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) max((((/* implicit */long long int) arr_12 [i_3])), (7681399229251093197LL))))) ? (1023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_32 [i_3] [i_4 + 2] [i_6] [i_6] [(short)2])))))))));
                        arr_35 [i_3] [i_3] [i_4] [i_4 - 1] [i_5] [(unsigned char)9] = ((/* implicit */unsigned char) ((long long int) var_6));
                    }
                } 
            } 
        } 
        arr_36 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_20 [i_3] [i_3] [i_3] [i_3])))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3] [4ULL] [i_3] [i_3] [(_Bool)1] [(_Bool)1] [i_3])) ? (arr_1 [12U]) : (((/* implicit */long long int) ((unsigned int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)95)) || ((_Bool)0))) || ((_Bool)1))))) : (max((((((/* implicit */_Bool) 3718216687273468141LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-7681399229251093203LL))), (((/* implicit */long long int) arr_11 [i_3]))))));
    }
    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 1) 
    {
        arr_41 [i_10 + 1] |= ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_6 [i_10] [i_10] [i_10] [i_10 + 4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)24))))));
        arr_42 [i_10] = ((/* implicit */unsigned int) (short)16320);
    }
    for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (signed char i_15 = 1; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (~(((1073709056) | (((/* implicit */int) (unsigned short)57284)))))))));
                                arr_58 [i_11 - 2] [i_11 - 2] [8LL] [i_14 - 1] [i_15] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? ((+(max((54043195528445952LL), (((/* implicit */long long int) 33546240U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)12)) ? (185822494845125835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15 + 1] [i_12] [i_13] [i_12]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (signed char)4))))))))))));
                                var_34 = ((/* implicit */unsigned int) ((unsigned long long int) min((((unsigned int) var_1)), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-95))))))));
                                var_35 = ((/* implicit */unsigned short) ((1098686112U) << ((((-(4096396824582802198LL))) + (4096396824582802223LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            var_36 = ((/* implicit */int) arr_40 [i_11 + 1] [i_12]);
                            var_37 = ((arr_47 [i_11 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                        }
                        arr_66 [i_16] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)24))) && (((/* implicit */_Bool) max((arr_6 [i_11 + 1] [i_11 + 1] [i_13] [i_16]), (((/* implicit */unsigned short) var_11)))))));
                        var_38 = ((/* implicit */signed char) var_4);
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_14)), (arr_5 [i_16]))) - (((/* implicit */long long int) ((arr_55 [i_11] [i_12] [i_16] [i_12] [i_12] [i_12]) ? (((/* implicit */int) (signed char)-55)) : (var_8))))))) * ((-(arr_61 [i_11 + 1] [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11 - 2]))))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
                    {
                        arr_69 [i_11] [i_12] [i_11] [i_18] [(unsigned char)8] [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-32748)), (((unsigned int) (signed char)109))));
                        arr_70 [i_13] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)2600), (((/* implicit */unsigned short) (signed char)-111))))) ? (arr_2 [i_12]) : (arr_2 [i_12])));
                        arr_71 [i_13] [i_13] [i_13] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (min((7002511661514474501ULL), (((/* implicit */unsigned long long int) var_2))))));
                    }
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 3718216687273468139LL)) ? (3718216687273468147LL) : (((/* implicit */long long int) 33546240U)))), (((/* implicit */long long int) max((((/* implicit */int) arr_38 [i_11 - 1])), (((798795583) << (((/* implicit */int) (_Bool)0))))))))))));
                }
            } 
        } 
        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (-(max((max((var_8), (((/* implicit */int) var_15)))), (((((/* implicit */int) (signed char)-96)) + (((/* implicit */int) (unsigned short)32768)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_20 = 3; i_20 < 9; i_20 += 2) 
            {
                arr_80 [i_11 + 1] [i_19] [i_20 + 3] [8LL] &= ((/* implicit */short) 7731852235617840073ULL);
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        arr_87 [i_11] [i_19] [i_11] [i_21] [(unsigned char)10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) arr_48 [i_22] [i_21])) : (var_3)));
                        var_42 *= ((/* implicit */unsigned int) ((_Bool) 4096396824582802198LL));
                    }
                    for (unsigned long long int i_23 = 3; i_23 < 9; i_23 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((((/* implicit */_Bool) (unsigned short)8192)) || (((/* implicit */_Bool) (unsigned short)22))))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11] [i_11])) ? (17449427947332064057ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33546240U)) ? (3718216687273468154LL) : (arr_57 [(unsigned short)10] [i_11] [i_11] [i_11] [i_11]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_17)))))))));
                        var_46 = ((/* implicit */unsigned long long int) arr_5 [i_11 - 1]);
                        arr_94 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) 9205357638345293824ULL)))));
                    }
                    for (int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_47 ^= ((/* implicit */_Bool) ((unsigned int) arr_78 [i_20 + 3] [i_19] [i_11 + 1]));
                        arr_97 [i_11] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_61 [i_25] [i_20] [i_11 - 3] [i_11 - 3] [i_11 - 3]) : (arr_2 [i_11 - 3])));
                    }
                    var_48 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((long long int) arr_43 [(short)9] [i_19]))));
                }
            }
            for (unsigned long long int i_26 = 1; i_26 < 11; i_26 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    var_49 = ((/* implicit */unsigned long long int) ((arr_86 [i_11 - 1] [i_26 + 1] [i_11 - 3] [(unsigned char)3] [i_11 - 1] [i_11 - 1]) & (arr_37 [i_11 - 2])));
                    arr_102 [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) -1936974931));
                }
                var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)9769))))))));
            }
            for (unsigned long long int i_28 = 1; i_28 < 11; i_28 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_29 = 0; i_29 < 12; i_29 += 4) 
                {
                    var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)32)) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (unsigned short)4095))));
                    /* LoopSeq 2 */
                    for (short i_30 = 0; i_30 < 12; i_30 += 2) 
                    {
                        var_52 = ((/* implicit */signed char) 1184261461941914503LL);
                        arr_111 [i_29] [i_29] [i_29] [i_11] = ((/* implicit */unsigned char) (+(var_9)));
                    }
                    for (signed char i_31 = 1; i_31 < 9; i_31 += 2) 
                    {
                        arr_114 [i_11] [i_19] [i_28] [i_29] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)64518)) : (((/* implicit */int) (short)-16679))))) ? (((((/* implicit */_Bool) 10235504382423188555ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)27196)))) : (((/* implicit */int) var_4))));
                    }
                }
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 4) 
                {
                    var_54 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_82 [i_11] [i_19] [i_28] [i_11])))));
                    arr_117 [i_11] [i_11] [i_28 + 1] [i_32] [i_32] = ((/* implicit */unsigned int) (unsigned char)187);
                }
                for (unsigned short i_33 = 1; i_33 < 11; i_33 += 2) 
                {
                    arr_120 [i_11] [i_11] [i_11] [i_11] [i_19] [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_54 [i_28] [i_28] [i_11] [i_11])) : (((/* implicit */int) var_6))))));
                    var_55 ^= ((/* implicit */unsigned short) arr_72 [i_28 - 1] [i_11 - 3]);
                }
                arr_121 [i_11] [i_11] [i_11] = ((/* implicit */int) (signed char)-98);
            }
            var_56 = ((/* implicit */_Bool) arr_78 [i_11] [i_11] [i_11]);
        }
    }
    var_57 *= ((/* implicit */short) (-((-(((/* implicit */int) var_15))))));
    var_58 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
}
