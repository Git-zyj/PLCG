/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80175
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))))));
                var_15 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) min((var_0), (((/* implicit */signed char) var_7))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) 1901858636U)))) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) : (6545180875930266209ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)82))))))))));
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */int) max((var_2), (var_5)))) & (((/* implicit */int) ((_Bool) var_8)))))));
    var_18 = ((/* implicit */signed char) (-(((var_12) / (((((/* implicit */int) var_1)) * (-9)))))));
}
