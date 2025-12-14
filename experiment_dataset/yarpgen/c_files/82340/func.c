/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82340
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = (((~(var_9))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39890))))));
                var_11 = ((/* implicit */unsigned int) var_4);
                var_12 += ((/* implicit */unsigned short) (~(var_9)));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)));
}
