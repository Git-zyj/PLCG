/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65017
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 |= ((/* implicit */unsigned short) min((((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1090675657U) << (((((/* implicit */int) arr_0 [i_0])) - (53)))))) && (((/* implicit */_Bool) (-(arr_3 [i_0])))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] = var_9;
            var_12 = ((((unsigned long long int) (unsigned short)65526)) << ((((~(((/* implicit */int) var_0)))) + (65))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) max((max((4294967286U), (((/* implicit */unsigned int) (signed char)127)))), (((/* implicit */unsigned int) ((arr_6 [i_0] [i_2]) ^ (((/* implicit */int) var_3)))))));
            arr_11 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
            var_14 = var_5;
        }
    }
    var_15 = ((/* implicit */unsigned int) ((var_6) & (var_5)));
}
