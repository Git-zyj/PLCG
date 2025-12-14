/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75351
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) >> (((((/* implicit */int) var_13)) - (24988)))))) ? (((/* implicit */int) (short)-4236)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((2755767908U) << (((/* implicit */int) ((((/* implicit */int) var_10)) <= (-1)))))) : (((((((/* implicit */_Bool) 1539199388U)) ? (2755767908U) : (arr_6 [i_0] [i_0]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((unsigned int) arr_1 [i_0] [i_1])) > (((/* implicit */unsigned int) (+(arr_1 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1539199390U)) : (var_7))), (((/* implicit */long long int) var_8))))) ^ ((+(min((var_12), (var_12)))))));
    var_17 = ((/* implicit */unsigned int) var_7);
}
