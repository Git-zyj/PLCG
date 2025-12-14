/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70113
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
    var_14 *= min((16223965279445857525ULL), (((/* implicit */unsigned long long int) 3184752430U)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5542183224489838730LL)) ? (3365390790U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))))))))))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((max((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_6)))))), (((((/* implicit */int) var_11)) >> ((((~(((/* implicit */int) var_11)))) + (196))))))))));
            }
        } 
    } 
}
