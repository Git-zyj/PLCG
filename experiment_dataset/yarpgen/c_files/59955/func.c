/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59955
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3094936270U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) -1430496924)) : (var_7)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_1)), (arr_1 [i_1]))), (((/* implicit */unsigned int) arr_3 [i_1]))));
            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), ((+(arr_1 [i_0])))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) var_6);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] |= ((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_2] [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (var_3)));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1430496924) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 1]))));
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_25 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)52010))));
                    arr_13 [i_0] [i_2] [i_3 - 1] [i_3] [i_4] &= ((((/* implicit */int) var_12)) % (((/* implicit */int) var_8)));
                    arr_14 [i_0] [i_2] [i_3] [i_4] |= (+(((/* implicit */int) (unsigned short)46826)));
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1))));
                    arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 1031348070U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 2])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_0] [i_2] [i_3] [i_5] = ((/* implicit */int) arr_2 [i_2]);
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_3] [i_3] [i_3 - 1] [i_5] [i_3])) | (((/* implicit */int) arr_12 [i_5] [i_3] [i_3 - 1] [i_3] [14] [i_0]))));
                }
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_28 *= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_6] [i_2] [i_7])));
                        var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))));
                        var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                    }
                    var_31 = ((/* implicit */signed char) (+(((var_17) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                arr_24 [i_0] [i_2] = ((/* implicit */unsigned short) ((arr_17 [i_0] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3 + 1]) & (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned short i_9 = 2; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_32 ^= ((/* implicit */short) (~(arr_17 [i_0] [i_3 + 1] [i_3] [i_8 - 1] [i_9 - 2] [i_3 - 1])));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_0] [i_2] [i_8 - 1] [i_8 + 1] [i_9 + 1] [i_9])))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) var_14))))) + (var_5))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                    var_36 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (((unsigned long long int) arr_26 [i_0] [i_2] [i_0] [i_10])));
                }
                for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (-1430496924))) : (((/* implicit */int) var_1)))))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_3] [i_11])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2] [i_11])) || (((/* implicit */_Bool) var_1)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        arr_37 [i_0] [i_3] = ((/* implicit */unsigned int) var_10);
                        var_39 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3] [(signed char)8] [i_3] [i_3 - 2])) : (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_27 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_27 [i_3 - 1] [i_3 + 1])))))));
                        var_41 = ((/* implicit */signed char) var_13);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7551980077777248345LL)) ? (27LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))));
                    }
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                        arr_41 [i_0] [i_2] [i_3] [i_11] [i_13] [i_11] = ((/* implicit */signed char) (~(2930177686U)));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_2] [i_3] [i_11]))) : (var_4)))) ? (((/* implicit */int) ((533985576542644840LL) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
                    {
                        var_45 *= ((/* implicit */signed char) ((unsigned short) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                        var_46 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_17))))));
                    }
                    arr_45 [i_0] [i_2] [14LL] [i_11] |= ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [10LL] [i_3] [i_0] [i_11]);
                }
                for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    var_47 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                    var_48 = ((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_2])) / (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19))))));
                }
            }
        }
        arr_48 [i_0] &= ((/* implicit */unsigned char) ((min((arr_44 [i_0] [i_0] [i_0] [i_0]), (arr_44 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)46799))))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_42 [13U] [i_0] [i_0] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_49 = max((max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_15)) ? (-6705635379810445184LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) var_3)));
    var_50 -= ((/* implicit */int) ((long long int) ((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)44599)))) & (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)8128))))))));
    /* LoopSeq 1 */
    for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
    {
        arr_51 [i_16] [i_16] = ((/* implicit */long long int) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))))));
        var_51 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_1 [i_16])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)29032), (((/* implicit */unsigned short) (_Bool)1)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((6705635379810445192LL), (var_5))))))))));
        arr_52 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15205))) : (arr_29 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) + (((((/* implicit */_Bool) 3278556449436415495LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 - 2])))))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)30020)))) ? (1765221779) : (((/* implicit */int) arr_47 [7U] [i_16]))))));
        var_52 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (arr_46 [i_16] [i_16 - 2] [i_16])))) < (((min((((/* implicit */long long int) var_19)), (arr_18 [i_16] [i_16]))) - (((/* implicit */long long int) ((/* implicit */int) max((var_19), (((/* implicit */unsigned short) var_16))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_17 = 1; i_17 < 16; i_17 += 3) 
        {
            var_53 = (((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_16)) & (((/* implicit */int) var_11)))));
            var_54 = ((((/* implicit */_Bool) ((unsigned int) var_5))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_47 [i_16 - 2] [i_16 - 1])));
            arr_55 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
            arr_56 [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_16 + 1] [i_16 + 1] [i_17 + 2]))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) arr_7 [i_16]))));
            var_56 = ((/* implicit */signed char) var_1);
            arr_60 [i_16 + 1] [i_16] [i_18] = ((/* implicit */unsigned char) var_10);
        }
    }
}
