/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89413
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
    var_15 = ((/* implicit */signed char) min(((-(max((0ULL), (((/* implicit */unsigned long long int) 9223372036854775799LL)))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_1 [i_0]))))));
                var_17 = ((/* implicit */_Bool) (-(((((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) (unsigned char)255))))) / (((/* implicit */int) max((((/* implicit */short) var_13)), (arr_4 [i_1] [(_Bool)1] [(short)11]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((short) (+(0))));
}
