/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95651
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (((((/* implicit */_Bool) var_18)) ? (18446744004990074880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    var_22 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)68))))))) ? ((+(((/* implicit */int) max(((short)-32750), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */int) arr_3 [(short)6] [i_0]))));
        var_24 = ((/* implicit */unsigned short) ((int) 68719476732ULL));
    }
}
