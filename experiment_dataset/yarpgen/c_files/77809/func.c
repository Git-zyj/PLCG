/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77809
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
    var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_9)) + (9223369837831520256ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9223374235878031359ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (var_8) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) - (max((((/* implicit */unsigned long long int) (unsigned short)63366)), (9223374235878031359ULL))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)22867)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((9223369837831520256ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 1016804636U)) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (-1))) : (((/* implicit */int) var_6)))))))));
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
}
