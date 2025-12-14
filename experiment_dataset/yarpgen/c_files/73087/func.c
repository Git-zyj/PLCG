/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73087
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
    var_17 = ((/* implicit */short) 24576);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) max((((((((/* implicit */int) var_13)) * (((/* implicit */int) arr_2 [9ULL])))) != (((((/* implicit */int) (short)5412)) | (((/* implicit */int) (short)-21663)))))), ((!(((-1082544204) > (((/* implicit */int) (unsigned char)30))))))));
                    var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) var_11)) : (arr_4 [i_0] [i_2])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [(signed char)5])) : (((/* implicit */int) (unsigned char)133)))) : (((/* implicit */int) var_4)))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)139)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) -24560)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned short)65535)))))))));
                    arr_8 [i_0 + 1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 13876113007953245719ULL)) ? (511ULL) : (((/* implicit */unsigned long long int) 24585)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-4)), (arr_6 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [6LL])) ? (((/* implicit */unsigned int) 24560)) : (var_7)))))))) : (((((/* implicit */_Bool) ((-1082544205) % (((/* implicit */int) (unsigned short)16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4318976360244201886ULL)) ? (arr_5 [i_0] [(_Bool)1] [i_2 - 1] [i_2]) : (((/* implicit */int) var_12))))) : (max((13876113007953245711ULL), (((/* implicit */unsigned long long int) -24560))))))));
                    var_20 += ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), ((((_Bool)1) ? (((/* implicit */long long int) arr_5 [(_Bool)0] [(_Bool)0] [i_0] [1LL])) : (arr_1 [i_0 - 1])))));
                }
            } 
        } 
    } 
}
