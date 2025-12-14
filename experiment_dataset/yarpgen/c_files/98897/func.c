/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98897
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
    var_11 = ((/* implicit */unsigned short) min((3453799884U), (41002967U)));
    var_12 ^= ((/* implicit */unsigned int) (((+(max((var_10), (((/* implicit */long long int) 4233353399U)))))) == (((/* implicit */long long int) max((max((268435328U), (((/* implicit */unsigned int) var_8)))), (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (41002966U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((3434178842U) / (4294967295U)))) ? (((/* implicit */int) arr_1 [i_0])) : (1591372922)));
                var_14 = ((/* implicit */unsigned long long int) (signed char)-88);
            }
        } 
    } 
}
