/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67664
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((18446744073709551588ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                var_19 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [(unsigned char)4]);
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))))), (var_7)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_11);
}
