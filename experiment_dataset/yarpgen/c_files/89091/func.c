/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89091
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
    var_17 = var_14;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) arr_3 [i_1] [i_0]);
                arr_6 [i_1] = ((/* implicit */long long int) (~(((((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (signed char)-13))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((unsigned long long int) 3066968499U)) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (signed char)-36)) : ((~(((/* implicit */int) (signed char)123)))))))));
}
