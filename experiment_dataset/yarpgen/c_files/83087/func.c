/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83087
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) << ((+(0)))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)128)) ? (((/* implicit */int) (unsigned char)193)) : (-2147483624)))), (var_3))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-21), (2147483647)))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) ((2147483623) | (((/* implicit */int) (unsigned char)20))))))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)30161)) || ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6626355534871024088LL))))) : (((((/* implicit */_Bool) -2533791231209536609LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)111))))))))))));
                var_17 = ((/* implicit */unsigned char) var_4);
                arr_6 [i_0 + 2] = (+(arr_0 [4]));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? ((+(((/* implicit */int) (unsigned char)200)))) : (2147483647)));
}
