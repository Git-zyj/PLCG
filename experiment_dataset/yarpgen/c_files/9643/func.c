/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9643
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((((/* implicit */int) var_15)) + (2147483647))) << (((304142687) - (304142687))))), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) (short)11243))))) ? (var_10) : (((/* implicit */int) ((short) var_8))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_4)))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_20 = ((((/* implicit */_Bool) var_1)) ? (2083381863U) : (2083381855U));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (arr_3 [i_0])));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_16))));
            var_23 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2211585422U)));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                var_26 = ((/* implicit */short) var_10);
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) var_1);
            }
            var_27 = (short)22862;
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((20) - (4)))));
    }
    var_28 = ((/* implicit */unsigned int) var_10);
}
