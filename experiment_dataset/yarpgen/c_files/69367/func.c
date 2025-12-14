/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69367
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (445834520286535235ULL))));
        var_15 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)23353)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54854))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)54854), ((unsigned short)36012))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 3575986143U))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (unsigned short)10671)) ? (((/* implicit */unsigned int) var_4)) : (max((1507751147U), (((/* implicit */unsigned int) (short)-24281))))))));
                    arr_11 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_7))))), ((((~(arr_2 [(unsigned char)0]))) >> (((((/* implicit */int) arr_6 [i_0])) - (144)))))));
                    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1336579667)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) | (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_10)) - (30)))))))) * ((+((~(2739632965U)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) ((max((3575986148U), (((/* implicit */unsigned int) (unsigned char)251)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)12))))))))))))));
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) ((unsigned char) var_6)))), (max((((/* implicit */unsigned int) ((var_12) <= (var_12)))), (((unsigned int) 718981166U))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_18 = ((/* implicit */short) ((unsigned short) var_0));
            var_19 = ((/* implicit */unsigned short) ((_Bool) -5700575123048460762LL));
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_20 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (+(var_13)))) ? ((+(var_0))) : (max((var_0), (3245773133U))))));
            arr_22 [i_3] [i_5] = ((/* implicit */short) ((((unsigned int) (unsigned short)3)) & (min((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) <= (var_4)))), (min((((/* implicit */unsigned int) (short)-1)), (var_13)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_27 [i_3] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (((_Bool)1) ? (arr_25 [i_3] [14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))))))) <= (((/* implicit */int) var_3))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(1555334334U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3]))) / (var_1)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)0)))))))));
                var_22 = ((/* implicit */short) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            }
            for (int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                arr_31 [i_3] [i_6] [i_8] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10703))))) && (arr_30 [i_3] [i_8] [i_8] [i_8]))))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            arr_37 [i_6] [i_6] [(_Bool)1] [i_10] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_3)))))) : (max((arr_26 [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_1)))))) & (((/* implicit */long long int) ((/* implicit */int) ((3575986146U) > (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))))));
                            var_23 &= ((/* implicit */unsigned int) var_9);
                            arr_38 [i_3] [i_6] [i_8] [2LL] [i_10] [(short)14] = (+(var_1));
                            var_24 = ((/* implicit */unsigned long long int) min(((~((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 2147483647)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (var_7))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_11 = 1; i_11 < 19; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            arr_46 [i_3] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */int) ((((arr_28 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (1789772646636387626ULL))))));
                            arr_47 [i_11] [i_13] = ((/* implicit */short) arr_29 [i_3] [i_6] [i_11 - 1]);
                            arr_48 [7ULL] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) + (var_1)));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % ((-(var_0)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3575986146U)) ? (var_12) : (var_13)));
            }
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) min((((/* implicit */unsigned int) ((2147483642) >> (((((/* implicit */int) var_8)) - (59463)))))), (min((arr_29 [i_15] [i_14] [i_6]), (arr_29 [i_3] [i_6] [i_14])))));
                        var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_0)))))), (((((/* implicit */_Bool) var_11)) ? (479598211684598068LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)116), (((/* implicit */signed char) arr_30 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) max((109832513), (((/* implicit */int) arr_45 [(signed char)18] [i_6] [i_6] [i_6] [i_6] [6LL] [(unsigned short)7]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [i_16] [i_14] [i_15]))) + (var_6)))));
                            var_30 = ((/* implicit */unsigned short) var_13);
                        }
                    }
                } 
            } 
            arr_56 [i_3] [i_6] = ((/* implicit */_Bool) var_13);
        }
        arr_57 [i_3] [9] = ((/* implicit */signed char) (+(((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 1; i_20 < 10; i_20 += 3) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(718981167U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_30 [i_17] [i_17] [i_17] [i_17])))) : ((~(((/* implicit */int) (signed char)20)))))));
                                var_32 *= ((/* implicit */short) arr_26 [i_18] [8LL] [i_20]);
                                arr_74 [(unsigned char)2] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_59 [(unsigned char)8]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (_Bool)1))))) : (var_13))) | (((/* implicit */unsigned int) ((arr_58 [i_20 - 1]) & (arr_58 [i_21]))))));
                                arr_75 [4LL] [(unsigned char)6] = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    arr_76 [i_19] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_66 [i_17])))));
                    var_33 += ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)41839)))) | (((/* implicit */int) ((unsigned short) (short)-7)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (~((+(max((var_1), (((/* implicit */unsigned int) (unsigned short)29057)))))))))));
            arr_79 [i_17] = ((/* implicit */unsigned char) var_11);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_23 = 2; i_23 < 10; i_23 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65523))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (_Bool)0)))))) : ((~(2212527806697055828ULL)))));
            /* LoopNest 3 */
            for (unsigned short i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (signed char i_26 = 1; i_26 < 10; i_26 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) (~(4294967295U)));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) ^ (((arr_69 [i_26] [i_23 - 1] [i_24]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58140)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)4867))))) : (((((/* implicit */long long int) 3575986155U)) - (2553608399862657569LL)))));
                            arr_91 [10ULL] [i_23 - 1] [i_24] [i_25] [i_26 + 1] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_17] [i_23 - 1] [i_23] [i_17]))));
        }
        for (unsigned char i_27 = 2; i_27 < 10; i_27 += 2) /* same iter space */
        {
            var_40 &= ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) 1555334350U))), (((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_14))))) >> (((max((2212527806697055828ULL), (4ULL))) - (2212527806697055803ULL)))))));
            arr_95 [i_17] [(signed char)9] = ((/* implicit */unsigned short) var_14);
            var_41 = ((/* implicit */long long int) ((unsigned char) min((((unsigned short) (unsigned short)41850)), ((unsigned short)65535))));
            var_42 = ((/* implicit */unsigned long long int) arr_81 [i_17] [i_27]);
            arr_96 [i_17] = ((((((/* implicit */unsigned long long int) var_13)) - (max((((/* implicit */unsigned long long int) 1555334330U)), (18446744073709551598ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_81 [i_17] [i_27])))));
        }
        for (unsigned char i_28 = 2; i_28 < 10; i_28 += 2) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_28 + 1] [i_28 + 1])) * (((/* implicit */int) arr_18 [i_17] [i_28]))))) * (((((unsigned long long int) var_6)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (2382036923U) : (((/* implicit */unsigned int) arr_86 [i_17] [i_17] [i_17] [(_Bool)1])))))))));
            /* LoopSeq 2 */
            for (signed char i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                arr_102 [i_17] = ((/* implicit */long long int) max((((/* implicit */int) (short)(-32767 - 1))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)58124))))))));
                arr_103 [i_17] [i_28] [i_29] = (~((~(arr_90 [8] [7ULL] [1] [i_28 + 1] [i_17]))));
            }
            /* vectorizable */
            for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_31 = 2; i_31 < 8; i_31 += 3) 
                {
                    for (unsigned short i_32 = 0; i_32 < 11; i_32 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (1555334330U) : (((/* implicit */unsigned int) arr_108 [i_28 - 2] [i_31 - 2] [i_31 + 1] [i_31] [i_31 + 3]))));
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_66 [i_31 + 2]) : (((/* implicit */int) (unsigned char)163)))))));
                            arr_114 [i_17] [i_28 - 1] [i_30] [i_31 - 1] [9] [i_17] = ((/* implicit */long long int) (unsigned char)93);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 2; i_33 < 8; i_33 += 2) 
                {
                    for (short i_34 = 0; i_34 < 11; i_34 += 2) 
                    {
                        {
                            var_46 -= ((/* implicit */unsigned long long int) ((unsigned short) (short)-1));
                            var_47 = ((/* implicit */long long int) ((unsigned long long int) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))));
                            arr_122 [i_17] = ((/* implicit */int) ((unsigned short) arr_113 [i_17] [i_28 + 1] [i_33 - 1] [i_33 + 2]));
                        }
                    } 
                } 
            }
        }
        for (signed char i_35 = 0; i_35 < 11; i_35 += 3) 
        {
            arr_126 [i_17] = ((/* implicit */short) var_12);
            var_48 = ((/* implicit */int) max((var_48), (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)22507)))))))));
            arr_127 [(_Bool)1] [i_35] [(_Bool)1] = ((((/* implicit */_Bool) (~(arr_106 [i_17] [i_35] [i_35] [i_17])))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_55 [(short)13] [(unsigned short)5] [i_17] [i_35] [i_35] [i_35]))))) % (min((var_1), (((/* implicit */unsigned int) (signed char)92)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_3)))))));
        }
    }
    for (signed char i_36 = 0; i_36 < 11; i_36 += 2) /* same iter space */
    {
        arr_132 [i_36] = ((/* implicit */long long int) max((((((arr_110 [i_36] [i_36]) ? (2739632943U) : (arr_29 [i_36] [i_36] [i_36]))) - (((/* implicit */unsigned int) ((arr_108 [i_36] [i_36] [i_36] [i_36] [10U]) & (((/* implicit */int) (signed char)124))))))), (min((var_0), (((/* implicit */unsigned int) arr_101 [i_36]))))));
        arr_133 [i_36] [i_36] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) var_0)) + (17882043264048782040ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_37 = 0; i_37 < 11; i_37 += 3) 
        {
            arr_137 [i_36] [i_37] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_116 [i_36] [i_37] [i_37] [(unsigned short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (var_12)));
            arr_138 [i_36] [3ULL] [i_37] = ((/* implicit */unsigned long long int) (short)0);
        }
    }
}
