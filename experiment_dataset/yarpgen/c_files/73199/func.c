/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73199
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
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) & (1002733532U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 1433722439U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)5] [i_1] [i_0] [(signed char)6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2] [i_0] [i_4 + 1])) ? ((~(((((var_12) + (9223372036854775807LL))) << (((1092093027) - (1092093027))))))) : (((/* implicit */long long int) (+(((/* implicit */int) max((arr_9 [i_0] [i_1] [i_0] [i_0]), (arr_9 [i_0] [i_1] [i_2] [(signed char)6])))))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */int) (-(max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_0] [i_0] [i_0]))) == (9223372036854775807LL)))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_2])) ? (-9039045227208842898LL) : (((/* implicit */long long int) 31))))))));
                                var_16 |= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4])), ((+(arr_8 [i_0] [i_1] [i_1] [12U] [i_4] [(signed char)4])))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0 - 3] [i_0] [i_0]), (arr_6 [i_0] [i_0 - 3] [i_0] [i_4 + 2])))) ? (((min((((/* implicit */int) var_4)), (-24))) ^ (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1023)) ? (-257323414) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3]))))) ? (((/* implicit */int) min((arr_13 [i_0] [i_1]), (((/* implicit */unsigned short) var_1))))) : (((((((/* implicit */int) (signed char)-59)) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [(unsigned char)3])) - (37572)))))))));
                                arr_16 [i_1] [i_1] [i_3] [i_0] = ((/* implicit */short) (+(((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_13 [i_0] [(unsigned char)2])))) - ((+(((/* implicit */int) arr_12 [i_4] [(unsigned char)12] [i_3] [i_2] [5LL] [i_1] [(unsigned char)7]))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) arr_9 [i_0] [i_0] [11ULL] [i_0]);
                var_19 &= ((/* implicit */signed char) var_12);
            }
        } 
    } 
}
