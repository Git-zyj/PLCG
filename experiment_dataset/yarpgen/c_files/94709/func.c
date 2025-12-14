/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94709
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 1]))) ? (3072U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((4163916840457640857ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), ((signed char)28)))))));
                var_20 = ((/* implicit */_Bool) ((int) var_8));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)102)), (3072U)));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) (!(min((var_9), ((!(((/* implicit */_Bool) var_10))))))));
}
