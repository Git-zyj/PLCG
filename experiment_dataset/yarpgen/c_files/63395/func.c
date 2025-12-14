/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63395
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] |= ((((int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) var_1))))) == (((int) var_16)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) var_5)) : (((arr_2 [3ULL] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)46))))));
        }
        arr_7 [0LL] = ((/* implicit */signed char) (unsigned char)209);
    }
    var_22 = var_3;
    var_23 = ((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)16439)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((var_12), ((_Bool)1)))))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)50)))) | (((((/* implicit */int) var_1)) % (-1605004743)))))) : (var_11)));
}
