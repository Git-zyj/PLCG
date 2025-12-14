/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86070
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))) && (((/* implicit */_Bool) var_12)))))));
                    arr_6 [5ULL] [i_1] [i_2] = ((/* implicit */unsigned short) arr_1 [(_Bool)1] [i_1]);
                }
            } 
        } 
        var_21 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) ((short) arr_3 [1U] [(unsigned short)7] [(_Bool)0]))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65511)))));
        var_22 ^= ((/* implicit */unsigned char) ((signed char) arr_5 [i_0] [(_Bool)1] [i_0 - 1]));
    }
    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)1))));
    var_24 = ((/* implicit */_Bool) var_3);
}
