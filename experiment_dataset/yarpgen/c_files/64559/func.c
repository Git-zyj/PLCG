/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64559
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
    var_13 = var_7;
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(unsigned char)6] = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) (unsigned char)129)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)129)), ((unsigned short)64010)))))) - (((/* implicit */int) var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned short)13])) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned char)255)))))) * (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned char) ((unsigned short) var_4));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)224)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) ((unsigned char) (unsigned char)62))))) : (((/* implicit */int) arr_0 [i_1]))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (unsigned short)1521))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)199)) - (((((/* implicit */_Bool) (unsigned short)37714)) ? (((/* implicit */int) (unsigned short)27822)) : (((/* implicit */int) arr_5 [i_1]))))))));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39782)) ? (((/* implicit */int) (unsigned short)54774)) : (((/* implicit */int) (unsigned char)96))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_7))))));
}
