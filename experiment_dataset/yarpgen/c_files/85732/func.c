/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85732
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)119)))) : (((/* implicit */int) var_6))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)64213)) ? (((((/* implicit */_Bool) (unsigned short)63484)) ? (((/* implicit */int) (short)-16584)) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_12)))))) : (((((((/* implicit */_Bool) (unsigned char)137)) && (((/* implicit */_Bool) (unsigned char)119)))) ? (((((/* implicit */_Bool) (unsigned short)21178)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned char)0))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)137)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)4518))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)13)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151))))))))));
        arr_4 [(unsigned char)19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        arr_7 [(unsigned short)14] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (unsigned char)151))));
        arr_8 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) (short)8825)))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_12))));
}
