/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57643
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
    var_19 += ((/* implicit */signed char) var_4);
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) var_9));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned short)11])) ? (((/* implicit */long long int) var_10)) : (var_3))))), (((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [(signed char)3]), (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) (~(arr_3 [i_0] [10U])))) : (min((var_5), (arr_2 [i_0] [10ULL])))))));
                var_22 = ((/* implicit */signed char) var_2);
                var_23 = ((/* implicit */unsigned short) ((_Bool) min((arr_2 [i_0] [i_1]), (arr_2 [1] [8]))));
            }
        } 
    } 
}
