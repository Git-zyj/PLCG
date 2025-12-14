/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70342
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_14)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_0 [i_0 + 2])) ^ (arr_1 [i_0 + 2] [i_0]))), ((~(arr_1 [i_0 + 2] [i_0 + 1])))));
        var_17 -= var_5;
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_18 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) (((~(-6097568475658291421LL))) - (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) (_Bool)1)))))));
            var_20 = ((/* implicit */long long int) var_15);
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)61631))));
            var_22 = ((/* implicit */signed char) (unsigned short)42892);
            var_23 = ((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != (var_15)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) var_8);
            arr_12 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_7)) * (((/* implicit */int) ((unsigned char) var_13)))));
            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_3))));
        }
    }
}
