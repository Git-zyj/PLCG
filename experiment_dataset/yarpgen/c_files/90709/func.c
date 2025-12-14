/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90709
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
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)60170)), ((~(((/* implicit */int) (_Bool)1))))))));
                arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_1 [i_0] [i_1])))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : ((~(var_11)))));
                var_16 = ((/* implicit */long long int) (-((-(((((/* implicit */unsigned long long int) 3943430482677861262LL)) | (13118219372795334978ULL)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
    var_17 = var_4;
}
