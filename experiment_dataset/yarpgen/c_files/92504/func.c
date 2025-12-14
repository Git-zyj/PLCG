/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92504
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)2144))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)7610))) < (((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) ^ (-5008186781389081138LL)))))), (5008186781389081131LL)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_1 [(unsigned short)10] [i_0]))))) * (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))));
        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [4U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [4U])) < (((/* implicit */int) arr_0 [(short)6])))))) : (max((((/* implicit */unsigned long long int) arr_0 [(unsigned short)2])), (7519484084627394757ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_23 *= ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_17)))) ? (((unsigned int) ((((/* implicit */int) (unsigned char)75)) ^ (arr_6 [6U] [i_1] [6U] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)6])) <= (var_16))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)35898))));
                        arr_10 [i_0] [i_1] [i_1] [(signed char)10] [i_2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) 1954947973)) : (536854528U)))) ? (((((/* implicit */_Bool) var_19)) ? (arr_9 [8ULL] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */short) ((((arr_5 [i_0]) <= (arr_5 [i_0]))) ? (((/* implicit */int) ((arr_5 [i_0]) < (((/* implicit */int) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
                        arr_15 [9LL] [i_0] [i_0] [i_1] [i_2] [2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(arr_7 [i_4] [i_2])))), ((-(arr_14 [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (0LL)))) ? (((((/* implicit */_Bool) 3062866815U)) ? (10927259989082156872ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_2]))))))));
                        var_26 ^= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) max((-7192319967427709505LL), (((/* implicit */long long int) (unsigned char)0))))), (10927259989082156858ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) 10927259989082156872ULL)) ? (-701639082526482974LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7594))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0])) : (arr_6 [i_4] [(unsigned short)6] [i_4] [i_0])))))))));
                        var_27 *= 7424794758927750150ULL;
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) ((arr_18 [i_2] [i_2] [6ULL] [6ULL] [10] [i_0]) ? (var_13) : (((/* implicit */int) var_11))))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_29 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_5 - 2] [i_5 + 1] [i_5] [6LL] [i_5 - 2] [(_Bool)1]))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) -5008186781389081130LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65360))) : (14280406921538762717ULL))) < (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_6])))))))));
                            var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)4])) ? (((((/* implicit */_Bool) 3276823426U)) ? (1727358958U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-5))))))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)16384))));
                            arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_7)))))) <= (arr_20 [4ULL] [i_5 - 1] [3U] [i_5] [i_2])));
                        }
                        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_18)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) arr_18 [i_5 + 1] [4ULL] [0ULL] [0ULL] [6] [i_0])) : (((/* implicit */int) var_6))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33649))) ^ (1654067466U)))));
                        var_34 |= ((/* implicit */short) arr_0 [(unsigned short)10]);
                    }
                }
            } 
        } 
        arr_23 [i_0] [i_0] = max(((((!(((/* implicit */_Bool) (short)5069)))) ? (((((/* implicit */_Bool) 2568628207545473671LL)) ? (4166337152170788880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55899))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned long long int) var_14);
        var_35 = ((/* implicit */unsigned char) min((var_35), (arr_1 [10] [(unsigned short)5])));
        arr_27 [i_7] = ((/* implicit */signed char) (+(2567608340U)));
        var_36 += min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)4096)), (2567608340U)))) + ((~(839549674893300421ULL))))), (((/* implicit */unsigned long long int) (+(max((arr_12 [i_7] [(_Bool)1] [(_Bool)1] [i_7]), (((/* implicit */unsigned int) arr_0 [(_Bool)0]))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 2; i_9 < 18; i_9 += 3) 
        {
            arr_34 [i_8] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 17607194398816251202ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22566))) : (-7045692914585043664LL)))));
            arr_35 [i_9] [i_9 - 1] [i_8] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_9] [i_8]))));
            arr_36 [i_8] [i_9] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((0LL) << (((17607194398816251219ULL) - (17607194398816251204ULL)))))) : (((((/* implicit */_Bool) 17607194398816251217ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8]))) : (17533772259779075371ULL)))));
            arr_37 [i_8] [i_9 - 1] &= ((/* implicit */unsigned char) ((var_13) / (((((/* implicit */_Bool) 839549674893300421ULL)) ? (((/* implicit */int) (short)-10762)) : (((/* implicit */int) (unsigned short)58227))))));
        }
        arr_38 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -39139229))) ? (((/* implicit */long long int) (+(39139240)))) : ((~(arr_33 [i_8] [i_8] [i_8])))))) ? (((((/* implicit */_Bool) (~(arr_33 [i_8] [i_8] [(short)20])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_33 [i_8] [i_8] [i_8]) : (arr_31 [i_8] [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [(unsigned char)2])))));
    }
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (int i_11 = 2; i_11 < 13; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_44 [i_10] [i_11 - 1] [i_12])))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 12; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_38 ^= ((/* implicit */long long int) var_9);
                                arr_50 [i_10] [i_12] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 1056687498))) ? (((((/* implicit */_Bool) 0)) ? (var_16) : (((/* implicit */int) (signed char)-15)))) : (((((/* implicit */_Bool) arr_47 [i_10] [i_10] [9U] [i_12] [i_12] [i_13] [i_14])) ? (((/* implicit */int) var_2)) : (490787602)))))) ? (((((unsigned long long int) (signed char)15)) * (((/* implicit */unsigned long long int) arr_31 [i_10] [9ULL])))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16368))) : (17607194398816251215ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)52015)), (1056687498))))))));
                                arr_51 [0LL] &= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)15745));
                                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_49 [i_14] [i_13 + 1] [i_13 - 2] [(unsigned short)1] [11LL] [(unsigned short)1])), (17607194398816251210ULL)))) ? ((+(arr_49 [2U] [2U] [i_13 - 2] [12ULL] [i_13 - 3] [i_13]))) : (arr_49 [i_12] [i_11 + 1] [i_12] [i_12] [i_14] [i_11 + 1])));
                                var_40 *= ((/* implicit */unsigned int) min((((unsigned long long int) (signed char)19)), (((/* implicit */unsigned long long int) ((((arr_33 [i_10] [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10]))))) < (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (short)-7484))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
