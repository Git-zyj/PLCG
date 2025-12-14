/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67363
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2800521566U) << (((82245013868438014LL) - (82245013868437999LL)))))) ? (((/* implicit */int) arr_7 [i_1] [i_2 - 2] [i_2 + 1])) : ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (var_3) : (((((/* implicit */_Bool) ((9223372036586340352ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_6 [i_0]))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)1024)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_8))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-93))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_8 [i_2 + 1] [i_0] [i_2 - 1] [i_2 - 1])))));
                    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [2LL])))) : ((-(((/* implicit */int) (unsigned char)0))))))) : (arr_8 [i_2] [12LL] [12LL] [i_2 - 2])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (min((((/* implicit */long long int) var_2)), (var_6)))))));
    var_17 = ((/* implicit */unsigned int) max((((unsigned long long int) min((var_1), (((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60020)))))))));
    var_18 = ((/* implicit */int) var_5);
}
