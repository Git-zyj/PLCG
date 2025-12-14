/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91860
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
    var_13 = ((/* implicit */long long int) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)93))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) (-(min(((~(((/* implicit */int) (signed char)-94)))), (((/* implicit */int) (unsigned char)136))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3435)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-94)) ? (var_2) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)94)))))))) : (11147961121692164644ULL)));
        var_17 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)-15))))))), (min((var_6), (((/* implicit */unsigned long long int) var_4))))));
    }
    var_18 = ((/* implicit */unsigned char) var_7);
}
