/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88035
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
    var_14 += ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned short)40819)));
        var_15 |= ((arr_2 [i_0 + 1] [i_0 + 1]) && (((/* implicit */_Bool) arr_1 [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) arr_8 [i_0] [(unsigned char)4] [i_0] [i_0])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_10)))))));
                    var_16 = ((/* implicit */signed char) var_5);
                    arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_5 [i_0 + 2])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_16 [i_0 - 2] [i_1] [i_2] [(unsigned short)12] = ((/* implicit */unsigned char) var_5);
                        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55162))))) : (((/* implicit */int) var_0))));
                    }
                    var_18 |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_10 [i_0] [i_0])) == (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        arr_17 [i_0] [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 3]))));
    }
    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_22 [i_4] [i_5] [i_4] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)55162))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)20))))) ? (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)183)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_14 [i_4 - 3] [i_5] [i_4] [(_Bool)1])))))))));
            arr_23 [i_4 + 3] [i_4] [i_4 + 2] &= min(((_Bool)1), ((!(((((/* implicit */_Bool) (unsigned char)197)) || (((/* implicit */_Bool) var_1)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            arr_33 [i_4] [i_6] [i_6] [i_7] [i_6] [i_8 - 1] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_12))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4] [i_9] [i_7] [i_8 - 2])) ? (((/* implicit */int) arr_25 [i_4] [i_6])) : (((/* implicit */int) (_Bool)0)))))));
                            arr_34 [i_4] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned short) (unsigned short)10373));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    for (signed char i_11 = 1; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) -1451805919);
                            var_21 = ((14973098435565158980ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                var_22 += ((/* implicit */unsigned long long int) var_0);
                arr_42 [4ULL] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30811))) + (var_11))) : (var_7)));
                arr_43 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1034552355))));
                var_23 &= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_24 [i_4]))) % (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) ((signed char) (unsigned char)65));
                /* LoopSeq 4 */
                for (unsigned short i_14 = 4; i_14 < 10; i_14 += 4) 
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_35 [i_4] [i_6] [i_13] [i_14]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (var_4)));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 4; i_15 < 11; i_15 += 4) 
                    {
                        var_26 -= ((/* implicit */unsigned char) (_Bool)1);
                        arr_51 [i_4] [i_4] [i_4] [i_14] [i_13] [i_6] [i_14] |= 3364097282096165166ULL;
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1451805919)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_49 [i_15] [i_14] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (1034552354)))) : (arr_18 [i_15 - 4] [i_15 - 4]))))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (10364294848406576200ULL))))));
                        var_29 += ((/* implicit */signed char) var_13);
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
                {
                    arr_54 [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_45 [1] [i_13])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))));
                    arr_55 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_4] [i_4 - 1] [i_4 + 3])) ? (((/* implicit */int) (signed char)47)) : (1034552359)));
                }
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) /* same iter space */
                {
                    arr_59 [i_4] [i_4] [i_4] [i_17] = ((/* implicit */_Bool) (signed char)-48);
                    var_30 *= ((/* implicit */unsigned char) 8082449225302975416ULL);
                }
                for (unsigned char i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    var_31 = ((int) 8082449225302975415ULL);
                    arr_62 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_4 + 1] [i_13] [i_13]))));
                    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_4] [i_4 + 1] [i_4] [i_4 - 2]))));
                }
            }
            var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [7ULL])) : (((/* implicit */int) (signed char)-62))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */int) var_12);
            var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) - (max((((/* implicit */int) (unsigned char)93)), (1151828163)))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10364294848406576221ULL)) ? (arr_18 [i_4] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_52 [i_4] [i_4] [i_19] [i_19])) : (((/* implicit */int) arr_56 [i_4]))))) : ((((_Bool)1) ? (arr_35 [i_19] [i_19] [(signed char)10] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_4 + 2] [i_4 - 3] [i_4])))))))) ? (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_19] [i_19] [i_19] [i_4 + 1] [i_4]))))) : (((/* implicit */int) ((_Bool) var_5))))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) (signed char)-54)), ((unsigned char)221))))))))));
            arr_65 [(_Bool)1] [i_4] [i_4 + 3] = ((/* implicit */_Bool) max((((unsigned char) (_Bool)0)), (((/* implicit */unsigned char) ((_Bool) (signed char)7)))));
            var_37 = ((/* implicit */unsigned int) 1434761335);
        }
        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_21 = 1; i_21 < 9; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 4; i_22 < 12; i_22 += 2) 
                {
                    for (unsigned short i_23 = 4; i_23 < 9; i_23 += 4) 
                    {
                        {
                            arr_75 [i_4] [i_4] [(unsigned char)9] [i_4] = ((/* implicit */unsigned char) 1151828163);
                            arr_76 [i_4 + 2] [i_4 - 3] [i_21] [i_20] [i_23] [i_4 + 2] = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)154))));
                            var_38 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)103))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_24 = 1; i_24 < 12; i_24 += 2) 
                {
                    arr_79 [i_4] [i_20] [i_21] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_21 + 1] [i_21 + 2] [i_4 - 1])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) ((signed char) (signed char)-19)))));
                    arr_80 [i_4 - 3] [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0))));
                    var_39 = ((/* implicit */unsigned short) (_Bool)1);
                }
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) var_3))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)103))));
                /* LoopSeq 1 */
                for (unsigned short i_26 = 0; i_26 < 13; i_26 += 4) 
                {
                    arr_86 [i_4] = ((/* implicit */_Bool) max(((unsigned char)64), (((/* implicit */unsigned char) (signed char)-1))));
                    var_42 = ((/* implicit */unsigned short) ((_Bool) arr_40 [i_4] [i_4] [i_4]));
                    var_43 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_28 [(_Bool)1] [i_20])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_12))))));
                    var_44 = ((/* implicit */_Bool) var_10);
                }
                var_45 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6028296863393745531ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)256))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (1630272551U)))) ? (3378927108U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))))));
                var_46 -= ((/* implicit */_Bool) arr_1 [i_4]);
                arr_87 [0] [i_20] [i_25] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) (signed char)1))) && (((/* implicit */_Bool) (signed char)14)))) ? (((/* implicit */int) ((((var_9) || (arr_2 [i_20] [i_25]))) || (((/* implicit */_Bool) -245209883))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (916040187U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_25] [i_20])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned short)29112))))) : (((int) arr_84 [i_4] [9U] [i_4] [(unsigned char)3]))))));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                arr_90 [i_20] [i_20] [i_27] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) 1996249467)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (_Bool)1))))));
                var_47 = (!(((/* implicit */_Bool) arr_61 [i_4] [i_4])));
                /* LoopSeq 2 */
                for (unsigned short i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (_Bool)1)), (var_2))))) != (((/* implicit */int) var_2))));
                    var_49 = ((/* implicit */unsigned short) ((((unsigned int) var_10)) + (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_85 [i_4] [i_4] [i_4 - 2] [(unsigned short)0] [i_27] [i_27])) : (((/* implicit */int) var_9)))))));
                }
                for (unsigned char i_29 = 1; i_29 < 12; i_29 += 4) 
                {
                    var_50 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)9804)) : (((/* implicit */int) (unsigned short)29112)))) * (((((/* implicit */int) arr_27 [i_27] [i_27])) * (((/* implicit */int) arr_20 [i_20] [i_27] [(unsigned char)8])))))));
                    arr_96 [i_20] |= ((/* implicit */signed char) arr_24 [4U]);
                    arr_97 [i_4] [i_20] [i_20] [i_27] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5780)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)180))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (min(((((_Bool)0) ? (((/* implicit */int) arr_24 [i_27])) : (((/* implicit */int) (unsigned short)24981)))), (((/* implicit */int) var_5))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_30 = 1; i_30 < 10; i_30 += 2) 
                {
                    for (unsigned char i_31 = 0; i_31 < 13; i_31 += 4) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((unsigned char) (unsigned char)24))), (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned short)30603)) : (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) var_12))));
                            var_52 -= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_4)))) : (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) arr_45 [(unsigned char)0] [i_30])) : (((/* implicit */int) var_3)))))));
                            var_53 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_41 [(_Bool)1] [i_20] [(_Bool)1])) : (((/* implicit */int) arr_66 [i_30]))))) ? (arr_57 [i_4] [i_30 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (var_8)));
                        }
                    } 
                } 
            }
            var_54 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_72 [i_4 + 1] [i_4 - 2])) : (((/* implicit */int) (unsigned short)22421))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_4 + 1])) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (signed char)111)) * (((/* implicit */int) var_10))))));
            /* LoopSeq 1 */
            for (unsigned int i_32 = 0; i_32 < 13; i_32 += 2) 
            {
                var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) arr_21 [i_32])))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned short)11794))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (unsigned char)104)))))))))));
                arr_106 [i_4] [(signed char)12] [i_32] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((arr_49 [i_4 + 2] [i_4 + 2] [i_32] [i_32]), (((/* implicit */unsigned long long int) var_0))))))) || (((/* implicit */_Bool) arr_7 [i_4] [i_20]))));
            }
        }
        /* LoopNest 2 */
        for (int i_33 = 0; i_33 < 13; i_33 += 2) 
        {
            for (unsigned short i_34 = 1; i_34 < 12; i_34 += 2) 
            {
                {
                    arr_112 [(_Bool)1] [i_34] [i_33] [i_34] = ((/* implicit */_Bool) var_6);
                    var_56 += ((var_1) > (((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (unsigned char)152)))));
                }
            } 
        } 
    }
    var_57 = max((var_6), ((unsigned char)127));
    var_58 = ((/* implicit */_Bool) (unsigned char)155);
    /* LoopSeq 2 */
    for (unsigned short i_35 = 1; i_35 < 14; i_35 += 2) /* same iter space */
    {
        var_59 *= ((/* implicit */unsigned int) (signed char)-2);
        var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned long long int) 3620483219U))))) ? (((((_Bool) (unsigned short)30117)) ? (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (signed char)-68)) : (var_1))) : (((((/* implicit */int) arr_113 [i_35] [i_35])) >> (((((/* implicit */int) arr_113 [i_35] [(unsigned short)1])) - (43141))))))) : (((/* implicit */int) ((signed char) (unsigned char)3)))));
    }
    /* vectorizable */
    for (unsigned short i_36 = 1; i_36 < 14; i_36 += 2) /* same iter space */
    {
        var_61 &= ((/* implicit */unsigned char) var_7);
        var_62 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) (unsigned short)35418)) ? (2796465986500909302ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30117)))))));
    }
}
