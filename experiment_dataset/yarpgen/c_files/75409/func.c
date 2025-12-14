/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75409
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))));
        arr_3 [i_0] [6U] = ((/* implicit */int) ((((/* implicit */int) (((!(((/* implicit */_Bool) 1795858929)))) && (((/* implicit */_Bool) max((-1795858938), (-1795858921))))))) <= (((((/* implicit */_Bool) (unsigned short)65535)) ? (2147483635) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))));
        var_10 += ((/* implicit */unsigned short) (+((+(var_1)))));
        var_11 = ((/* implicit */unsigned long long int) var_2);
        var_12 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    var_13 = ((/* implicit */int) var_1);
    var_14 = ((/* implicit */long long int) var_8);
}
