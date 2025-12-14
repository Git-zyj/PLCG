/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70031
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
    var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19223)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) : (-5884611412992789283LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 19U))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)45))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((+(arr_9 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0])))))) : (((((/* implicit */_Bool) 0U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_2] [i_0] [i_1 + 2] [i_2] [i_2] [i_3]))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [6LL])))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2] [i_1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_3])))))))));
                        var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)2)))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1 + 3] [15LL] [i_3] [i_1] = ((((/* implicit */_Bool) (+(-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (72057525318451200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16760832)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 0U))))) ? (((((/* implicit */_Bool) arr_6 [i_4])) ? (-5257086743162700127LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))))));
                        }
                        for (short i_5 = 3; i_5 < 15; i_5 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)36))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-5)))))))));
                            arr_21 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16382)) ? (268433408) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)127))) : (arr_12 [i_5] [i_0] [i_2] [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((+(var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-50))))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1890610730U) : (10U))))));
                            var_17 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_3] [i_3])) ? (929203560U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(10935119501863564753ULL))))))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -2060744266800394833LL)))) ? (((((/* implicit */_Bool) arr_29 [i_2] [i_1] [i_2] [i_7] [i_7] [i_7] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (short)5968)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)64))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_8]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : ((+(arr_25 [i_0] [(unsigned char)13]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535)))))));
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2]))))) ? ((-(((/* implicit */int) var_9)))) : ((-(var_2)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (722811952U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))) : ((+(((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) 2147483647))))))));
                        }
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)508)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3043851295U)))))) : (1337460862U)))) ? (1ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (unsigned short)63792)) : (((/* implicit */int) (unsigned char)192))))) ? (1430815157U) : (3365763738U)))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_21 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [7LL]))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (67108863LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2] [i_2]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)3)))))));
                            arr_37 [i_0 + 2] [(short)10] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (929203560U) : (0U)))) ? (((var_4) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((((_Bool)1) ? (arr_16 [i_10] [i_1] [i_2] [i_2] [i_1] [6ULL] [i_0]) : (1430815143U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_33 [i_0] [i_10] [i_9] [2] [(unsigned short)2] [i_0])))))));
                            arr_38 [(unsigned short)8] [i_9] [i_2] [i_0] [i_2] [(unsigned short)8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [14LL] [14LL] [i_2] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_11 [i_10] [i_9] [i_1 + 3] [i_1 + 3] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 1756900792U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23825))) : (11714721439674092696ULL)))));
                        }
                        arr_39 [i_0] [i_9] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((+((-2147483647 - 1))))));
                    }
                    arr_40 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (2864152138U) : (4294967274U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) : ((-(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])) ? (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_36 [i_0 + 3] [i_1 + 3] [i_1] [i_1 + 3] [i_2]))))))));
                }
            } 
        } 
    } 
}
