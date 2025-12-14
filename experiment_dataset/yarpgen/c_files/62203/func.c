/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62203
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4492891912499853951ULL)) ? (8053063680LL) : (((/* implicit */long long int) 972418131)))))));
                var_17 = ((/* implicit */int) min((((((/* implicit */long long int) 7168)) / (-6596029475917031871LL))), (min((6596029475917031848LL), (6596029475917031848LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_0))))) | (min((var_3), (((/* implicit */unsigned long long int) var_7)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_6))))) ? ((~(var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)255))))))))));
}
