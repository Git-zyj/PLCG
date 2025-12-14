/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94207
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) (~(var_8)))))));
                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) != (18446744073709551599ULL))) ? (((/* implicit */int) ((18446744073709551599ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL] [i_0])))))) : (min((var_3), (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 6; i_3 += 3) 
        {
            {
                arr_10 [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32761)) ? (arr_0 [i_2] [i_3 + 4]) : (arr_0 [i_3] [i_3 + 1])))) ? (arr_0 [i_3] [i_3 + 2]) : (min((arr_0 [(unsigned char)9] [i_3 + 1]), (arr_0 [i_2] [i_3 + 3])))));
                var_14 = ((((((/* implicit */int) var_1)) / (((/* implicit */int) min((var_9), ((unsigned short)5496)))))) | (((/* implicit */int) arr_6 [i_2] [i_3 + 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((unsigned long long int) (+((~(var_5)))));
                            var_16 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3])) ? (arr_11 [i_3 + 2] [i_3 + 1] [(short)8] [i_3]) : (arr_11 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((unsigned char) arr_3 [i_2]))))))));
                            /* LoopSeq 2 */
                            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-12))))) ? ((~(arr_11 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) (~(var_8))))))) ? (((/* implicit */int) (signed char)42)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) var_0))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_2] [(unsigned char)0] [2U]))))))));
                                var_18 -= min((2270433253739588196ULL), (((/* implicit */unsigned long long int) (signed char)9)));
                                arr_17 [i_3] [i_3] [i_3] [i_3] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)5)) % (((/* implicit */int) (signed char)10))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_19 = ((17994899068042510190ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))) & (((unsigned long long int) var_6)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */int) (_Bool)1);
}
