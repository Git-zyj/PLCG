/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6676
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
    var_12 |= ((/* implicit */unsigned int) var_3);
    var_13 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_3)), (2614111338831290665ULL))), (((/* implicit */unsigned long long int) var_5))))) ? (2466566455U) : (((/* implicit */unsigned int) min((-1101439308), (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_14 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)8)), (((((/* implicit */_Bool) arr_1 [10U])) ? (arr_1 [i_0]) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 - 1])))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_0 [13U] [13U]))));
    }
    var_16 = ((/* implicit */unsigned char) var_3);
}
