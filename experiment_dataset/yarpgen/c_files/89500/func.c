/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89500
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0 + 2] [(short)2] = ((/* implicit */_Bool) 2147483647);
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (9223372036854775807LL)))) / (((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (18446744073709551606ULL)))));
                var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-124)))) + (((/* implicit */int) arr_3 [i_1 - 1] [i_0 - 1]))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (short)-20352))))) | ((+(-2089257574))))), (((((((/* implicit */int) var_11)) - (((/* implicit */int) arr_2 [i_0] [i_0])))) + (((/* implicit */int) arr_4 [i_1] [i_1 - 1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (var_14))), (((/* implicit */unsigned int) (signed char)117)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_17))));
}
