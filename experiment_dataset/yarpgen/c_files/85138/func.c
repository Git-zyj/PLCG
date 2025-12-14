/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85138
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
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (8979510177594344401ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-2)))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_6))) % (arr_0 [i_0 - 1]))), (((/* implicit */long long int) var_11))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 |= ((/* implicit */unsigned char) ((((arr_4 [i_0 + 1] [i_2 + 1] [i_2 + 1]) - (((/* implicit */int) var_13)))) - (min((((/* implicit */int) (short)0)), (arr_4 [i_0 - 1] [i_2 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_4] [i_4] [i_3 + 1] [i_2 + 1] [i_1 - 2] [i_2] = min((var_5), (((/* implicit */unsigned int) var_13)));
                                var_17 = ((/* implicit */short) ((unsigned long long int) (unsigned short)29766));
                                arr_13 [i_4] [i_3 + 1] [i_2] [i_3 - 1] [i_2] [i_1 + 1] [i_0 + 1] = ((/* implicit */long long int) ((((unsigned int) arr_3 [i_1 - 2] [i_0 - 1])) ^ ((+(3992502474U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        var_18 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_5)))) || (((/* implicit */_Bool) ((arr_5 [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_1 - 1] [i_1])))))));
                        var_19 += ((/* implicit */unsigned char) ((((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))))) >> ((+(4U)))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_6] [i_2 + 1] [i_2 - 1] [i_1 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_2 + 1]))))) % (((arr_15 [i_0 - 1] [i_0 + 1] [i_1]) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1 + 1] [i_6])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_2 - 1] [i_6]))))))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2013265920)) ? (((/* implicit */int) (signed char)-127)) : (2013265897)))) && (((/* implicit */_Bool) (~(3992502474U)))))))));
                        arr_19 [i_0 + 1] [i_1 + 1] [i_2 + 1] [i_6] [i_0 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 864057765U)) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))))))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                {
                    var_22 *= ((/* implicit */short) arr_28 [i_9 + 1]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                arr_35 [i_9] [i_9] = ((/* implicit */long long int) (-(((((((/* implicit */int) arr_24 [i_11] [i_10])) + (2147483647))) >> ((((+(1925482079U))) - (1925482075U)))))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((max((arr_29 [0] [i_8 - 2] [i_8 - 3] [i_9 - 1] [i_9 + 1]), (arr_29 [(unsigned short)16] [i_8 - 3] [i_8 - 3] [i_9 - 1] [i_9 + 1]))), (((((/* implicit */_Bool) arr_29 [(_Bool)1] [i_8 - 3] [i_9 - 1] [i_9 + 1] [i_9 - 1])) ? (arr_29 [(unsigned char)6] [i_8 - 2] [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8 - 3] [i_8 - 2] [i_8 + 1]))))))))));
                                var_24 = ((/* implicit */short) (~((~(((/* implicit */int) arr_22 [i_9 - 1]))))));
                            }
                        } 
                    } 
                    arr_36 [(short)0] |= ((/* implicit */unsigned long long int) ((unsigned int) 4294967288U));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        var_25 &= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_8 - 2] [i_8 - 2] [i_9 - 1] [i_12] [i_7]))))), (max((arr_29 [(signed char)6] [i_8 - 1] [i_9 - 1] [i_7] [i_9 - 1]), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) var_12))));
                        arr_40 [i_9] = ((/* implicit */_Bool) arr_21 [i_7]);
                        arr_41 [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_7])) && (((/* implicit */_Bool) var_4))))), ((+(min((3992502474U), (((/* implicit */unsigned int) var_11))))))));
                        var_26 ^= ((/* implicit */int) (short)-32750);
                        arr_42 [i_7] [i_8 + 1] [i_9] [i_12] [i_9 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_8 - 3])) || (((/* implicit */_Bool) arr_33 [i_9 - 1] [i_8 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                    }
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_10)))))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_25 [i_7] [i_7] [i_7] [i_7])))))))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) 13048152703822437233ULL))));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                {
                    arr_48 [i_7] [i_13] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2369485216U)) ? (max(((-(5398591369887114368ULL))), (((/* implicit */unsigned long long int) var_11)))) : ((-(var_9)))));
                    var_30 = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) 5398591369887114383ULL)) || (((/* implicit */_Bool) 5965854154195728294ULL)))) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
                                var_32 &= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) -1474370193)), (var_9))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_21 = 0; i_21 < 16; i_21 += 2) 
                        {
                            arr_68 [i_15] [i_16] [i_17] [i_20] = ((/* implicit */unsigned short) var_6);
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (((!(((/* implicit */_Bool) ((long long int) var_11))))) ? (((int) (~(3599824356U)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15] [i_16] [i_21]))) / (var_4)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_50 [i_21] [i_16])), (var_8))))))))))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_15] [i_20])) ? (arr_45 [i_21] [i_21]) : (((/* implicit */long long int) arr_52 [i_17]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) arr_61 [i_15] [i_15] [i_15] [i_15] [i_15])), (var_11))))))) : (((((/* implicit */_Bool) (~(arr_27 [i_15] [i_16] [i_20] [i_21])))) ? (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) : (3992502474U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_20] [i_21] [i_20] [i_20])))))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 16; i_22 += 2) 
                        {
                            var_35 = ((/* implicit */short) arr_34 [i_22] [i_20] [i_17] [i_16] [i_15] [i_15]);
                            arr_71 [i_15] [i_22] [i_20] [i_17] [i_16] [i_15] = ((4294967283U) << (((arr_20 [i_16]) - (4009362834U))));
                            var_36 = ((/* implicit */long long int) arr_30 [i_15] [i_15]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) 
                        {
                            arr_75 [i_15] [i_16] [i_15] = ((/* implicit */_Bool) var_3);
                            var_37 ^= ((/* implicit */int) var_8);
                            var_38 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 540278525U)) || (((/* implicit */_Bool) arr_64 [i_15] [i_16])))))) * (((((/* implicit */_Bool) arr_70 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_23])) ? (17197617391520971909ULL) : (((/* implicit */unsigned long long int) 3754688770U))))));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) arr_61 [i_23] [i_20] [i_17] [i_16] [i_15]))));
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) min(((!(arr_57 [i_20] [i_20] [i_20]))), (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))))))));
                        }
                        arr_76 [i_15] [i_17] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_15] [i_15])) <= (((int) var_9))));
                    }
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        var_41 += ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_24 - 1])) || (((/* implicit */_Bool) -35184372088832LL)))) ? (((/* implicit */int) (!(var_0)))) : ((+(((/* implicit */int) arr_51 [i_15]))))))), (min((((/* implicit */unsigned int) ((3265980010U) < (3347124943U)))), (1028987286U)))));
                        arr_79 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */int) ((min((arr_39 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]), (((/* implicit */long long int) 1008915720U)))) - (min((((/* implicit */long long int) arr_62 [i_24 - 1] [i_24 - 1] [i_17] [i_17] [i_16] [i_15])), (((((/* implicit */_Bool) var_5)) ? (arr_29 [i_15] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                        arr_80 [i_15] [i_15] [i_17] [i_24 - 1] = 1028987286U;
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((unsigned int) (+(1534535223U)))))));
                    }
                    var_43 += max((((/* implicit */unsigned int) (unsigned char)52)), (3265980037U));
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
                    {
                        arr_84 [i_15] [i_16] [i_15] [i_25 + 1] = ((/* implicit */signed char) var_11);
                        var_44 = ((/* implicit */int) max((((/* implicit */unsigned char) arr_33 [i_15] [i_16] [i_17] [i_17] [i_25 + 1])), (var_10)));
                        var_45 = ((/* implicit */_Bool) 1028987279U);
                    }
                    /* vectorizable */
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) /* same iter space */
                    {
                        var_46 ^= ((/* implicit */_Bool) var_6);
                        var_47 = ((/* implicit */unsigned int) ((arr_34 [i_26 + 1] [i_17] [i_17] [i_16] [i_15] [i_15]) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
                        {
                            arr_89 [i_15] [i_16] [i_15] [i_26 + 1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_67 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1])) << ((((-(((/* implicit */int) (unsigned char)134)))) + (145)))));
                            var_48 &= ((/* implicit */unsigned int) ((((long long int) var_13)) - (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_27] [i_27] [i_26 + 1] [i_26 + 1] [i_16])))));
                        }
                    }
                }
            } 
        } 
        var_49 -= ((/* implicit */unsigned int) arr_38 [i_15] [i_15] [i_15] [i_15]);
        var_50 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12702)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)30843))))) : ((~(((/* implicit */int) (signed char)-96))))))));
        /* LoopNest 3 */
        for (int i_28 = 0; i_28 < 16; i_28 += 2) 
        {
            for (unsigned int i_29 = 2; i_29 < 15; i_29 += 2) 
            {
                for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                {
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (max((var_11), (((/* implicit */short) arr_51 [i_15]))))))) && (((/* implicit */_Bool) ((arr_20 [i_30 - 1]) & (var_5))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_31 = 0; i_31 < 16; i_31 += 2) 
                        {
                            var_52 ^= ((/* implicit */_Bool) (((+(arr_29 [i_29] [i_28] [i_29 - 2] [i_30 - 1] [i_31]))) ^ (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_87 [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1])) ? (((/* implicit */int) arr_94 [i_31] [i_29 - 2] [i_28])) : (((/* implicit */int) arr_95 [i_15] [i_28] [i_29 + 1])))))))));
                            var_53 += ((/* implicit */signed char) ((((/* implicit */int) ((arr_83 [i_28] [i_28] [i_28] [i_28]) < (((/* implicit */long long int) ((unsigned int) (_Bool)1)))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_54 [i_30 - 1] [i_28])), ((unsigned char)222))))) + (((unsigned long long int) arr_61 [i_15] [i_28] [i_29 - 2] [i_30 - 1] [i_31])))) - (117ULL)))));
                            var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) arr_39 [i_31] [i_30 - 1] [i_29 - 2] [i_15]))));
                            var_55 += ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62632))) : (max((((/* implicit */long long int) (short)10410)), (3139363435166973934LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_29 - 2] [i_30 - 1] [i_30 - 1] [i_31] [i_31]))) < (min((var_4), (((/* implicit */unsigned int) (signed char)-1)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_32 = 3; i_32 < 15; i_32 += 3) 
                        {
                            var_56 = (-(((arr_88 [i_15] [i_30 - 1] [i_15]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                            var_57 |= ((/* implicit */_Bool) arr_100 [i_15] [i_28] [i_29 - 1] [i_30 - 1] [i_30 - 1] [i_32 - 1]);
                            var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((((_Bool) (unsigned short)27012)) ? (arr_34 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) : (arr_62 [i_32 + 1] [i_32 - 3] [i_30 - 1] [i_29 - 2] [i_28] [i_15]))))));
                        }
                        var_59 = (i_15 % 2 == 0) ? (((/* implicit */unsigned int) ((max((arr_26 [i_30 - 1] [i_15] [i_15] [i_15]), (((/* implicit */unsigned long long int) var_1)))) - (((arr_26 [i_30 - 1] [i_15] [i_15] [i_15]) << (((arr_26 [i_30 - 1] [i_15] [i_15] [i_15]) - (15759567582351781030ULL)))))))) : (((/* implicit */unsigned int) ((max((arr_26 [i_30 - 1] [i_15] [i_15] [i_15]), (((/* implicit */unsigned long long int) var_1)))) - (((arr_26 [i_30 - 1] [i_15] [i_15] [i_15]) << (((((arr_26 [i_30 - 1] [i_15] [i_15] [i_15]) - (15759567582351781030ULL))) - (13301833197720697013ULL))))))));
                    }
                } 
            } 
        } 
        var_60 = ((/* implicit */unsigned long long int) 7283609923132703699LL);
    }
}
