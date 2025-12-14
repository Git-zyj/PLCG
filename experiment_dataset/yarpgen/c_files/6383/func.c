/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6383
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
    var_14 *= ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_5))) << (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)239))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_8))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (3840LL) : (((/* implicit */long long int) (~(1909288410U))))));
    }
}
