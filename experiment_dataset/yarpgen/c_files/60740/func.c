/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60740
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
    var_17 = ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_18 ^= (!(arr_2 [i_0 + 1] [i_1]));
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_0 [i_0 - 1]))));
            arr_5 [i_0 + 1] [1LL] = ((/* implicit */long long int) var_12);
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_9 [(unsigned char)11] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)255));
            var_19 = ((/* implicit */unsigned short) ((var_9) | (((/* implicit */int) var_6))));
        }
        for (int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) / (1978270138777080283LL))))))));
            arr_12 [i_0] [i_0 - 1] [i_0 + 4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 1]))));
        }
        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3])))));
        var_21 ^= ((/* implicit */long long int) (_Bool)1);
    }
}
