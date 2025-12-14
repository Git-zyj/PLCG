/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91751
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_2))));
        var_17 = (-(((((/* implicit */_Bool) ((-7414574179957175488LL) / (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_3)))) : (((17430049091990568305ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        var_18 = ((/* implicit */signed char) (((-((-(1016694981718983294ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_2))))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2)))))))))));
        var_19 = ((/* implicit */short) var_7);
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5772)) ? (((/* implicit */long long int) var_1)) : ((-9223372036854775807LL - 1LL))))) == (min((((/* implicit */unsigned long long int) var_7)), (1016694981718983326ULL))))))));
    }
    var_21 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) / (1ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_12)))))))));
}
