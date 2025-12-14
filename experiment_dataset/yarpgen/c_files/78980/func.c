/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78980
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1859783931)) ? (1859783931) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))))) : (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) (~(var_2)))) ? (arr_0 [i_1] [i_0]) : ((-(((/* implicit */int) (unsigned char)111)))))))))));
                arr_7 [i_1] = ((((/* implicit */_Bool) (+(-668006008)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)384)) ? (arr_5 [i_1] [i_1]) : (1554736025)))) ? ((-(-1859783931))) : ((+(((/* implicit */int) (unsigned short)65530)))))) : (arr_5 [i_0] [i_0]));
            }
        } 
    } 
}
