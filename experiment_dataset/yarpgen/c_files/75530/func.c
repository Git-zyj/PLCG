/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75530
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_0]))))))), (6247069568235444835ULL)));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (95443960U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) ((unsigned char) var_8))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((short) 65535))) ? (((/* implicit */int) ((_Bool) (signed char)-112))) : ((~(((/* implicit */int) var_11)))))), (((/* implicit */int) var_0))));
}
