/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65853
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (max((36028797018963968LL), (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26589))) : (36028797018963946LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((-36028797018963969LL), (((/* implicit */long long int) arr_2 [i_1] [4]))))) ? (((/* implicit */int) max(((short)7936), ((short)-7927)))) : (((/* implicit */int) var_3)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) var_0)))) < (((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_12))))))));
                var_15 = ((/* implicit */short) ((((arr_4 [i_0] [i_0]) != (arr_4 [i_0] [i_0]))) ? (((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) arr_3 [(short)7] [i_0])) - (26))))) : (var_2)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((var_2), (((/* implicit */int) var_0))))), (var_7))), (((/* implicit */long long int) max((((/* implicit */short) ((_Bool) -36028797018963952LL))), (max(((short)25568), (((/* implicit */short) (signed char)125)))))))));
    var_17 = ((/* implicit */_Bool) (short)-7918);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_9)));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((((((/* implicit */long long int) ((int) (_Bool)0))) & (((((/* implicit */_Bool) 733430141)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14))) : (9223372036854775807LL))))) ^ ((((~(arr_4 [(short)8] [(signed char)2]))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((short)19), (((/* implicit */short) var_12))))))))))));
                            arr_18 [i_2] [i_3] [i_4] [4] = ((/* implicit */_Bool) 29ULL);
                        }
                    } 
                } 
                arr_19 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) == (min((min((((/* implicit */unsigned long long int) 36028797018963960LL)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1563217171U)) ? (65011712U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7928))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (1865080850) : (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)237)), ((-2147483647 - 1)))))))))));
}
