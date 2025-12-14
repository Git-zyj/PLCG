/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76247
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
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (6902572905455039138LL)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) & (var_15)))))));
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535)))))));
        var_19 += ((/* implicit */_Bool) arr_1 [3ULL]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_0] [4ULL] [4ULL] = ((/* implicit */int) ((unsigned int) (_Bool)1));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6902572905455039134LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2 + 2])) == (((/* implicit */int) var_11))));
            var_22 = ((/* implicit */_Bool) arr_1 [i_2]);
            var_23 += ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned short)10]))))) - ((-(((/* implicit */int) (unsigned char)238)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_12 [i_0] [i_3] [i_3]))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_0])) : (arr_10 [i_0] [i_0] [i_0]))))));
        }
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) var_14))) > (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) & (min((1ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
}
