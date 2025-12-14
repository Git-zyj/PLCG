/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56187
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
    var_18 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [10U] &= ((/* implicit */int) arr_4 [i_0]);
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (7231731364623212647ULL))))));
                arr_7 [(short)12] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_4 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))), (var_3)));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((346986596907570074ULL), (((/* implicit */unsigned long long int) min((201326592U), (((201326614U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))))))));
}
