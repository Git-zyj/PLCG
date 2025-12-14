/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6821
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
    var_12 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) -1689289121)) || (((/* implicit */_Bool) (signed char)-24)))) ? (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-10)))) : (((/* implicit */int) ((var_3) >= (var_1)))))) < (((int) max((var_4), (((/* implicit */int) (short)8771)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) | (max((((/* implicit */long long int) var_0)), (2LL)))))) ? (((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (1323030379) : (((/* implicit */int) (unsigned short)2384)))))) : (((((/* implicit */unsigned long long int) var_4)) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [17LL]))))))) << (((((/* implicit */int) ((unsigned short) (+(arr_0 [i_3]))))) - (5126)))));
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (-469126115377268630LL)));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */int) (unsigned char)135);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14ULL))));
            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_0] [i_0]))) : (var_9))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) (signed char)-114))))));
        }
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-10))))) ? (((((/* implicit */_Bool) -2111782382)) ? (((/* implicit */int) arr_4 [2LL] [i_5] [16])) : (((/* implicit */int) (short)18249)))) : (((/* implicit */int) arr_4 [(signed char)0] [(signed char)16] [(signed char)0]))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [10LL] [i_5] [i_5] [i_5]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-15)), ((unsigned char)0))))));
        arr_14 [i_5] = ((/* implicit */unsigned char) min((arr_3 [i_5]), (((/* implicit */short) ((((/* implicit */int) (unsigned char)61)) < (((int) arr_6 [i_5] [i_5] [i_5] [i_5])))))));
        arr_15 [7ULL] = ((/* implicit */int) arr_6 [(signed char)16] [i_5] [(short)15] [(signed char)16]);
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))), (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
