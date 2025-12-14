/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9007
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) var_13))), (arr_1 [i_0]))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((long long int) (unsigned char)58)))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = var_4;
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (((~(min((((/* implicit */long long int) arr_4 [i_1])), (var_13))))) == (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
        var_18 = ((/* implicit */_Bool) arr_1 [i_1]);
        var_19 = ((/* implicit */unsigned long long int) var_12);
        var_20 = ((/* implicit */unsigned int) arr_4 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_21 = ((/* implicit */short) ((8133295163782987419ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((short)28184), (((/* implicit */short) var_0)))), ((short)-31646)))))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) ((unsigned char) (short)-31647))) : (((int) arr_8 [i_2] [i_2]))));
    }
}
