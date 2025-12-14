/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79284
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
    var_20 *= var_1;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1072238045U))) + (((((/* implicit */_Bool) (short)-428)) ? (var_3) : (3222729250U)))))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) (short)-22161)) + (22180)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-25576)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)126))))) : (arr_1 [i_0])));
        var_22 &= ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (arr_1 [i_0]))));
        arr_4 [i_0] [1U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2U] [i_0])) ? (((/* implicit */int) (short)2852)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(unsigned char)17] [i_0]))))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)1481))))) / (arr_1 [i_1])));
        }
        var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)25016)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12684)) ? (((/* implicit */int) (short)17427)) : (((/* implicit */int) (short)-28612))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)22179))) / (arr_1 [i_1])))));
        var_26 = ((/* implicit */unsigned char) ((short) ((short) (short)1481)));
        var_27 |= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1] [i_1])) / (((/* implicit */int) arr_9 [i_1] [i_1]))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned char) 0U))) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_12))));
}
