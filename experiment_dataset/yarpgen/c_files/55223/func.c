/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55223
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
    var_15 = ((/* implicit */_Bool) (unsigned char)123);
    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) var_10)) : (var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) max((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))));
                var_17 += ((short) ((int) ((((/* implicit */_Bool) arr_1 [i_1])) || (var_6))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((unsigned long long int) var_4));
}
