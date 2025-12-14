/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65559
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) max((var_9), (((/* implicit */short) var_3))))) <= (((((/* implicit */int) var_1)) | (((/* implicit */int) var_8))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165)))))));
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (short)26859))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_13))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (+((~(18446744073709551615ULL))))))));
                var_19 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])))))) | (arr_3 [i_1 - 1] [i_1 - 1]));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_1 [(unsigned short)0])))) | (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1])) | (18446744073709551615ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_7);
}
