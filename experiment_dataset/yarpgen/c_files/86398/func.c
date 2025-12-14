/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86398
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (short)32767);
                var_20 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-14))))), (1853919329764392575ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), (max((((/* implicit */unsigned short) (signed char)-14)), ((unsigned short)16833))))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)32239)))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (~((-(((/* implicit */int) var_6))))));
}
