/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6863
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
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */long long int) var_9);
            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)66))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0] [i_0])), (((int) arr_1 [i_0] [i_0]))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_5)) / (((/* implicit */int) ((((/* implicit */_Bool) ((var_14) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 15079446416539440656ULL))));
}
