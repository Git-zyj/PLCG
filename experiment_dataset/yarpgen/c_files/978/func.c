/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/978
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */unsigned short) var_1);
                var_15 = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_0]) : (1175640821))) < (((/* implicit */int) max(((unsigned short)41704), (((/* implicit */unsigned short) var_0))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned long long int) ((var_5) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)23825)))))) : (((/* implicit */int) max((((/* implicit */short) var_1)), (min((var_10), (((/* implicit */short) var_3)))))))));
    var_17 -= ((/* implicit */short) ((int) ((unsigned long long int) ((unsigned long long int) var_12))));
}
