/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81260
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
    var_12 = ((max(((+(((/* implicit */int) var_1)))), ((-(((/* implicit */int) var_8)))))) * (((/* implicit */int) max((((((/* implicit */int) var_1)) <= (((/* implicit */int) var_4)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) 0ULL);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_14 = var_7;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_0 [i_0]))));
            arr_7 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [(unsigned short)11] [i_0] [(unsigned short)11]);
            var_16 *= ((/* implicit */_Bool) 18446744073709551615ULL);
        }
    }
    var_17 = ((/* implicit */unsigned int) var_8);
}
