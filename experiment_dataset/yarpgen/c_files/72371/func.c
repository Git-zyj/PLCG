/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72371
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
    var_12 *= ((/* implicit */_Bool) 2698081436U);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (((!(((var_2) > (((/* implicit */long long int) -640249245)))))) ? (max((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 10LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6500))) | (15U))))));
        var_14 &= ((/* implicit */signed char) (unsigned char)91);
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (signed char)-41))));
}
