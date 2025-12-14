/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/805
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -8642768207036162157LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) : (79644598U)));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-15816)) ? (((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) (_Bool)0)))) : ((-((+(-1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((max((((/* implicit */int) (unsigned char)228)), (arr_0 [i_0]))), ((+(((((/* implicit */int) (signed char)26)) - (9))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (short)32767)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (2896173157U) : (4215322704U))), (((/* implicit */unsigned int) arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) arr_4 [i_1]);
        var_17 ^= ((/* implicit */unsigned int) (short)-28810);
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (~(var_11))))) ? (((/* implicit */int) ((short) var_7))) : (-1841059027)));
    var_19 = ((/* implicit */unsigned char) var_13);
}
