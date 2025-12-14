/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57165
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
    var_10 = ((/* implicit */int) (-((~(max((var_5), (((/* implicit */unsigned int) var_3))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_3))));
        var_12 = ((/* implicit */short) min(((((_Bool)0) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) << (((arr_1 [i_0]) + (5713493439993909278LL)))))));
        var_13 = ((/* implicit */unsigned long long int) ((signed char) var_7));
        var_14 = ((/* implicit */signed char) 1746046697U);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1044076129)) || (arr_0 [i_0] [9ULL]))))))) : (((min((arr_1 [14ULL]), (((/* implicit */long long int) 3613845860U)))) * (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)0)), (-1044076129)));
}
