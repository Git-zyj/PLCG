/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55726
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
    var_20 = ((/* implicit */unsigned short) var_15);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((~(max((((/* implicit */long long int) (signed char)-124)), (18014397435740160LL))))) : (((/* implicit */long long int) ((unsigned int) var_15)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) < (((/* implicit */int) (unsigned short)5334)))));
        var_23 |= ((/* implicit */unsigned char) (~(var_1)));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1017201908)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))))))));
    }
    var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1017201909)))) ? (min((var_18), (((/* implicit */long long int) 2147483634)))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)28)))))))) ? (((((((/* implicit */_Bool) 18269916436034375070ULL)) || (((/* implicit */_Bool) 160133816)))) ? (((/* implicit */int) ((1017201901) > (-1017201908)))) : ((-(((/* implicit */int) (signed char)-42)))))) : ((+(((/* implicit */int) (_Bool)0))))));
    var_25 |= ((/* implicit */signed char) var_3);
}
