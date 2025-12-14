/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60077
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((1366745071U), (1366745083U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), ((~(((/* implicit */int) (unsigned char)33))))))) : (4294967281U)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = (signed char)76;
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) 15143840858341808857ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (6890646172492584582ULL))), ((-(4777316720999462550ULL))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1 - 1])) != (((/* implicit */int) (unsigned short)49887))));
        arr_8 [i_1] = ((/* implicit */unsigned short) var_3);
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0))));
    }
}
