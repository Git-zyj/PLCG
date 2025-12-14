/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63227
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
    var_10 |= ((/* implicit */short) (~(var_6)));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_3)))) : (((/* implicit */int) ((short) var_2)))))) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)89)))) & (((/* implicit */int) (unsigned short)31302))))) : (var_3)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) var_4);
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))))))));
            }
        } 
    } 
}
