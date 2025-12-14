/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72545
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
    for (short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (unsigned short)26698))))))));
                    var_20 = ((/* implicit */unsigned int) 4895170892204505542ULL);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */long long int) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)20)), (6718829562187887823ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)20)) + (((/* implicit */int) (signed char)-55))))))))));
}
