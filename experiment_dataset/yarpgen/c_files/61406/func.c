/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61406
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
    var_20 = ((/* implicit */_Bool) 8762334179041303435LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_13)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & ((~(16278082421869582735ULL))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) : (13621148460548731516ULL)))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(var_19)))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16598))) | (1116460918U))))) : (((/* implicit */unsigned int) var_12)))))));
            }
        } 
    } 
}
