/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79799
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [(unsigned short)10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-4009617296560284540LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22))) < (-8602551285423227639LL)))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (signed char)-106))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4820970784441660375ULL)) ? (((/* implicit */int) (signed char)-61)) : (329434318)));
    }
    var_19 = ((/* implicit */unsigned int) var_15);
}
