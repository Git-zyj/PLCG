/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57265
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
    var_13 = ((/* implicit */_Bool) ((short) ((int) ((var_3) / (((/* implicit */long long int) var_1))))));
    var_14 = var_6;
    var_15 = ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) ((((long long int) var_6)) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((int) var_0);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 ^= ((((((var_5) | (var_7))) | (((/* implicit */int) ((unsigned char) var_4))))) >= (((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((var_6) / (((/* implicit */int) var_12)))))))));
                arr_8 [(_Bool)1] [(unsigned char)8] [(_Bool)1] = ((unsigned int) ((((((/* implicit */int) ((signed char) var_9))) + (2147483647))) >> (((((/* implicit */int) var_0)) >> (((var_2) - (528542079U)))))));
            }
            var_17 = ((/* implicit */unsigned char) var_12);
        }
    }
}
