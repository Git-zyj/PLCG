/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98930
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)14772))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [2LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) 6163966109138460515ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 2])), (var_9))))) : (min((((/* implicit */long long int) arr_0 [i_0 + 3])), (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned short)14779))))) > (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-126)), ((unsigned short)53371))))))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14757)) && (((/* implicit */_Bool) -2940957268883028988LL)))))));
                            arr_16 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */int) (signed char)(-127 - 1))))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [10ULL] [i_4])) || (arr_14 [i_2] [i_1 + 2] [i_0 - 2] [i_2 - 1] [i_4]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) <= (((-6214793870191493849LL) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            var_14 = ((((((arr_8 [i_3] [i_3]) + (9223372036854775807LL))) << (((((var_6) + (391810863))) - (54))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50778))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                            arr_20 [i_2] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (11881443575807609040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)20] [i_1] [i_2]))) < (var_4)))))));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min(((unsigned short)50778), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)50795))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), ((unsigned short)1944)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_6] [9LL] [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [1LL] [i_1] [15ULL] [(unsigned char)16] [13U]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14779)))))) : (arr_8 [i_0 + 2] [i_2 - 1]))));
                                var_16 ^= ((/* implicit */signed char) min((((((/* implicit */int) arr_22 [i_6 - 1] [i_1] [i_2] [i_6] [(signed char)22])) | (((/* implicit */int) arr_22 [i_6 - 1] [i_1] [(short)18] [i_6] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                arr_28 [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL))) ? (var_6) : (((/* implicit */int) (unsigned short)52361))))));
                                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0 - 1] [i_2 - 1] [i_7] [i_7])) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) -2210412888535761798LL)) ? (1308302089) : (((/* implicit */int) (signed char)-71))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-14686)) : (((/* implicit */int) (unsigned short)14772))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)20181))) : (var_8)))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((562949416550400ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6 - 1] [i_2 - 1])) ? (max((((/* implicit */int) (unsigned short)124)), (-496447874))) : (((/* implicit */int) arr_14 [i_7] [i_6 + 1] [i_2 - 1] [i_0 - 1] [i_0]))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) -766784596))));
                }
            } 
        } 
    }
}
