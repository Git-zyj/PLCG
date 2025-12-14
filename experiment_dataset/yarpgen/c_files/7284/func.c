/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7284
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_1))));
    var_11 = ((/* implicit */unsigned int) var_3);
    var_12 ^= 131056U;
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((unsigned long long int) 6562936474360622007ULL))));
                arr_8 [i_1] = ((/* implicit */signed char) arr_4 [21U] [21U] [21U]);
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2802488092U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52904))) : (1731375357264601907ULL)));
            }
        } 
    } 
}
