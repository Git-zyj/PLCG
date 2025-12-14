/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64283
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned char)39))));
    }
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (short)32767))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (short)8)))) * ((-(((/* implicit */int) var_8))))));
        var_14 &= ((/* implicit */unsigned char) var_2);
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)10] [i_1])))))) : ((-(arr_3 [i_1]))))))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) 1873598091);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_10 [i_2] = max((((/* implicit */unsigned short) min((var_1), (((/* implicit */short) arr_8 [i_2] [i_2] [i_3]))))), ((unsigned short)7368));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244)))))) > (max((arr_9 [i_2] [i_3]), (((/* implicit */unsigned long long int) var_4))))));
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max(((unsigned short)32), (((/* implicit */unsigned short) var_3))));
                            arr_22 [i_6] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */int) ((min((94178748313438053LL), (((/* implicit */long long int) (unsigned short)61943)))) <= (((/* implicit */long long int) (~(((arr_16 [i_6] [i_6] [i_5] [11ULL] [i_3] [i_3] [4U]) << (((((/* implicit */int) var_5)) - (118))))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((+(((/* implicit */int) (signed char)3)))) <= (((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_4] [i_5] [i_5] [i_2])))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_26 [2U] = ((/* implicit */short) (+(((/* implicit */int) (signed char)28))));
            /* LoopSeq 4 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_31 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-17)) / ((+(((/* implicit */int) var_0))))))) ? (arr_18 [i_2] [i_7] [i_7] [i_8]) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)7371)) % (((/* implicit */int) (unsigned char)88)))) / (((/* implicit */int) min((arr_23 [i_2]), (((/* implicit */short) arr_28 [i_2])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_34 [(signed char)16] [(signed char)16] [6ULL] [i_2] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)94)));
                    arr_35 [i_2] [i_2] [i_7] [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_9]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [(unsigned char)23]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)9]))) / (arr_19 [i_2])))));
                    var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) 53658518)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6)))));
                    var_19 = ((/* implicit */unsigned long long int) arr_27 [i_2] [i_7] [i_2] [i_9]);
                }
                for (signed char i_10 = 1; i_10 < 23; i_10 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2]);
                    arr_39 [12ULL] [12ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_2] [i_8] [i_8] [i_8])) / (-2147483640)));
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_37 [i_2] [14LL] [(short)0] [i_7] [(short)0] [8ULL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_8] [i_8] [10] [i_2])) || (((/* implicit */_Bool) (unsigned short)50557))))) : ((-(((/* implicit */int) arr_28 [i_2])))))), (-1))))));
            }
            for (short i_11 = 1; i_11 < 23; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            var_22 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31152)) ? (((/* implicit */int) (short)-20982)) : (((/* implicit */int) (unsigned char)163))))) & (((min((((/* implicit */unsigned long long int) (short)-128)), (3213072659062229900ULL))) >> (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-10904)))) + (10937)))))));
                            arr_48 [i_2] [i_2] [i_11 - 1] [i_11 - 1] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_2]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) || ((_Bool)1))))))) : ((~(var_4))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17283666072594807818ULL)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)252))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_25 = ((/* implicit */int) arr_24 [i_11 + 1] [i_7]);
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0))));
                        var_27 *= ((/* implicit */unsigned int) ((arr_9 [i_11] [i_11 + 1]) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_2] [i_2] [23] [i_14])))))));
                        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                        arr_56 [13ULL] [1] [i_11 - 1] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))));
                    }
                    for (short i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) (-2147483647 - 1));
                        var_30 = ((/* implicit */signed char) (-(var_4)));
                        arr_59 [i_7] |= ((/* implicit */unsigned long long int) arr_44 [i_2] [i_7] [i_11 - 1] [i_11] [i_11 + 1] [i_2]);
                        arr_60 [i_2] [i_2] [i_7] [i_16] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_13 [i_2] [i_11 + 1] [i_11] [i_14])));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (arr_8 [i_2] [i_17] [i_2])));
                        var_32 += ((/* implicit */unsigned char) (+(arr_41 [i_2] [i_11 - 1] [i_11])));
                        arr_64 [i_14] [i_14] [i_14] [i_11] [17LL] [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)86))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (var_4)))) ? ((~(67553994410557440ULL))) : (arr_62 [i_14] [15LL] [i_7] [i_14])));
                        var_34 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))) * (5874462064570017463ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 1) 
                    {
                        arr_68 [i_14] [i_14] [i_11 - 1] [i_11] [19] [i_11] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_32 [i_2] [i_7] [i_18 + 3] [i_11 - 1]))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (unsigned char)254))));
                    }
                    for (signed char i_19 = 2; i_19 < 20; i_19 += 2) 
                    {
                        arr_72 [i_2] [i_14] [i_14] [i_11] [i_7] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((arr_9 [i_14] [i_2]) * (((/* implicit */unsigned long long int) 3684264060U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_2] [i_11] [i_11 + 1] [i_19 + 3])))));
                        arr_73 [i_2] [i_2] [9] [i_2] [i_14] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_7])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_36 -= ((/* implicit */int) arr_28 [i_2]);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_63 [i_11 - 1] [i_11 + 1] [i_11])) < (((/* implicit */int) ((arr_19 [20]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                    }
                }
            }
            for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((-375900614) + (arr_27 [i_2] [i_2] [i_2] [(unsigned char)19]))) | (((/* implicit */int) var_7))))), ((+((((_Bool)1) ? (4220482364423311754ULL) : (((/* implicit */unsigned long long int) arr_79 [16ULL] [i_7] [i_7]))))))));
                            var_40 = ((/* implicit */int) arr_67 [i_23] [i_22] [(unsigned char)2] [i_7] [i_2]);
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_6) & (3908201337U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_2] [(signed char)3] [(unsigned short)12])) : (((/* implicit */int) (_Bool)1)))))))) ? (min((4294967295U), (386765980U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_42 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
                arr_84 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3783)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)158)) << (((arr_58 [i_2] [i_7] [i_21] [i_21] [i_21]) + (1901705409)))))), ((-(2529923180979595435LL))))), (max((((((/* implicit */_Bool) arr_62 [i_21] [i_21] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (1768994394530155073LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_7] [i_21] [i_21] [i_7])) | (((/* implicit */int) arr_81 [i_2]))))))))))));
            }
            for (signed char i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_25 = 2; i_25 < 23; i_25 += 3) /* same iter space */
                {
                    arr_90 [i_2] [i_24] = ((/* implicit */int) (unsigned char)249);
                    var_44 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_89 [(unsigned char)15] [i_24] [i_24] [i_7] [(signed char)3] [i_2])))) ? (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)103)) == (((/* implicit */int) var_10)))))));
                    arr_91 [i_24] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_24] [i_2] [i_24] [7U] [i_7] [i_24]))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_46 [i_7] [i_24] [i_7] [i_7] [i_2] [i_2] [i_2]) : (((/* implicit */int) (unsigned short)20745)))) : ((+(((/* implicit */int) var_3))))));
                }
                for (unsigned char i_26 = 2; i_26 < 23; i_26 += 3) /* same iter space */
                {
                    var_45 += ((/* implicit */signed char) ((((/* implicit */int) (short)20986)) >= (((((/* implicit */int) (short)-31287)) + (((/* implicit */int) (unsigned char)1))))));
                    var_46 = ((/* implicit */unsigned char) arr_16 [i_2] [i_2] [i_24] [i_26 - 2] [i_26] [i_7] [i_26 - 1]);
                    arr_94 [i_26 + 1] [i_24] [i_24] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */int) (unsigned char)9)) << (((((/* implicit */int) (short)-5863)) + (5879)))))));
                    var_47 = ((/* implicit */int) var_2);
                }
                for (int i_27 = 3; i_27 < 21; i_27 += 4) 
                {
                    arr_98 [i_24] [i_24] [22ULL] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) - (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    var_48 |= ((/* implicit */unsigned short) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (-(923030530)))) ? (((/* implicit */int) arr_70 [i_7])) : (((/* implicit */int) (_Bool)1))))));
                    var_49 = ((/* implicit */unsigned long long int) var_9);
                }
                arr_99 [i_2] [i_7] [i_24] [i_7] = ((/* implicit */short) max((arr_19 [i_2]), (arr_9 [i_2] [i_7])));
                arr_100 [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_7] [16] [i_2]))) ^ (18446744073709551605ULL))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_2] [i_7] [i_24] [i_7])), (arr_46 [i_2] [i_2] [i_2] [i_2] [(unsigned char)22] [i_2] [12]))))));
            }
        }
        for (short i_28 = 0; i_28 < 24; i_28 += 4) 
        {
            var_50 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) (short)-32766)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) arr_63 [i_2] [i_28] [i_28])), (arr_30 [i_2] [i_28] [0ULL] [i_28])))))))));
            arr_103 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_5))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) var_5)) % (((/* implicit */int) (_Bool)1))))))));
            var_51 = ((/* implicit */long long int) (unsigned char)65);
        }
    }
    for (int i_29 = 0; i_29 < 10; i_29 += 1) 
    {
        arr_106 [(short)0] |= ((/* implicit */long long int) (+(((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) & (arr_1 [i_29])))));
        arr_107 [i_29] [i_29] = (-(((/* implicit */int) arr_92 [i_29])));
    }
    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) var_0))));
}
