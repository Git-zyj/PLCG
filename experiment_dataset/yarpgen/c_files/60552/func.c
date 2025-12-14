/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60552
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (~(2117825841312480605ULL)));
    }
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((16115249873330142708ULL) >> (((/* implicit */int) (signed char)59))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5047017487073054114ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)168)), (var_4))))) : ((-(var_10)))))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_10))))));
}
