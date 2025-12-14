/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64080
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
    for (signed char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32742)) & (((/* implicit */int) arr_2 [i_0 + 4]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) & (var_3)))))) ? (min((min((var_5), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))), (min((var_7), (var_3))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_2))))), (((4294967289U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                var_11 = ((/* implicit */unsigned int) ((((unsigned long long int) var_5)) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2873958508U))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (0ULL)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_0);
}
