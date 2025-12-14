/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55411
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [7ULL] [i_0] = ((/* implicit */int) ((signed char) ((int) ((signed char) arr_6 [i_0] [i_1] [i_2]))));
                    var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (10545997365163334144ULL)))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_0] [1] [i_0] [i_0]))))));
                                var_20 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_10 [i_4 - 1])), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_6 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) var_16))));
                                var_21 -= ((/* implicit */int) (signed char)-36);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)-7)) % (((/* implicit */int) (signed char)6))))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                {
                    var_22 += ((/* implicit */_Bool) (((!(((_Bool) (signed char)4)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (arr_10 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_26 [(signed char)6] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                                var_23 = ((/* implicit */long long int) min((((/* implicit */int) var_6)), (((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [1] [i_8 - 2] [i_6])) >> (((arr_21 [i_0] [i_0 - 1] [i_6] [i_7] [i_8 + 1]) + (1619216229)))))));
                                var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_8 - 3] [3LL] [i_6 + 3]), (arr_22 [i_0] [i_0] [i_6 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_8] [i_6 + 1])))))) : (max((arr_22 [i_7] [(signed char)4] [i_6 + 2]), (arr_22 [i_0] [i_5] [i_6 + 3])))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)1920)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (signed char)-7))))) ? (((((/* implicit */_Bool) 1903718888)) ? (arr_6 [i_8 - 1] [i_8 - 1] [i_6 + 1]) : (arr_6 [i_8 - 1] [i_5] [i_6 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 + 2] [i_6 + 1]))))))));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned char) (signed char)-9);
                    var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_6 - 1] [i_0]), (((/* implicit */long long int) arr_10 [i_0]))))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_4)))));
        /* LoopNest 2 */
        for (short i_9 = 3; i_9 < 9; i_9 += 2) 
        {
            for (unsigned char i_10 = 4; i_10 < 10; i_10 += 3) 
            {
                {
                    var_28 ^= ((/* implicit */short) max(((signed char)6), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_10])))))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10652754969835360193ULL)) ? (((((/* implicit */_Bool) ((signed char) (signed char)-96))) ? (((/* implicit */int) ((_Bool) arr_12 [(short)4] [i_9] [i_10] [i_9] [i_9] [i_9] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_0] [i_9])) == (((/* implicit */int) var_3))))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-86))))));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        arr_38 [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_28 [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_11] [2U] [i_11] [(unsigned char)3]) || (((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11] [i_11])))))) : (arr_3 [i_11] [i_11]))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_11] [i_11] [i_11]))) ? (((unsigned long long int) arr_31 [i_11] [i_11] [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_11] [i_11] [i_11]))))));
        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-86))));
        var_32 = ((/* implicit */_Bool) arr_0 [i_11]);
        arr_39 [i_11] [i_11] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((signed char) arr_17 [i_11] [i_11] [(unsigned short)6] [7U])))))));
    }
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_44 [i_12] [i_12] [i_13] = ((/* implicit */signed char) (unsigned short)65526);
            var_33 = ((/* implicit */unsigned long long int) arr_42 [i_12]);
            var_34 = ((/* implicit */_Bool) arr_43 [i_12] [i_13]);
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    {
                        arr_49 [14U] [i_13] [i_14] [i_12] [i_15] [i_14] = ((/* implicit */short) ((unsigned short) min((arr_47 [i_14] [6U] [i_14] [i_14 - 3]), (arr_47 [i_13] [i_13] [i_13] [i_14 - 3]))));
                        var_35 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) arr_45 [i_12])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147221504)) == (0ULL)))) : (((/* implicit */int) arr_48 [i_14] [i_14] [i_14 - 3] [i_14] [i_14 - 2])))), (((/* implicit */int) ((signed char) arr_48 [i_12] [i_13] [i_14 - 2] [i_15] [i_15])))));
                        var_36 = ((/* implicit */_Bool) var_9);
                        var_37 -= ((/* implicit */_Bool) ((unsigned char) arr_47 [i_14] [i_14 - 3] [i_14 + 1] [i_13]));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_42 [i_12]))));
        }
        arr_50 [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_45 [i_12])) ? (((/* implicit */int) arr_40 [i_12] [i_12])) : (((/* implicit */int) (signed char)-6)))) <= (((/* implicit */int) arr_40 [i_12] [i_12]))))) << (((int) (!(((/* implicit */_Bool) var_3)))))));
        var_39 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned char) arr_47 [i_12] [i_12] [i_12] [i_12]))) ? (((var_12) ? (((/* implicit */int) arr_41 [i_12] [i_12])) : (((/* implicit */int) arr_45 [i_12])))) : (((((/* implicit */_Bool) arr_45 [i_12])) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_42 [i_12])))))) ^ (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)25)))))))));
    }
    for (int i_16 = 1; i_16 < 23; i_16 += 4) 
    {
        var_40 *= ((/* implicit */int) ((_Bool) min((arr_53 [i_16 - 1]), (arr_53 [i_16 - 1]))));
        /* LoopSeq 1 */
        for (signed char i_17 = 3; i_17 < 21; i_17 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 2) 
            {
                arr_58 [i_16] [i_17] [i_18] |= ((/* implicit */int) -6456368848004069830LL);
                var_41 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_52 [i_17 + 2])) ? (((/* implicit */int) arr_52 [i_17 - 2])) : (((/* implicit */int) arr_52 [i_17 + 3])))));
                var_42 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-15797)) % (2147483647)))) ? (((((/* implicit */int) var_16)) + (((/* implicit */int) arr_54 [(_Bool)1])))) : (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)18)))))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8))))) >> (((((/* implicit */int) min((arr_55 [i_16] [i_17]), (((/* implicit */short) arr_53 [i_16]))))) - (183)))))));
            }
            for (unsigned short i_19 = 1; i_19 < 21; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 2; i_20 < 23; i_20 += 1) 
                {
                    var_43 = ((/* implicit */long long int) 1294313778U);
                    arr_63 [i_16] [i_19] [i_16] [i_20 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_59 [i_17 - 1] [i_19 + 2] [i_20])) ? (((/* implicit */int) arr_59 [i_17 - 3] [19ULL] [i_19])) : (((/* implicit */int) arr_59 [i_17 - 2] [i_17 - 2] [i_17 - 2])))) != (((((/* implicit */_Bool) arr_59 [i_17 + 2] [i_20] [i_20])) ? (((/* implicit */int) arr_59 [i_17 + 1] [i_17] [i_17])) : (((/* implicit */int) arr_59 [i_17 - 3] [i_17 + 4] [i_19]))))));
                }
                var_44 = ((unsigned int) ((((/* implicit */int) arr_55 [i_16 + 2] [i_17 + 2])) < (((/* implicit */int) arr_55 [i_16 + 2] [i_19 + 2]))));
                var_45 = ((unsigned int) ((((((/* implicit */_Bool) arr_51 [i_16] [i_16])) ? (((/* implicit */int) arr_55 [i_17] [(signed char)21])) : (((/* implicit */int) (unsigned short)10)))) << (((((((((/* implicit */_Bool) arr_51 [i_16 - 1] [i_17 + 2])) ? (arr_60 [i_16] [i_17]) : (((/* implicit */int) arr_53 [(_Bool)1])))) + (1845883889))) - (18)))));
                arr_64 [i_19] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) arr_53 [i_19])));
                var_46 += ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_59 [i_19 + 4] [i_17 + 4] [i_16 - 1])) != (((/* implicit */int) arr_59 [i_19 + 4] [i_19] [i_16 - 1])))));
            }
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_23 = 2; i_23 < 24; i_23 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_17])))))) < (arr_61 [i_16] [i_22] [i_16] [i_17] [i_16])))), (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (min((arr_56 [i_21] [i_16]), (((/* implicit */unsigned long long int) 4294967287U))))))));
                            arr_73 [i_21] [i_22] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_65 [i_16 + 2] [i_17 + 2] [i_17 - 3] [i_23 - 1]))) ^ (min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) 7878601063771048828ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)9))))))));
                            arr_74 [i_21] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_57 [i_16] [i_17 - 2] [i_23 + 1] [23])), (((unsigned long long int) (!(((/* implicit */_Bool) arr_71 [i_16] [i_17] [i_17] [i_21] [i_22] [i_16])))))));
                            var_48 = ((/* implicit */unsigned short) arr_72 [i_22] [18ULL]);
                            var_49 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -624305598829320284LL))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_76 [i_16] [i_24] [i_21] [i_22])))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_15)) : (arr_71 [i_24] [i_16] [i_22] [i_21] [i_17] [i_16]))) : (((/* implicit */int) ((unsigned char) arr_77 [(unsigned short)0] [i_17] [i_21])))))))))));
                            arr_78 [i_24] [i_24] [i_21] [i_24] [i_24] |= ((/* implicit */short) (!(arr_75 [i_16])));
                            var_51 |= ((/* implicit */_Bool) ((unsigned int) arr_62 [i_17 - 3] [i_16 + 1] [i_21] [i_22]));
                            arr_79 [i_21] = ((/* implicit */long long int) (!(((var_12) && ((!(((/* implicit */_Bool) arr_68 [i_21] [i_17] [i_21] [i_22] [i_21]))))))));
                        }
                        var_52 = (!((!(((/* implicit */_Bool) ((arr_56 [i_17 - 3] [i_22]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))))))));
                        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_16 - 1] [i_17] [i_16 + 2] [i_22])) ? (((/* implicit */int) arr_67 [i_16] [i_17] [i_21] [i_22])) : (((/* implicit */int) arr_67 [i_22] [i_17] [i_21] [i_16]))))))))));
                    }
                } 
            } 
            var_54 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((13444245023841769771ULL) << (((-1333930261) + (1333930314)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_55 [i_16] [i_17 - 3])))))));
        }
    }
    var_55 = ((/* implicit */unsigned int) (unsigned char)65);
}
