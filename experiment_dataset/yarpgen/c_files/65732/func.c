/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65732
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
                    var_19 = ((/* implicit */unsigned short) -1771785287);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
