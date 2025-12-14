/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8847
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)65535));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [9ULL] = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)65518)))) + ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (unsigned char)94))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]), (arr_9 [i_4] [i_1] [i_2] [i_1] [i_2])))) ? (((((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (short)-15196)) : (((/* implicit */int) (unsigned char)101)))) + (((/* implicit */int) ((short) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)0])) ? (((/* implicit */unsigned long long int) 2449222104U)) : ((+(arr_10 [i_0] [i_4 - 3] [i_2] [i_4] [0U])))));
                            arr_13 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4]))) ? (((((/* implicit */_Bool) min((arr_11 [i_0] [i_4] [i_2] [i_2]), (((/* implicit */short) arr_0 [i_4] [i_2]))))) ? (((((/* implicit */int) (unsigned char)180)) + (((/* implicit */int) (signed char)-76)))) : (((/* implicit */int) (short)32765)))) : (((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) arr_4 [i_4 - 2] [i_0]))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_4 + 1] [i_0] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (arr_9 [i_0] [i_2] [i_4 + 1] [i_3] [i_4])))) ? (max((((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4 - 2])), (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_2]);
                            arr_17 [i_0] [i_3] [i_2] [i_5] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(short)8] [i_0] [(unsigned char)5]))) != (arr_9 [i_5] [i_3] [i_2] [i_1] [i_5])));
                            arr_18 [i_5] [i_5] [i_2] [i_3] [i_5] [i_0] = ((/* implicit */int) ((var_17) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) - (23727)))));
                            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (unsigned char)231)))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_0 [i_6] [i_2])) & (((/* implicit */int) arr_0 [i_1] [i_6])))));
                            arr_21 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) 7U))), (((((/* implicit */_Bool) arr_16 [i_3] [i_0] [i_0])) ? (arr_16 [i_2] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_3])))));
                            var_26 = ((/* implicit */short) (unsigned short)8);
                        }
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_2] [i_3] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_20 [i_0] [i_0] [i_0] [0ULL] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? ((+(arr_20 [2LL] [i_2] [i_2] [i_2] [2LL] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))));
                    }
                    arr_22 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0])))) != (((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) var_14)))) != (((/* implicit */unsigned long long int) var_5)))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) ((var_10) + (((var_1) / (((/* implicit */unsigned long long int) var_5))))))))));
}
