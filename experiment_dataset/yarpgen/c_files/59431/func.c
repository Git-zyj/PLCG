/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59431
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
    var_20 = ((8589934591LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1841602044U)), (var_8)))) ? (((1841602042U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)26078))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (2453365254U)))))));
    var_21 = max((((((/* implicit */_Bool) 2453365254U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62951))) < (3967945196626898293LL))))) : (((long long int) var_2)))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)20965)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (unsigned short)2585))))));
                var_23 ^= ((/* implicit */short) max((((/* implicit */long long int) min((max((((/* implicit */short) arr_3 [i_0] [(short)17])), (arr_4 [i_0] [i_0] [i_1 + 1]))), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))), (((((((/* implicit */_Bool) 34091302912LL)) || (((/* implicit */_Bool) arr_2 [i_0] [22LL])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned short) (short)26058)))))) : (((((/* implicit */_Bool) 2453365263U)) ? (140737488355324LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))))));
                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
}
