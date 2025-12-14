/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6374
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */signed char) max((((/* implicit */int) (!(((_Bool) var_4))))), ((((+(((/* implicit */int) var_5)))) | (((/* implicit */int) var_5))))));
                var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)72))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (arr_0 [i_1 + 1] [i_1 + 1])))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142))))))))));
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_11), (var_4)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((max((var_2), (((/* implicit */int) var_7)))) << (((/* implicit */int) (_Bool)1)))) <= (var_2))))));
}
