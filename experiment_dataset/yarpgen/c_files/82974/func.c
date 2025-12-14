/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82974
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (min(((unsigned short)9607), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-26)) || (((/* implicit */_Bool) (unsigned char)6)))))))));
        var_18 = ((/* implicit */_Bool) ((unsigned short) (!((_Bool)1))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (arr_1 [i_0])))), (var_4)))), (min((var_14), (arr_2 [i_0]))))))));
    }
    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (15994739999915155530ULL)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)55948)))))) ? (((/* implicit */int) ((-2147483626) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65511)))))))) : (((/* implicit */int) var_12))));
    var_22 = ((/* implicit */short) max((max((min((((/* implicit */int) var_13)), (3145728))), (((/* implicit */int) var_5)))), (((/* implicit */int) var_7))));
}
