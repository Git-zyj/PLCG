/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78871
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
    var_11 = ((/* implicit */_Bool) var_7);
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) arr_0 [i_0]);
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))))), ((+(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_16 = var_3;
}
