/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90315
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
    var_16 = ((/* implicit */unsigned long long int) -599989664);
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) (short)7))) >= (((/* implicit */int) (_Bool)1)))) ? (-1780747503) : (((/* implicit */int) (unsigned short)65535))));
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)0);
                var_19 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))) | (2895802935520787547LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047)))));
            }
        } 
    } 
    var_20 = ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)65516)) >> (((/* implicit */int) (unsigned short)20)))))) / (((/* implicit */int) (unsigned short)50127)));
}
