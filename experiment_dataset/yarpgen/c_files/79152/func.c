/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79152
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
    var_13 = ((/* implicit */int) 8941342939157088899LL);
    var_14 = ((/* implicit */short) max((((/* implicit */int) max((var_10), (((/* implicit */short) var_8))))), ((+(((/* implicit */int) var_0))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (_Bool)0)))))))) != (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) var_4)), (var_1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) * (((/* implicit */int) (_Bool)0))))))))));
                var_17 = ((/* implicit */signed char) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8941342939157088918LL)) ? (((/* implicit */int) (short)12262)) : (-1867648630)))) || (((/* implicit */_Bool) (-(arr_3 [i_0]))))))))));
            }
        } 
    } 
    var_18 += ((/* implicit */signed char) ((unsigned char) var_5));
}
