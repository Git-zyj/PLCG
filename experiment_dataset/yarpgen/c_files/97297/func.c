/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97297
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
                var_20 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (((1152921504606322688LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / ((+(1152921504606322697LL)))))) ? ((((((_Bool)0) ? (1152921504606322725LL) : (((/* implicit */long long int) -616138347)))) / (1152921504606322712LL))) : (((((var_10) / (1915865840101806538LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182)))))));
}
