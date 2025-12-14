/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82802
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
    var_20 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_21 *= ((/* implicit */short) var_15);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (4294966272U)));
            var_23 = ((/* implicit */signed char) var_2);
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((((+(((/* implicit */int) var_0)))) & (((/* implicit */int) ((short) (short)11814))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0 + 2]))));
            var_25 = ((/* implicit */short) arr_1 [i_1]);
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [(short)5]) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)1])))));
        }
        arr_6 [9LL] = ((/* implicit */short) (-(((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])) - (arr_3 [i_0 + 2])))));
    }
}
