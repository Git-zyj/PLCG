/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74399
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
    var_11 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) (_Bool)0)), (var_1))), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_12 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)59)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205))))))))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31226))))) | (((/* implicit */int) ((_Bool) var_1)))))));
        }
        var_13 ^= max((((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_2 [(_Bool)1])))))), (((((/* implicit */int) var_0)) + ((-(((/* implicit */int) (_Bool)1)))))));
        var_14 = (-(((/* implicit */int) ((_Bool) var_1))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(var_4)))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_9), (arr_0 [i_0] [i_0])))), ((-(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))))))))));
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_2))));
}
