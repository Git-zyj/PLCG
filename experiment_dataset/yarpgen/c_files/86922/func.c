/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86922
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_4))));
                arr_5 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) var_15))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27454)) && (((/* implicit */_Bool) (signed char)74))))))))));
}
