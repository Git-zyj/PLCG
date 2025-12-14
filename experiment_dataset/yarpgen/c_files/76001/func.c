/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76001
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) var_5));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned short) ((1371882795384945435LL) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -1371882795384945435LL)))))))));
                var_21 = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
}
