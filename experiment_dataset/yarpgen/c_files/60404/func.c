/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60404
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) var_4);
                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)15892)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) : (-18LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 + 1])))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */int) min(((unsigned char)29), ((unsigned char)162)))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16593)) - (-1319545688)))), (-3809356289163466555LL)))));
    var_17 = max((var_9), (var_10));
    var_18 = ((/* implicit */int) var_3);
    var_19 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (signed char)-15)) : (-9)))));
}
