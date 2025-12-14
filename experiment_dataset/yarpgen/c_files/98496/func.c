/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98496
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
    var_16 = ((/* implicit */signed char) min((var_9), (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8668315693158785593ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (max((((((/* implicit */_Bool) 8668315693158785592ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (525061250813445501ULL))), (((((/* implicit */_Bool) var_8)) ? (8668315693158785593ULL) : (8668315693158785593ULL)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((arr_4 [i_0] [i_2 - 1] [i_2 + 2] [(signed char)8]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))) ? (((/* implicit */int) max(((signed char)-82), ((signed char)7)))) : (((((/* implicit */int) (unsigned char)58)) * (((/* implicit */int) (signed char)7))))));
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(249643367)))) <= (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) + (17357147789383703161ULL))), (((/* implicit */unsigned long long int) (unsigned char)54))))));
                    arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */signed char) ((unsigned char) 5884700637744961828ULL));
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_6 [(signed char)13] [i_1] [i_1]);
                    var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (arr_3 [16ULL] [(signed char)2] [i_2 + 1]))))) : (arr_4 [i_0] [i_0] [i_2 - 1] [i_1]))), (((((/* implicit */_Bool) min((1089596284325848454ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [(_Bool)1]))) : (max((arr_5 [i_0] [i_1] [i_2 + 1]), (((/* implicit */unsigned long long int) (signed char)41))))))));
                }
            } 
        } 
    } 
}
