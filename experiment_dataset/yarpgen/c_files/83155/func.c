/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83155
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
    var_15 = ((/* implicit */unsigned int) (-(max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)26064)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(min((((/* implicit */unsigned long long int) var_3)), (16997410055269818432ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (unsigned char)14)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_9))), (((long long int) var_13))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) (unsigned char)7)))) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [7LL])) : (arr_0 [i_0]))))))));
    }
}
