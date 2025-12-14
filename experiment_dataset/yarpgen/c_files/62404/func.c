/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62404
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
    var_11 = ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) 603790470U))));
    var_12 -= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) & (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))), (((((unsigned int) (unsigned char)54)) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) >> (((((/* implicit */int) var_5)) - (158)))))))));
        var_14 *= ((/* implicit */unsigned char) max((((unsigned int) max((var_0), ((unsigned char)250)))), (((/* implicit */unsigned int) max((var_7), ((unsigned char)31))))));
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (arr_3 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_4 [(unsigned char)7])) <= (((/* implicit */int) arr_5 [i_1] [i_1]))))))))))));
        var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_0), ((unsigned char)101)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_3 [14U]))) : (arr_3 [i_1 + 2]))), (((/* implicit */unsigned int) var_5))));
    }
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_1)))));
    var_18 = var_1;
}
