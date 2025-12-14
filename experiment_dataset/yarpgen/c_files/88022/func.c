/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88022
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) (short)112)))))))));
    var_21 = ((/* implicit */int) min((var_21), (((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)112)) : (var_11)))) ? (var_6) : (max((((/* implicit */unsigned long long int) var_19)), (var_15))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_19);
        var_22 = ((/* implicit */unsigned int) var_18);
        var_23 = (short)32764;
        var_24 += ((/* implicit */_Bool) var_4);
    }
}
