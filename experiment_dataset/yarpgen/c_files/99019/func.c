/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99019
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), ((((((-(((/* implicit */int) (unsigned short)16677)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max(((unsigned short)16678), ((unsigned short)48858)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16677))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)68)) << (((((/* implicit */int) (signed char)68)) - (59)))))) || (((/* implicit */_Bool) (signed char)72)))))));
                arr_4 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */int) (signed char)53)) >= (((/* implicit */int) var_0)))) ? (((unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16677))) - (arr_1 [i_0 + 2]))))));
            }
        } 
    } 
}
