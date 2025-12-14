/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79612
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (unsigned short)44709);
                var_18 += ((/* implicit */short) ((((((/* implicit */int) (unsigned short)44709)) << (((var_1) - (76211300))))) > (((/* implicit */int) (unsigned char)240))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) 293201530);
}
