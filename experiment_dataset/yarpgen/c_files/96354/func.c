/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96354
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
    var_14 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)5272)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)14321)))), (var_6)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7680))) * (((unsigned int) arr_1 [i_0] [i_0])))))));
        var_15 = ((/* implicit */unsigned long long int) ((((_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 2])) : ((~(arr_0 [i_0 + 2])))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1583555010)) ? (((/* implicit */unsigned long long int) 1507860163U)) : (18446744073709551615ULL)));
        var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((-1440563864117949792LL) & (1440563864117949792LL)))))) ? (((((/* implicit */_Bool) 1840394987U)) ? (((/* implicit */unsigned long long int) -1440563864117949802LL)) : (5922171935846458410ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21069)))));
        var_17 = ((/* implicit */unsigned int) ((short) (-(-1LL))));
    }
}
