/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80968
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 306473964)) || (((/* implicit */_Bool) (short)0)))) ? (max((13824482564356619776ULL), (16ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) - (2710634956U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : ((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_11)))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14704))) : (13824482564356619773ULL)));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) + (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))));
}
