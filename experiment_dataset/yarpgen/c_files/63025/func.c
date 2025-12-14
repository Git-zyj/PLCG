/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63025
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
    var_18 = (-(max((((/* implicit */int) ((var_6) == (((/* implicit */int) (unsigned short)30840))))), ((-(((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) (-(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_20 = ((/* implicit */short) (signed char)-21);
        var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [(signed char)10])) ? (((/* implicit */int) arr_1 [(short)4])) : (((/* implicit */int) (signed char)50)))) > (((/* implicit */int) min((((short) arr_1 [(short)6])), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)0))))))))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)23)), ((short)32767)));
    }
}
