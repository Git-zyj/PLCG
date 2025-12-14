/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76540
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
    var_20 = ((/* implicit */short) var_2);
    var_21 = min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) var_6)), (var_1))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) max((var_19), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((int) ((unsigned short) var_1)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned int) var_19)))));
        var_23 = ((/* implicit */signed char) ((unsigned short) ((signed char) (-(((/* implicit */int) var_19))))));
        var_24 = ((/* implicit */long long int) min((var_24), (max((((/* implicit */long long int) ((int) max((var_8), (var_7))))), (min((min((((/* implicit */long long int) arr_1 [i_1])), (arr_0 [(unsigned char)0]))), (max((((/* implicit */long long int) arr_7 [6ULL])), (var_15)))))))));
    }
    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) min((var_4), (((/* implicit */unsigned long long int) var_13))))))));
}
