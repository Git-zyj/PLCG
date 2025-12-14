/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64781
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
    var_16 = ((/* implicit */unsigned short) ((3413441790U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-12)))) ? (((((/* implicit */_Bool) 10871359298609439468ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-72)))) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_0]);
        var_18 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    var_19 = (_Bool)1;
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))));
}
