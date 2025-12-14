/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99603
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
    var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (unsigned char)85))))))));
    var_14 = ((/* implicit */long long int) (~(12994274449782675606ULL)));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))) ? (var_12) : (var_5)));
    var_16 |= var_10;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_17 = min((arr_2 [i_0 + 3]), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-113)) + (143))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) var_11);
    }
    for (int i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-16364)))))));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) + ((+(((/* implicit */int) var_2))))));
    }
}
