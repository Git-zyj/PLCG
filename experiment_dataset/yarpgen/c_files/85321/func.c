/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85321
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
    var_12 = max((min((3346468555U), (((((/* implicit */_Bool) -16777216)) ? (3346468555U) : (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) * ((-(((/* implicit */int) (unsigned char)89))))));
        var_14 = ((/* implicit */unsigned short) ((var_2) == (((/* implicit */int) (unsigned short)32752))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)30)) && (((/* implicit */_Bool) arr_2 [i_1]))));
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32784))) : (1073741823U)));
    }
    var_17 = ((/* implicit */short) min(((unsigned char)225), (var_0)));
}
