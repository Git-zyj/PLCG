/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8484
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)108)), ((unsigned char)211))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (18446744073709551610ULL))))) != (((3ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)62))))))))));
    var_18 = ((/* implicit */unsigned char) 3ULL);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [9U] [9U])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_1] [(short)0] [(short)0] [4] [i_4] [i_2 - 1] [i_0]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [(signed char)2] [i_2 + 2] [i_2 + 1]) : (arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2] [(unsigned short)6] [i_2 + 2] [i_2 + 1])));
                            var_22 *= ((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)0] [i_2 + 1] [i_2])) == (((/* implicit */int) arr_3 [i_0] [i_2 + 2] [(unsigned char)14]))));
                            var_23 = ((/* implicit */int) ((long long int) arr_6 [i_1] [i_2 - 1] [i_2 + 2]));
                        }
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_24 |= ((/* implicit */short) min((((/* implicit */int) max(((unsigned char)16), (((/* implicit */unsigned char) var_13))))), (((int) arr_5 [1] [i_2 + 2] [1] [1]))));
                            var_25 = ((/* implicit */unsigned long long int) min((((int) (unsigned char)162)), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 1])) >= ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_5] [i_2 + 1] [i_2 + 1])))))))));
                        }
                        var_26 = ((/* implicit */int) max((arr_12 [i_0] [6ULL] [i_1] [i_2 - 1] [14U]), (((/* implicit */unsigned short) arr_1 [(short)11]))));
                    }
                    arr_14 [i_0] [i_2 + 2] [i_1] [i_2 + 2] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2 + 1] [7] [i_2 + 1])) ? (arr_10 [(unsigned short)5] [i_2] [i_2 - 1] [(short)5] [i_2 + 1]) : (arr_10 [i_1] [i_1] [i_2 + 1] [(unsigned short)6] [i_2 - 1])))));
                    var_27 = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) ((unsigned int) (unsigned short)22072)))), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [(_Bool)1])), (var_14)))) - (((/* implicit */int) (unsigned char)189))))));
                }
            } 
        } 
    } 
    var_28 += ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_5)), (min((var_8), (((/* implicit */unsigned int) var_14)))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_29 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_16))))))) - (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_9)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (9ULL)))))));
}
