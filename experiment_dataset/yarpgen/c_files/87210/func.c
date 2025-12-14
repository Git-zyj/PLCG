/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87210
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */short) min((((((/* implicit */int) arr_4 [i_1])) - ((-(((/* implicit */int) (unsigned char)80)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_8))))) < (var_5))))));
                var_20 = ((/* implicit */short) ((unsigned long long int) -4028942825681095535LL));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned char) -4028942825681095511LL);
    var_22 = ((/* implicit */unsigned int) var_17);
}
