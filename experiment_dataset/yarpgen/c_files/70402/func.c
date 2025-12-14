/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70402
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [13LL] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [(short)9]);
        arr_4 [i_0] = ((((/* implicit */_Bool) 2401162587U)) ? (((/* implicit */long long int) ((/* implicit */int) ((752175791919230752LL) == (752175791919230752LL))))) : (752175791919230752LL));
    }
    var_19 = ((/* implicit */short) ((max((752175791919230752LL), (((/* implicit */long long int) (unsigned short)76)))) < (((/* implicit */long long int) ((/* implicit */int) var_18)))));
    var_20 = max(((+(((((/* implicit */_Bool) 2896472062U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2896472062U))))), (var_0));
}
