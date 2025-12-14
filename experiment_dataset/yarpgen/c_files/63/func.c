/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63
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
    var_11 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)3050)))), (((/* implicit */int) min((var_10), ((_Bool)1)))))))));
    var_13 -= ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)13248))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_0), (var_1)))))) : (min((var_9), (((/* implicit */unsigned int) var_10)))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) var_5)))))))));
                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-24124))))));
            }
        } 
    } 
}
