/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97321
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)16)) ? (((((/* implicit */_Bool) -4547443403333605531LL)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_8 [i_2] [(unsigned short)12] [i_2] [(unsigned short)12]))));
                        var_18 |= ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
                        var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (unsigned char)0)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))) : (((arr_7 [i_3] [i_2] [i_1 - 1] [14ULL]) ? (5184198236416965758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (3260142656U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))) : (((unsigned int) var_14)))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (-(((1542955340) / (((/* implicit */int) (unsigned short)65535))))));
                        arr_12 [i_2] &= ((/* implicit */unsigned short) var_8);
                    }
                    for (signed char i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0 - 2] [i_1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_5))))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51824))) : (arr_6 [i_0] [i_0 + 2] [i_2] [i_0])))))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_5 + 2] [i_5 + 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_1] [i_2] [i_6]))));
                            var_21 = ((/* implicit */unsigned int) 1152921367167893504ULL);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [13ULL] [i_5 - 3] [i_2] [(signed char)14]))))) : (max((20ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) var_2)))), ((+(((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) ((575527214) + (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) 17293822706541658111ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_15))))))))));
                            var_23 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)50894)) >> (((arr_19 [i_1 - 1] [i_1]) - (1205484593U))))), (((/* implicit */int) ((short) var_14)))))) ? ((((((~(((/* implicit */int) (signed char)22)))) + (2147483647))) >> (((((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])))) - (5223))))) : ((+((-(((/* implicit */int) (signed char)-17))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)50894)) >> (((arr_19 [i_1 - 1] [i_1]) - (1205484593U))))), (((/* implicit */int) ((short) var_14)))))) ? ((((((~(((/* implicit */int) (signed char)22)))) + (2147483647))) >> (((((((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])))) - (5223))) - (6064))))) : ((+((-(((/* implicit */int) (signed char)-17)))))))));
                        }
                        var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((arr_4 [i_0] [i_2]) | (arr_13 [i_2] [i_2] [i_2] [i_5])))))) ? (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) == (8539945779413364986ULL))), (max(((_Bool)1), (arr_0 [i_2])))))) : (((/* implicit */int) var_7))));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_26 [i_0 + 2] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_5]);
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((/* implicit */short) (signed char)-9)), (((short) arr_9 [i_0 - 2] [i_1 - 1] [i_5 + 2] [i_5 + 1])))))));
                            var_26 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            arr_27 [i_2] [i_1 + 1] [i_5 - 1] [i_2] [(unsigned short)14] [i_1 + 1] [i_2] |= ((/* implicit */unsigned short) (((-(((((/* implicit */unsigned long long int) var_11)) * (arr_6 [i_8] [i_2] [i_2] [(short)6]))))) * (max((4ULL), (((/* implicit */unsigned long long int) 2147483647))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_0] [i_0] [i_2] [10U] [i_9] [i_0] = arr_25 [i_1] [i_2] [i_9];
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27562))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : ((~(arr_4 [i_0] [i_0])))));
                        }
                        var_28 = 16777216U;
                    }
                    arr_31 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [i_0 - 2] [i_0 - 2])) / ((((_Bool)1) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_7 [i_0 - 3] [i_1 - 1] [i_2] [i_1 - 1]))))));
                    arr_32 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)65))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_15)))) ? (((((/* implicit */_Bool) (short)24465)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_15))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))) : (((/* implicit */long long int) arr_19 [i_1] [i_0]))));
                    arr_33 [i_0] [i_1] [i_0] [i_2] &= ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)0)), (((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 729974856U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_19 [i_0 + 2] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_23 [(short)14] [i_1] [i_2])) : (((/* implicit */int) (signed char)-61))))) ? (max((((/* implicit */long long int) var_6)), (arr_24 [i_0] [i_0 - 1] [i_1] [i_1] [i_0] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [4U] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (max((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_2))))))));
    var_30 = ((/* implicit */unsigned char) var_14);
}
