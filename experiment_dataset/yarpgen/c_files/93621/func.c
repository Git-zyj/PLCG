/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93621
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
    var_11 = var_10;
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_10))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)0)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)65527)))) / (((/* implicit */int) ((var_5) >= (arr_2 [8ULL] [8ULL])))))), ((~(((/* implicit */int) arr_0 [i_1 - 1]))))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) 629326274U);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
}
