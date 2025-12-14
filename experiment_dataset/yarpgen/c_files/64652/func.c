/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64652
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
    var_19 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((arr_7 [i_1] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (417979459399539937LL)))) : (((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_1] [i_1]))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_0])) <= (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (min((var_10), (((/* implicit */long long int) 720049585U))))))));
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_17))))));
}
