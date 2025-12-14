/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90927
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
    var_15 = ((/* implicit */unsigned int) ((var_8) ^ (var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)64585), (((/* implicit */unsigned short) (signed char)127))))) == (arr_1 [4LL]))))) != (((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((-(((/* implicit */int) arr_3 [i_0])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) == (arr_1 [i_0]))))))) || (((((/* implicit */long long int) max((arr_1 [i_0]), (var_3)))) != (((var_9) % (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
            }
        } 
    } 
}
