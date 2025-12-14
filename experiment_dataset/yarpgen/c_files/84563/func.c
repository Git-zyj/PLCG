/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84563
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */_Bool) ((unsigned int) 6827983389811857602LL));
        var_17 = ((/* implicit */int) ((((long long int) ((unsigned short) var_8))) / (min(((-(-3300700935792086839LL))), (((/* implicit */long long int) arr_1 [i_0]))))));
        var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (var_7) : (((((/* implicit */_Bool) min((3300700935792086819LL), (((/* implicit */long long int) (unsigned short)52551))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_0 [(unsigned short)9]) : (arr_0 [(unsigned char)13]))) : (((/* implicit */int) arr_1 [15U])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)49)) : (((int) arr_2 [i_2] [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) arr_6 [(_Bool)1] [i_2]);
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) | (arr_0 [i_0])))) : (max((arr_4 [i_0] [i_0]), (-3300700935792086838LL))))) + (19LL)))));
    }
    var_22 &= ((/* implicit */unsigned long long int) (unsigned short)62063);
    var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (var_7))))))) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_14))))) ? (((var_8) >> (((((/* implicit */int) var_5)) - (61958))))) : (((unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
