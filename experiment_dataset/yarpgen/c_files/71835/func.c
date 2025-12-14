/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71835
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_0]), (arr_5 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (max((((/* implicit */long long int) (unsigned short)32767)), (max((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])), (arr_0 [i_1])))))));
            arr_6 [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)65234)) < (((/* implicit */int) (unsigned short)32769))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)121))));
            arr_10 [i_0] [(short)3] [i_0] &= ((/* implicit */unsigned char) (+(var_4)));
            var_19 = ((/* implicit */unsigned int) 2004490965);
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
            {
                arr_18 [i_0] [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)32767);
                var_20 = ((/* implicit */signed char) var_14);
            }
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])))))));
                var_22 &= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (unsigned short)32767)), (((unsigned long long int) (unsigned short)3980))))));
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4016158620U)))) != (((((/* implicit */_Bool) arr_14 [i_7])) ? (arr_13 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_3] [i_5] [i_6] [i_6] [i_7]))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 4294967278U))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65511))) >= (4611686018427387904ULL))))))) ? (8636108000978179535LL) : (((/* implicit */long long int) min((arr_27 [i_0] [i_3] [i_3] [i_3] [i_5] [i_6] [i_7]), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_11)))))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_8] [i_8] [i_6] [i_8] = ((/* implicit */long long int) var_9);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((_Bool)1))))))), (((((31LL) != (((/* implicit */long long int) var_12)))) ? (((((/* implicit */_Bool) (unsigned short)24576)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_7 [i_0] [i_6])))))))))));
                        var_25 *= ((/* implicit */unsigned short) var_13);
                        arr_34 [i_0] [i_8] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_21 [i_5] [i_3] [i_5] [i_6]))))));
                        var_26 = ((/* implicit */long long int) var_0);
                    }
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_27 &= ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)0)));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_22 [i_9 + 1] [i_9 + 1] [i_9 + 2])))) >> (((((/* implicit */int) arr_5 [i_9])) - (102)))));
                        var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) -1908550531))))) >> (((((/* implicit */int) arr_5 [i_0])) - (107))));
                    }
                    var_30 = (_Bool)1;
                    arr_37 [i_3] = ((/* implicit */long long int) arr_16 [i_0]);
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)32767)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (9223372036854775807LL))))))))));
                        var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_10] [i_11])) ? (4016158620U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))), (arr_1 [i_11])));
                        var_33 &= ((/* implicit */long long int) (unsigned short)65535);
                    }
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        arr_45 [i_0] [i_0] [i_5] [(short)11] [i_12] = ((/* implicit */unsigned int) (-(max((min((((/* implicit */long long int) (signed char)127)), (7014895937357903764LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))))));
                        var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_25 [12U] [i_3] [i_3]) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))))), (arr_8 [i_10] [i_10])));
                        var_35 += ((/* implicit */unsigned long long int) arr_26 [i_0] [i_10] [i_5] [i_10] [i_12] [i_3] [i_3]);
                    }
                    arr_46 [i_0] [i_3] [12LL] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((arr_25 [i_3] [i_3] [i_10]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_5])) ? (((/* implicit */int) (short)-25046)) : (370367451))))))));
                }
                for (short i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    arr_49 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 8860337035757485256ULL))))) : ((+(((/* implicit */int) (unsigned short)0))))))));
                    var_36 -= ((/* implicit */unsigned char) var_12);
                    arr_50 [i_13] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551611ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_13 + 1])))))) || (((/* implicit */_Bool) 5316021197714898351ULL))));
                    var_37 ^= ((/* implicit */unsigned short) ((-322156033394086489LL) | (((/* implicit */long long int) ((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) max((arr_8 [i_5] [i_13 + 1]), (((/* implicit */unsigned int) (signed char)-123)))))))))));
                }
            }
            arr_51 [i_0] [i_3] = ((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_38 = ((/* implicit */unsigned short) var_14);
        }
        var_39 -= ((/* implicit */int) max((9ULL), (((/* implicit */unsigned long long int) (unsigned char)1))));
        arr_52 [i_0] = ((/* implicit */int) max((((0ULL) <= (5ULL))), (((((/* implicit */unsigned long long int) var_9)) <= (9586407037952066360ULL)))));
    }
    for (short i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
    {
        var_40 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2242306179U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -322156033394086489LL)) ? (((/* implicit */int) (unsigned short)31320)) : (var_6)))) : (var_4)))));
        arr_55 [i_14] = ((/* implicit */unsigned long long int) min(((+(min((var_7), (((/* implicit */unsigned int) var_16)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(11075177710230039469ULL)))))))));
        arr_56 [i_14] = ((/* implicit */unsigned long long int) ((245760LL) - (min((-7014895937357903766LL), (-2836340401152734800LL)))));
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            var_41 *= ((/* implicit */unsigned long long int) max((min((var_9), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_15] [i_15] [i_14] [i_14]))) : (arr_9 [i_14] [3]))))), (((/* implicit */unsigned int) var_0))));
            arr_59 [i_14] = ((/* implicit */unsigned short) 9223372036854775807LL);
        }
    }
    for (short i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
    {
        arr_62 [i_16] [i_16] &= ((/* implicit */signed char) (unsigned char)64);
        var_42 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 33554400)) || (((/* implicit */_Bool) 9586407037952066360ULL)))), (((((/* implicit */int) min((((/* implicit */short) arr_35 [12ULL] [12ULL] [i_16] [i_16] [(unsigned short)5])), (arr_17 [i_16])))) < (arr_40 [i_16] [i_16] [i_16] [i_16])))));
    }
    var_43 = ((((/* implicit */_Bool) var_6)) ? (max((322156033394086489LL), (((/* implicit */long long int) (unsigned char)254)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) 2836340401152734800LL))) == (((/* implicit */int) min((var_11), (var_5)))))))));
    var_44 = ((/* implicit */short) var_7);
}
