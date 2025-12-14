/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65705
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
    var_15 |= ((/* implicit */long long int) ((((7772882711814536086ULL) >> (((((((/* implicit */int) var_5)) + (((/* implicit */int) var_13)))) - (58193))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (var_7))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))) : (15670278862364213747ULL)));
        var_16 = ((/* implicit */int) ((10673861361895015512ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_17 = ((/* implicit */long long int) arr_1 [i_0]);
        var_18 ^= min((((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) var_9)))))) * ((~(var_11))))), (((long long int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_19 += ((/* implicit */_Bool) arr_3 [i_0]);
            arr_5 [i_1] = ((/* implicit */unsigned short) var_10);
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((836981402), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((arr_4 [i_1] [i_0]) || (((/* implicit */_Bool) arr_0 [i_0]))))))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) /* same iter space */
            {
                arr_10 [i_0] [i_2] [i_0] |= ((/* implicit */long long int) min((((/* implicit */int) var_14)), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_8 [i_3 + 2] [i_2 - 1] [i_2] [i_2]))))));
                var_21 |= ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0])) - (((((/* implicit */_Bool) ((arr_9 [i_3 + 2] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 - 3] [i_0])))))) ? ((~(var_12))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
            {
                var_22 -= ((/* implicit */long long int) -594888081);
                arr_14 [i_0] [i_2] [i_4] = ((unsigned long long int) (-(var_12)));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((18446744073709551615ULL) / (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((unsigned long long int) var_13)) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_0] [i_2] [i_4] [i_2] [(unsigned short)10]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_5 + 1] [i_5 + 1] [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))))));
                            arr_21 [i_6 + 1] [i_5] [(signed char)7] [i_5] [i_0] = var_13;
                            var_24 = ((((arr_17 [i_0] [i_5] [i_4 - 2] [i_5] [i_0] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_16 [i_5])) <= (12ULL))))))) < (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_7 [12LL] [i_4 - 2])))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34489))) >= (arr_11 [i_7] [i_2] [i_0])))))) | (((((/* implicit */unsigned long long int) var_12)) - (max((((/* implicit */unsigned long long int) arr_23 [i_7] [i_0] [i_2 + 2] [i_0])), (18446744073709551615ULL)))))));
                var_26 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_1)))))))));
            }
            arr_25 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11)))))))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_11))));
            var_28 -= ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) 8630178566079260866LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_2 + 1] [i_0] [i_0]))) : (var_0))))), (((/* implicit */unsigned long long int) var_8))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */long long int) var_10);
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42328))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) -407225532)), (var_11))) <= (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))))));
        arr_29 [13] [13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_8] [3LL] [i_8] [i_8]))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_32 [(signed char)14] [i_9] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_9]))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_4))));
    }
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_42 [i_12] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10] [i_10] [i_11] [i_11]))) | (max((arr_9 [i_12] [i_11] [5LL]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23234)) >> (((((/* implicit */int) var_8)) - (28585))))))))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_12])) && (var_2)));
                    arr_43 [3LL] [i_11] [i_11] = ((/* implicit */int) (~((~(arr_38 [i_12] [i_11] [i_10])))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_32 += ((/* implicit */unsigned short) min((var_9), ((~((~(((/* implicit */int) var_4))))))));
                    arr_46 [i_11] [2LL] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((var_6) + (5796756805275278885LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_11)))))) : (((arr_38 [i_10] [i_11] [i_13]) | (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                    arr_47 [i_11] [i_11] [i_13] = ((long long int) ((((long long int) 8184262249536262622LL)) | (((var_6) | (arr_12 [i_10])))));
                    arr_48 [i_11] = ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (long long int i_15 = 2; i_15 < 8; i_15 += 3) 
                        {
                            {
                                var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_38 [i_10] [i_10] [i_13]) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_10] [i_10]))) | (var_11)))))) ? ((~(arr_33 [i_15 - 2]))) : (((/* implicit */long long int) (((((~(arr_27 [i_11]))) + (2147483647))) >> ((((~(((/* implicit */int) var_8)))) + (28608))))))));
                                var_34 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_34 [i_10] [i_15 - 2]))))) != (18446744073709551612ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_15] [i_15] [i_11] [i_15 + 2] [i_15])) || (((/* implicit */_Bool) arr_19 [i_13] [5LL] [i_14] [i_15 + 2] [3LL]))))) : ((+(((/* implicit */int) var_2))))));
                                arr_53 [i_10] [i_10] [i_11] [i_13] [(_Bool)1] [i_10] [i_15] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(var_12)))) ? (max((((/* implicit */long long int) arr_7 [(_Bool)1] [8LL])), (8630178566079260873LL))) : (var_11)))));
                            }
                        } 
                    } 
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_17 = 1; i_17 < 8; i_17 += 3) 
                    {
                        arr_59 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_10] [i_10] [i_11] [i_11] [5ULL])), (var_6))))))) & (((/* implicit */int) var_2))));
                        var_35 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 1605142846)) % (var_0))) >> (((arr_27 [i_10]) / (arr_27 [i_10])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_18 = 2; i_18 < 8; i_18 += 3) 
                        {
                            arr_63 [i_18] [(_Bool)1] [(signed char)0] |= ((/* implicit */int) ((var_12) >= ((-(-4247604390839463784LL)))));
                            var_36 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_14))))));
                            arr_64 [3LL] [i_11] [i_11] [1LL] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) | (var_7)));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((arr_18 [(unsigned short)12] [i_19] [4LL] [i_17 + 1] [i_17 + 1]) & (((/* implicit */int) max((var_10), (arr_24 [i_19] [i_16] [i_11] [i_10]))))))));
                            var_38 |= ((/* implicit */unsigned long long int) ((long long int) ((long long int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_9)))) ^ (((((/* implicit */_Bool) (unsigned short)57659)) ? (arr_65 [i_17 - 1] [i_17] [i_17 - 1] [i_17] [i_17 - 1]) : (((/* implicit */unsigned long long int) arr_51 [(signed char)8] [i_11] [i_17] [i_17 - 1] [i_11] [i_16]))))));
                            var_40 = ((/* implicit */_Bool) var_6);
                        }
                        for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            arr_70 [i_11] [(unsigned short)5] [i_11] [6LL] [i_20] = (~(((/* implicit */int) ((unsigned short) var_0))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)63859))))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_14))))))));
                            var_42 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) != ((+(((((/* implicit */long long int) ((/* implicit */int) var_2))) % (var_6)))))));
                        }
                    }
                    for (signed char i_21 = 4; i_21 < 9; i_21 += 3) 
                    {
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_67 [i_16] [i_11] [(signed char)3] [i_21] [i_11] [i_10] [(signed char)7]))));
                        var_44 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_12 [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [2LL] [(signed char)9]))) : (arr_40 [(unsigned short)1] [i_11] [i_16] [(signed char)9])))))) ? (-4247604390839463762LL) : (min((((var_10) ? (var_1) : (4247604390839463762LL))), (((/* implicit */long long int) arr_23 [(signed char)7] [i_21 - 3] [i_21] [i_21 - 3])))));
                    }
                    for (long long int i_22 = 4; i_22 < 7; i_22 += 3) 
                    {
                        arr_77 [i_11] [i_11] [i_22] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_30 [i_10]))))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) arr_37 [i_22 - 1])) : (7772882711814536071ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_10] [i_10])), (2251799813685247ULL)))))))));
                        var_45 = ((/* implicit */long long int) ((var_7) / (((/* implicit */unsigned long long int) 836981408))));
                        var_46 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (signed char)-122))))));
                    }
                    var_47 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18445618173802708992ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_16])) : ((~(arr_19 [(unsigned short)1] [11ULL] [5LL] [i_11] [3LL])))))) ? (((/* implicit */unsigned long long int) ((var_9) / ((+(((/* implicit */int) arr_74 [6] [i_11] [i_10]))))))) : (((((/* implicit */_Bool) (~(arr_57 [(signed char)2] [i_11] [i_16] [i_11] [i_11])))) ? (max((1ULL), (((/* implicit */unsigned long long int) arr_54 [6LL] [i_11] [6LL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (9770122111994052978ULL)))))))));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */int) min((((/* implicit */long long int) (+((~(((/* implicit */int) arr_58 [i_10] [(signed char)8] [i_11] [i_11] [i_23]))))))), (max((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_11))), (max((-4491629879744369754LL), (var_6)))))));
                    var_49 = ((/* implicit */unsigned long long int) arr_39 [i_10] [(unsigned short)4] [i_10]);
                }
                var_50 = ((/* implicit */unsigned short) (((~(arr_56 [i_11] [i_10] [i_11]))) | (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11])))));
                /* LoopSeq 2 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 10; i_25 += 3) 
                    {
                        for (long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                        {
                            {
                                var_51 = ((/* implicit */long long int) arr_62 [i_10] [i_10] [i_10] [i_25] [i_26]);
                                var_52 = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    arr_89 [i_11] [5] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_62 [9ULL] [i_11] [i_11] [9ULL] [5LL]))))))))));
                }
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                {
                    arr_92 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) var_2);
                    var_53 = ((/* implicit */unsigned short) min((var_53), (min((((unsigned short) (unsigned short)42301)), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_2))))) <= (((((/* implicit */_Bool) 10673861361895015530ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (22ULL))))))))));
                }
                arr_93 [6LL] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */signed char) arr_75 [i_11] [(unsigned short)4] [i_10] [i_10])), ((signed char)111))))))) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_10] [(unsigned short)7] [i_11] [i_11])) & (((/* implicit */int) (unsigned short)57659))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (836981402) : (((/* implicit */int) (signed char)-4))))) : (var_7)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 3) 
                {
                    var_54 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_30 [(unsigned short)15]))))));
                    arr_98 [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) (signed char)111);
                    var_55 = ((/* implicit */_Bool) (~(var_11)));
                }
            }
        } 
    } 
    var_56 = ((/* implicit */long long int) var_14);
}
