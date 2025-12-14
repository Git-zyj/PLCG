/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65810
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
    var_16 *= ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_18 += ((/* implicit */int) arr_1 [i_0] [(_Bool)1]);
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_20 *= ((/* implicit */signed char) arr_2 [i_1 - 1]);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_21 = ((/* implicit */int) (!(arr_5 [i_0] [i_0] [i_0] [i_1 + 1])));
                var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)10195)) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))));
            }
        }
    }
    var_23 = ((/* implicit */long long int) var_6);
}
