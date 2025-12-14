/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72880
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
    var_19 = ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) var_9)) ? (4393304572197030257LL) : (4393304572197030257LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-4393304572197030257LL) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4393304572197030245LL)))) : ((-(-4393304572197030257LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -4393304572197030257LL))));
        arr_6 [i_0] = ((((/* implicit */_Bool) 4393304572197030257LL)) ? (arr_0 [i_0]) : (((/* implicit */int) (!(arr_2 [i_0])))));
        arr_7 [i_0] = ((/* implicit */unsigned short) ((long long int) 4393304572197030275LL));
    }
}
