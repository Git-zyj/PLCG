/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6892
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
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8190)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + (arr_1 [i_0])))))));
                var_10 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_2 [i_1 - 1] [i_1])))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) (~((+(((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)-42))))))));
}
