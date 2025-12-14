/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80101
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 1879878020U))));
    var_16 = ((/* implicit */unsigned long long int) var_0);
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((((/* implicit */_Bool) 65528U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 65528U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)86)))) / (((/* implicit */int) var_7)))))));
    var_18 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_19 = (+(arr_0 [i_0 + 1]));
        var_20 = ((/* implicit */signed char) arr_0 [i_0]);
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12699))) ^ (arr_2 [i_0 + 1])));
    }
}
