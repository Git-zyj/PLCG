/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88127
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) (short)29789);
                var_11 *= ((/* implicit */unsigned char) ((min((min((-134217728), (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned short) -7973479388421934656LL))))) / (((/* implicit */int) max((var_3), (var_3))))));
                var_12 = ((/* implicit */_Bool) (short)-1);
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */int) ((((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_8))))) | (((((/* implicit */_Bool) max((0U), (var_6)))) ? (((((/* implicit */int) (unsigned short)6359)) ^ (((/* implicit */int) (short)1)))) : (((/* implicit */int) (short)-5))))));
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (1) : (((/* implicit */int) (short)-29794)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_2)))))))));
}
