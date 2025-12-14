/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59132
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
    var_19 = ((((/* implicit */int) var_0)) << (((/* implicit */int) ((((var_13) || (((/* implicit */_Bool) (unsigned char)155)))) || (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_18))))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 4])), (arr_1 [i_0 + 1])))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (_Bool)1))) | (((/* implicit */int) max(((short)-16561), (((/* implicit */short) var_2))))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((((/* implicit */_Bool) arr_0 [(unsigned char)3])) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))) ? (arr_1 [i_0 - 3]) : (((/* implicit */unsigned long long int) var_4))));
    }
    var_22 = ((/* implicit */long long int) var_2);
}
