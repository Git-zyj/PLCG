/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68073
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_5)), (((var_11) + (((/* implicit */int) var_0)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_10))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_12)))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(var_3))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((var_1) >> (((((/* implicit */_Bool) var_11)) ? (max((-1063301129061636735LL), (((/* implicit */long long int) (signed char)7)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) min((886595110U), (((/* implicit */unsigned int) (signed char)-14))));
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) (short)-3845)), (-1)));
            }
        } 
    } 
    var_16 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 886595133U)), (134217727LL)))), (var_4)));
    var_17 = ((/* implicit */long long int) min((2058389659U), (2236577648U)));
}
