/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56112
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
    var_15 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = var_5;
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12427874875852605147ULL)) ? (7333105551443137277LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)3)) : (var_5))) : (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned char) var_2)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (-6186498678870211905LL)))) ? (var_11) : (((/* implicit */int) ((signed char) (signed char)-29)))))) : (min(((~(427564854U))), (arr_1 [i_2])))));
                    var_16 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)29)) * (((/* implicit */int) arr_3 [i_0])))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((2416397877U), (((/* implicit */unsigned int) var_3))))) ? (((var_11) >> (((var_14) - (372824700451037472ULL))))) : (((((/* implicit */_Bool) -6186498678870211908LL)) ? (var_0) : (565676787)))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((arr_5 [(short)3] [i_2] [i_2]) ? (min((((/* implicit */unsigned long long int) 7182354898226140365LL)), (8228672928178425196ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1902713925)) ? (2305825417027649536LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))) ? (min((min((((/* implicit */unsigned long long int) 2087117431)), (var_7))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -6186498678870211903LL)) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_11) ^ (((/* implicit */int) var_9)))) != (((/* implicit */int) var_8))))))));
    var_18 &= ((/* implicit */_Bool) var_10);
    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((var_7) >> (((12663030125177511573ULL) - (12663030125177511571ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (var_3)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) % (((((/* implicit */_Bool) 2305825417027649536LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
