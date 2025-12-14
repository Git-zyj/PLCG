/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72313
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)20583)))))));
            arr_6 [i_0] = ((/* implicit */long long int) ((_Bool) (signed char)-11));
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -8758125838763343043LL)) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [2U] [i_0 + 2]))));
        }
        var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
    }
    var_19 |= ((/* implicit */int) ((short) (unsigned short)5103));
}
