/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59248
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
    var_15 = ((/* implicit */_Bool) ((short) var_9));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)2] [(signed char)2])) ? (((/* implicit */int) arr_1 [2U] [2U])) : (((/* implicit */int) arr_1 [10LL] [10LL]))))) ? (((/* implicit */int) arr_1 [2] [2])) : (((/* implicit */int) arr_1 [(unsigned char)0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) min((12095893549754509854ULL), (12095893549754509844ULL)))))));
        var_17 += ((/* implicit */signed char) arr_2 [i_0]);
        var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) max(((unsigned char)143), (((/* implicit */unsigned char) (_Bool)1)))))))));
    }
    var_19 -= ((/* implicit */short) var_7);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_13)))) + (((/* implicit */int) (!(((/* implicit */_Bool) 12095893549754509841ULL))))))))));
}
