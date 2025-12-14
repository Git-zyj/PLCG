/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59609
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
    var_19 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), ((-9223372036854775807LL - 1LL))))), (((18024877307729101997ULL) << (((((10684601343289258129ULL) ^ (((/* implicit */unsigned long long int) -2038257356328795214LL)))) - (8642957390177170170ULL)))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4384295889992740054ULL))));
    var_21 *= ((/* implicit */unsigned long long int) var_10);
    var_22 -= ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4384295889992740053ULL)) ? (((/* implicit */unsigned long long int) 7000181825728717366LL)) : (arr_2 [i_0] [i_0])));
        var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) 14062448183716811549ULL))));
    }
}
