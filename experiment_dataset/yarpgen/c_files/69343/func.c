/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69343
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((_Bool) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) (short)0)))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-5)) / (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */short) (~(((/* implicit */int) (short)32749))));
                var_12 *= ((/* implicit */unsigned short) ((unsigned long long int) 14));
            }
        } 
    } 
    var_13 ^= ((/* implicit */signed char) ((long long int) (-(((((/* implicit */_Bool) 987830908U)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) var_6)))))));
}
