/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62457
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)56), (((/* implicit */signed char) (_Bool)0)))))));
                var_19 = max((1887599967), (1887599967));
                arr_5 [(_Bool)1] = ((((unsigned long long int) arr_1 [i_0] [i_1])) | (((/* implicit */unsigned long long int) ((var_6) >> (((17876195109379591495ULL) - (17876195109379591490ULL)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) % (var_9))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1887599967)) && (((/* implicit */_Bool) (signed char)-57))))))));
    var_21 = ((/* implicit */_Bool) ((var_8) * (((/* implicit */int) (!(((/* implicit */_Bool) 1976168302)))))));
}
