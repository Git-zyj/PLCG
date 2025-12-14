/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/877
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) 9223372036854775807LL);
        var_13 = ((/* implicit */_Bool) var_2);
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) 2431231617U)), (2355888700872049033ULL))))) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : ((~((~(((/* implicit */int) var_1)))))))))));
        var_15 = ((/* implicit */_Bool) arr_1 [i_1]);
        var_16 -= ((/* implicit */short) (-(var_2)));
    }
    var_17 = ((/* implicit */long long int) (-(min((2355888700872049033ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2355888700872049057ULL)))))))));
}
