/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89824
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1192175637)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 12836295348544932293ULL)) ? (-1192175638) : (((/* implicit */int) (unsigned char)162))))));
        var_17 = ((/* implicit */_Bool) 1192175621);
    }
    var_18 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_3))) % (((/* implicit */unsigned int) ((var_4) ? (1192175653) : (var_13)))))));
    var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_20 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)30155))))), (max((var_7), (((/* implicit */unsigned long long int) min((var_4), (var_0))))))));
    var_21 = -1192175647;
}
