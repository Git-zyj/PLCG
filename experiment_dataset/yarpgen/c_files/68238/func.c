/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68238
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((6501622047297943287LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55536)))))))) ? (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) -1246515467))))) : (max((((/* implicit */long long int) var_9)), (-6301408736094406454LL))))) : (((/* implicit */long long int) ((unsigned int) var_3)))));
    var_14 = ((/* implicit */long long int) (-(max(((-(((/* implicit */int) var_8)))), (1246515467)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = (signed char)112;
                arr_5 [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-982433153)))))) ? (((max((arr_1 [i_1] [i_0]), (((/* implicit */unsigned long long int) 1246515448)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1246515452)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42580))));
            }
        } 
    } 
}
