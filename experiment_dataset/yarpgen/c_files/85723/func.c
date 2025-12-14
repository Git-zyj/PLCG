/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85723
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
    var_15 ^= ((/* implicit */unsigned short) var_6);
    var_16 = ((/* implicit */int) (-(((unsigned long long int) max((11287277822761770280ULL), (((/* implicit */unsigned long long int) -92769276)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) -964738388))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])))))) : (((unsigned long long int) -92769276))));
                var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) arr_1 [i_0 - 2]))), (min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (13456245781115134607ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((11287277822761770280ULL), (((/* implicit */unsigned long long int) var_6))))))))));
}
