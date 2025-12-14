/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95830
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) ((int) 1493572272));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 12391644040339427377ULL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (1214234841)))) : (((unsigned int) var_6)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_7);
}
