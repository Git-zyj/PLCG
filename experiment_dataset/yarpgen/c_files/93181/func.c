/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93181
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) var_12);
                var_19 = ((((/* implicit */int) (short)-29633)) < (((/* implicit */int) (short)4850)));
                var_20 = ((/* implicit */signed char) ((arr_0 [i_1]) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (536950453))))));
                arr_7 [i_1] = ((/* implicit */short) (+(((((/* implicit */int) ((9227470184224311621ULL) >= (((/* implicit */unsigned long long int) arr_1 [i_0]))))) >> (((2863942054464092755LL) - (2863942054464092753LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_1))));
}
