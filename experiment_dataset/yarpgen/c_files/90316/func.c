/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90316
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
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)17902)) : (((/* implicit */int) var_5))))))))));
                var_18 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                var_19 = ((/* implicit */unsigned long long int) (-(var_4)));
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) ((17179868928LL) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)242)) - (226)))))) | ((~(var_8))))))));
    var_21 = ((/* implicit */signed char) ((short) var_8));
}
