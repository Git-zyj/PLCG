/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72861
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1173532511750398358LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_17 = 333253990489996267LL;
            var_18 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (-1173532511750398353LL))) % (((((/* implicit */_Bool) var_7)) ? (-1173532511750398343LL) : (((/* implicit */long long int) var_12))))));
            var_19 = ((/* implicit */long long int) ((short) ((long long int) var_4)));
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0]))))) ? (-1173532511750398341LL) : ((+(var_14))));
        }
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) % (-1173532511750398345LL)))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_5)))) | ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
        var_22 += (short)-26578;
    }
    var_23 = ((/* implicit */unsigned char) (~(max((-4976374133430133974LL), (((((/* implicit */_Bool) var_6)) ? (5549951174080798801LL) : (var_14)))))));
}
