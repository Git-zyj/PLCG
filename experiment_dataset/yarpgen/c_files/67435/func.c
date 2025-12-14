/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67435
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) > (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_0)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 |= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_0])) - (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))))));
        var_21 ^= ((/* implicit */short) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) (short)-4287))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) < (((/* implicit */int) (unsigned short)47728))))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_8 [(short)7] = ((/* implicit */int) ((max((arr_7 [i_1]), (((/* implicit */unsigned int) arr_5 [i_1 + 1])))) == (((/* implicit */unsigned int) min((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (1294419035))))));
        var_22 = ((/* implicit */short) max(((((!(((/* implicit */_Bool) 383303685U)))) ? (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (unsigned short)27999))))) : (((((/* implicit */long long int) arr_6 [i_1 - 1])) ^ (3599240609370405609LL))))), (((/* implicit */long long int) ((int) arr_4 [i_1 - 1] [i_1 - 2])))));
        var_23 ^= ((/* implicit */signed char) ((short) var_3));
    }
}
