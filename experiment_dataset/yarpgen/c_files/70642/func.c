/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70642
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
    var_20 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_5)), (9223372036854775802LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (min((((/* implicit */unsigned int) (unsigned short)510)), (var_12))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) var_12);
        var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (7809236211617239020LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(min((var_12), (((/* implicit */unsigned int) (signed char)0)))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (-217970182)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)512)) : (((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) var_13)), (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) & (((/* implicit */int) (unsigned short)501))))))) : (((/* implicit */unsigned long long int) max((((long long int) -479978370)), (((/* implicit */long long int) (-(1921384712)))))))));
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(var_15))))))));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_14))));
}
