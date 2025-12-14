/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8648
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) var_9);
        var_12 = ((/* implicit */signed char) ((unsigned short) ((arr_0 [i_0 - 2]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)82))))));
        var_13 |= ((/* implicit */unsigned int) (-(((((((/* implicit */int) (signed char)-99)) + (2147483647))) >> (((((/* implicit */int) (signed char)82)) - (53)))))));
        arr_2 [i_0 + 2] [i_0 + 2] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_5 [i_1]))), (arr_3 [i_1] [i_1])));
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(_Bool)1]))))) ^ (((((/* implicit */_Bool) arr_3 [12U] [12U])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))) > (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_4))))))));
    }
    var_16 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)110))))));
    var_17 = ((/* implicit */signed char) var_0);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) / ((+(((unsigned int) var_9))))));
}
