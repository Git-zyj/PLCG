/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63306
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19606)) & (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45929)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45912))) : (arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))) : ((+(((/* implicit */int) (unsigned short)45933))))));
        arr_3 [i_0] = ((/* implicit */short) ((long long int) arr_1 [i_0]));
        arr_4 [4LL] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (var_4))), (((/* implicit */unsigned long long int) var_12))))) ? (min((((arr_1 [i_0]) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32811))))), (((/* implicit */unsigned long long int) (signed char)108)))) : (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << ((((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19587))))) - (1360465282U)))))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_12)))) : (((((((/* implicit */_Bool) (unsigned short)45910)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))) % (var_5)))));
}
