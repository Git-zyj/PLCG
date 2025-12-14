/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76882
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)57487)), (arr_4 [i_0] [i_0])));
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_12)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((var_18) << (3U))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8064)) | (var_13)))))) ? (min((var_5), ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_14) - (558304633U))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32615))))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)8040)) >> (((((/* implicit */int) (unsigned short)57487)) - (57469))))), (((((/* implicit */int) (unsigned char)52)) << (((var_13) - (1005792608)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_14)))) : (var_18))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8075)) ? (var_12) : (2103835906U)))) - (((unsigned long long int) 3994761678U))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((long long int) var_11)))))));
}
