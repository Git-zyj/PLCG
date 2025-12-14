/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61112
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
    var_16 -= ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) (unsigned char)216)) == (((/* implicit */int) (unsigned char)117)))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) var_12)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) var_9);
                            arr_14 [i_3 + 1] [i_1 + 1] [i_1 + 1] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : (((arr_2 [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_4])))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_0] [6ULL] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 3] [i_1 - 3] [(signed char)2] [i_4])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2 + 3] [(signed char)8] [i_4])))))));
                            arr_15 [i_3 - 1] [i_3 - 1] [i_0] [i_0] [i_0] [i_0] [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1970231563250034897ULL)) ? (((/* implicit */int) (unsigned char)44)) : (-344033082)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_4 [i_5] [i_1 - 1] [i_1]))));
                    arr_18 [i_0] [i_0] [i_2 - 2] [i_5] = ((/* implicit */_Bool) var_6);
                }
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_19 = ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_6] [i_1 + 1] [(signed char)6] [i_1] [i_0] [i_0]))) - (((((/* implicit */_Bool) var_15)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [2LL] [i_1 + 1]))))));
                arr_21 [i_0] [i_6] [i_1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 6339979097913937600ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_6]))))));
            }
            arr_22 [(unsigned short)10] &= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
            var_20 = ((/* implicit */signed char) max((-4898932170015713742LL), (-8213245874957661379LL)));
            var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(short)10] [i_1])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)27677)) : (((/* implicit */int) (signed char)119))))), (((((/* implicit */_Bool) (short)-30799)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23180))) : (6123845918787357073ULL)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-88)), (9ULL))))));
                arr_25 [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned long long int) (signed char)70)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_17 [i_0] [i_1 - 2] [i_0] [i_0] [i_7])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_0] [i_1 - 3] [i_0] [i_0] [i_7])), (var_1)))) : (((((/* implicit */_Bool) (short)10816)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))));
            }
        }
        var_23 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)4] [(unsigned char)4] [i_0] [i_0])) : (arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16396)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [12])) : (((/* implicit */int) arr_12 [i_0] [0LL] [i_0] [0LL] [i_0])))), (((/* implicit */int) arr_24 [12LL]))))));
        arr_26 [i_0] = (~((+(min((6204792590404334246LL), (((/* implicit */long long int) (signed char)-36)))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) arr_9 [4LL] [4LL])) ? (((/* implicit */int) arr_7 [(unsigned char)4] [i_0])) : (((/* implicit */int) var_12)))), (((/* implicit */int) min(((signed char)-123), ((signed char)-1))))))))));
    }
    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)96))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)121))) : (arr_28 [i_8]))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)119)), (-114639062))))))) ? (((((/* implicit */_Bool) 4220962042840812121LL)) ? (-3877179872108656910LL) : (1454351037778002076LL))) : (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8])))))) : (var_1)))));
        arr_30 [i_8] = min((max((var_9), (((((/* implicit */_Bool) arr_28 [i_8])) ? (-441625103740573088LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))))), (min((((((/* implicit */_Bool) (short)-10858)) ? (-8142173605793524226LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), ((((_Bool)1) ? (((/* implicit */long long int) -2020935804)) : (arr_28 [i_8]))))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_8])) ? (-8465706121185282769LL) : (var_11)))) ? (((((/* implicit */_Bool) arr_31 [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_9]))) : (arr_32 [i_8] [i_8]))) : (((long long int) var_1))))) ? (((((/* implicit */_Bool) max((arr_32 [i_8] [i_8]), (arr_27 [i_9])))) ? ((+(arr_28 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (max((((/* implicit */long long int) min((var_15), (((/* implicit */short) var_7))))), ((+(arr_28 [i_8])))))));
            var_27 *= ((/* implicit */signed char) var_13);
            arr_33 [i_9] [i_9] = ((/* implicit */unsigned char) arr_28 [i_8]);
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) arr_27 [i_8]);
            arr_36 [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_31 [i_10] [i_8])) : (arr_35 [i_8] [i_10])))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                for (unsigned int i_12 = 1; i_12 < 16; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_10] [i_12 - 1] [i_12 - 1] [i_12])) != (((/* implicit */int) arr_41 [i_11] [i_12 - 1] [i_12 - 1] [i_11]))));
                        var_30 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)32764))))));
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                arr_48 [i_14] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_8] [i_14])))) ? (min((((/* implicit */unsigned long long int) (signed char)86)), (((unsigned long long int) (unsigned short)42415)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_8] [i_8] [i_8] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (min((arr_38 [i_14] [i_14] [i_8]), (var_1))))))));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(arr_32 [i_8] [i_13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6875344003673482881ULL)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (short)-3957))))) : (((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_8] [i_14])) ? (((/* implicit */unsigned long long int) -9LL)) : (var_10))))))))));
            }
            var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_45 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((arr_27 [i_13]) | (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_8] [i_8] [i_13])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_44 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_46 [i_8] [i_8] [i_8] [i_8])))) : ((~(((/* implicit */int) (signed char)31))))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_8] [i_8]))))), (min((((/* implicit */long long int) arr_31 [i_13] [i_13])), (arr_28 [i_8])))))));
            arr_49 [i_13] = min((((((/* implicit */_Bool) max((-1906688731989900863LL), (1540846275703147554LL)))) ? (max((((/* implicit */long long int) var_14)), (9223372036854775807LL))) : (8787440749259061666LL))), (((/* implicit */long long int) max(((unsigned char)255), (var_6)))));
        }
    }
    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 4) 
    {
        var_33 ^= ((/* implicit */long long int) arr_50 [i_15 + 1]);
        arr_52 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_50 [i_15])) : (((/* implicit */int) arr_50 [i_15 - 1]))))), (((((/* implicit */_Bool) (signed char)93)) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))))))) ? (((((/* implicit */_Bool) max((arr_51 [i_15]), (arr_51 [i_15 - 1])))) ? (((((/* implicit */_Bool) arr_51 [i_15 + 1])) ? (5130307948546980322LL) : (((/* implicit */long long int) 7U)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_15 + 1])) >> (((/* implicit */int) arr_51 [i_15 + 1]))))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) arr_51 [i_15])))), (((((/* implicit */_Bool) arr_50 [i_15 - 1])) ? (((/* implicit */int) arr_51 [i_15 + 1])) : (((/* implicit */int) var_14)))))))));
        var_34 = ((/* implicit */long long int) (signed char)-111);
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_15])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_51 [i_15 - 1])))))) : (6155819853748917529LL)));
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_16])))))) : (arr_27 [i_16]))))));
        var_37 &= ((/* implicit */long long int) ((unsigned short) arr_8 [i_16] [i_16] [i_16] [i_16] [i_16]));
        arr_55 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_16] [i_16] [i_16] [i_16]))) : (arr_28 [i_16])))) ? (arr_42 [i_16] [i_16] [i_16]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_16] [i_16])))))));
    }
    var_38 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2428508365498786395LL)))))));
}
