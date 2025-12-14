/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71299
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
    var_12 = (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) (unsigned char)82)))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_4)));
    var_13 = ((/* implicit */unsigned char) (((-(((-2048) / (((/* implicit */int) var_10)))))) & (33553408)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] |= ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned short)448)) : (((((/* implicit */_Bool) max((var_4), (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (-1576051649) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))));
        var_14 = ((/* implicit */int) max((var_14), (((min((2013265920), (((/* implicit */int) (unsigned char)239)))) | ((-((+(((/* implicit */int) var_9))))))))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_10)))), (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned short)32775))))))) ? (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_9))))))));
        var_16 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    var_17 = var_11;
}
