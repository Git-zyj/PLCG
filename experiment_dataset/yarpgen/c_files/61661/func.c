/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61661
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3] [i_1])) ? (((/* implicit */unsigned long long int) -1270373266)) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) * (((((/* implicit */unsigned long long int) -594212763571663495LL)) / (var_12)))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)49239)) >= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) 1838675310)) ? (arr_3 [(unsigned short)24] [i_1] [(unsigned short)24]) : (arr_3 [6U] [i_0 - 1] [6U]))) : (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
                var_20 = ((/* implicit */unsigned char) (unsigned short)0);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (unsigned short)65535);
}
