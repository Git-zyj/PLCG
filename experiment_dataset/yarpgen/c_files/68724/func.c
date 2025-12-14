/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68724
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 += ((/* implicit */unsigned short) max((max((2242191134U), (((/* implicit */unsigned int) (signed char)-22)))), ((-(((arr_1 [i_0]) / (((/* implicit */unsigned int) 1747958579))))))));
            arr_4 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) 1507149307949049ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-4096))))))), (18445236924401602566ULL)));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-13)) + (((/* implicit */int) (!(((/* implicit */_Bool) 8022809233278322811LL)))))))) ? (((((/* implicit */_Bool) -1199676671289406650LL)) ? (-7905263147868433902LL) : (-7905263147868433902LL))) : (((((/* implicit */long long int) arr_1 [i_0 - 2])) % (8128085016137203611LL)))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_7 [i_2] [i_0] &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_17 = ((/* implicit */int) ((max((4141402833546321893LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14)) | (((/* implicit */int) (unsigned short)56377))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_3]))));
                    var_19 = ((/* implicit */unsigned int) max((min((arr_3 [i_0 - 1] [i_4 + 1]), (((/* implicit */unsigned long long int) ((_Bool) 1507149307949049ULL))))), ((+(1019904660557938980ULL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_2] [i_2] |= ((/* implicit */long long int) 3205235524U);
                        arr_20 [i_3] [i_3] [i_3] [i_3] [i_2] [i_3] &= (unsigned short)34160;
                        var_20 = ((/* implicit */short) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_14 [i_0 - 1] [i_3] [i_3 - 2] [i_3] [i_3 + 1]))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((-1432696438614283105LL) + (9223372036854775807LL))) << (((((-4141402833546321894LL) + (4141402833546321939LL))) - (45LL))))))));
                    }
                    for (short i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        arr_23 [i_2] [i_5] [i_3] [i_3 - 2] [i_2] [i_0] [i_0 + 2] = ((/* implicit */long long int) arr_6 [i_3 - 2] [i_0 + 1]);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 7905263147868433902LL))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_23 |= ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_2] [i_3 + 1] [i_0 - 1] [i_8] [i_8]) | ((~(((/* implicit */int) (short)32767))))));
                        arr_26 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_8] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2]))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)925)) | (((/* implicit */int) (unsigned short)36425))));
                    }
                    arr_27 [i_0] [i_2] [i_0] [i_3] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5] [i_3 + 1])) > (((/* implicit */int) arr_16 [i_5] [i_3 + 1] [i_3] [i_3] [i_3 + 1]))));
                    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_0 + 2])) ^ (((/* implicit */int) arr_5 [i_0 - 2]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2])))))));
                        arr_30 [i_0] [i_9] [i_3] [i_5] [i_9 + 1] = ((/* implicit */int) var_4);
                    }
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_27 = ((8027440269647072303ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        arr_34 [i_2] [i_2] [i_3] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-17844))));
                    }
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_3] [i_11] [i_11] [i_11])))))))));
                        var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_2] [i_3 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_31 [i_3] [i_3 + 1] [i_3] [i_11])) : (((/* implicit */int) arr_31 [i_3] [i_3 + 1] [i_5] [i_11]))));
                        var_30 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_11]))));
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 768U)))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_2] [i_3] [i_3 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_24 [i_3 + 1] [i_11])) : (((/* implicit */int) arr_16 [i_3 - 1] [i_2] [i_3] [i_5] [i_0 + 2]))));
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((1507149307949049ULL) != (17426839413151612635ULL)));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_3 - 1] [i_5] [i_12])) ? (arr_28 [i_5] [i_5] [i_3]) : (arr_28 [i_3] [i_2] [i_0 - 1])));
                        arr_40 [i_12] [i_5] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_22 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12] [i_12 - 1])));
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                {
                    var_35 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_3 - 1])) ? (max((var_4), (((/* implicit */unsigned long long int) (signed char)64)))) : (((/* implicit */unsigned long long int) (~(4503599627370488LL))))))));
                    var_36 += ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))), (((arr_37 [i_3] [i_3 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) != (((/* implicit */unsigned long long int) arr_28 [i_3 + 1] [i_3 + 1] [i_0 + 2]))))));
                    var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0 - 1] [i_2] [i_2] [i_13]))))), (arr_3 [i_0 - 3] [i_3 - 1]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 3; i_14 < 17; i_14 += 3) 
                    {
                        arr_46 [i_0] [i_0] [i_2] [i_3] [i_13] [i_14 - 1] = ((/* implicit */int) min(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) arr_32 [i_2] [i_3] [i_13] [4U])))), (((/* implicit */long long int) ((arr_32 [i_13] [i_13] [i_3 - 1] [i_2]) / (arr_32 [i_0 - 3] [i_2] [(short)6] [i_2]))))));
                        var_38 = ((/* implicit */_Bool) max((((((unsigned long long int) 1019904660557938989ULL)) & (((/* implicit */unsigned long long int) (~(2080768U)))))), (((/* implicit */unsigned long long int) (((~(var_11))) | (((arr_45 [i_14] [i_13] [i_13] [i_2] [i_13] [(signed char)7] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 3] [i_0]))))))))));
                        var_39 = (-(min((1507149307949049ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)31)), (4777041533282788173LL)))))));
                    }
                }
                var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(-8128085016137203590LL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))) : (8128085016137203589LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (-1440776483) : (((/* implicit */int) arr_44 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]))))))) ^ (((/* implicit */long long int) min((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 4035225266123964416ULL))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_3])) : (4192256))))))));
                arr_47 [i_0] [i_2] [i_3 - 2] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3042954260U)) > (14741599228169333173ULL))))) != (max((var_13), (((/* implicit */long long int) (unsigned char)128))))))), (((long long int) max((((/* implicit */short) (unsigned char)187)), ((short)5605))))));
            }
            arr_48 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_29 [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 - 3])))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) || (((((/* implicit */_Bool) arr_0 [8LL])) || (((/* implicit */_Bool) var_5)))))))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_41 = arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_15];
            var_42 = min((((/* implicit */unsigned long long int) arr_11 [8ULL])), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) ^ (arr_37 [i_0] [i_0] [i_0] [i_15 - 1] [i_15 - 1] [i_0]))) << (((max((arr_29 [i_0] [i_0] [i_15 - 1] [i_15] [i_15 - 1]), (arr_37 [i_0] [4U] [i_15] [i_15] [i_15] [i_0 + 1]))) - (11976769786622849811ULL))))));
        }
        arr_51 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_52 [i_0] = ((/* implicit */_Bool) (-(14741599228169333178ULL)));
    }
    var_43 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_10))), (((-4192257) * (((/* implicit */int) (unsigned short)20))))))) <= (((((/* implicit */unsigned long long int) var_11)) & (max((var_9), (arr_29 [i_16 + 3] [i_16] [(_Bool)1] [i_16] [i_16 + 2]))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 1; i_17 < 16; i_17 += 4) 
        {
            arr_58 [i_16] = ((/* implicit */short) arr_25 [i_16] [12ULL]);
            arr_59 [i_16] = ((/* implicit */short) min(((-(((/* implicit */int) arr_12 [i_16 + 1] [i_16 + 1] [i_17 + 1] [i_17 + 1] [i_17] [i_17])))), (((((/* implicit */int) (unsigned short)20)) >> (((((/* implicit */int) var_8)) - (18122)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 3; i_18 < 16; i_18 += 4) 
            {
                var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) var_11))));
                arr_62 [i_16] [16LL] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */unsigned long long int) 22LL)) : (9223372036821221376ULL)));
                var_46 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_49 [i_16] [i_16 + 1])) > (((/* implicit */int) arr_49 [i_16 + 2] [i_16 + 2])))) && (((/* implicit */_Bool) min((1LL), (((/* implicit */long long int) (unsigned char)232)))))));
            }
        }
    }
    for (unsigned char i_19 = 1; i_19 < 15; i_19 += 4) /* same iter space */
    {
        arr_67 [i_19] [i_19] = ((/* implicit */unsigned char) (-((~(min((768U), (((/* implicit */unsigned int) (unsigned short)23989))))))));
        arr_68 [i_19] [i_19 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_65 [i_19] [i_19 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_19] [i_19 + 2] [i_19 + 2] [i_19 + 2]))))) : ((~(((/* implicit */int) (unsigned short)20038))))))));
    }
}
