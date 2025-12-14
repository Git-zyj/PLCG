/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86248
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned char) var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) (unsigned char)0);
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) 18446744073709551609ULL)))))))));
            }
        } 
    } 
}
